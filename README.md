# 项目概述

这个项目实现了一个带函数过程调用与引用类型的程序语言解释器。

任务是这么说的

```
这个任务中，你需要在WhileF语言中加入基本类型系统与引用类型。该语言的类型包括整数 类型、所有类型的指针类型。声明变量时可以规定这个变量是某类型的引用并初始化，函数形 参也可以是某类型的引用。要求1：在WhileF语言中加入基本类型系统，并实现词法分析、语 法分析与语法树输出。要求2：实现解释器。要求3：进一步加入引用类型，并实现词法分析、 语法分析、语法树输出与解释执行。
```

### 语法树规则 (The rule of the grammar tree): 

```c

E :: =
//基本表达式
       N | V | -E | E + E | E - E | E * E |
       E / E | E % E | E < E | E <= E | E == E |
       E != E | E >= E | E > E | E && E | E || E |
       !E | *E | &E | FUNC_NAME(E, E, ..., E)
C ::  =
        int V|
	    int ptr V|
        int ptr ... ptr V| //可以有指针类型
        (I call them type V below)
        type V = E|
        type ref V = V| //可以有引用类型
        { C } | //有大括号， 可以有局部变量
        (I can declare local variables in { C } )
        E = E |
        C; C |
        if (E) then { C } else { C } | //if while for do-while
        while (E) do { C } |
        for { C } ( E ) { C } { C } |
        do { C } while (E) |

        PROC_NAME (E, E, ..., E) | //可以调用过程
        continue | break

GLOB_ITEM :: =  
                int V |
                int ptr V |
                int ptr ... ptr V |
                (I call them type V below) //可以有全局变量
                func type FUNC_NAME (type (ref) V, type (ref) V, ..., type (ref) V) { C } |
                proc PROC_NAME (type (ref) V, type (ref) V, ..., type (ref) V) { C }
			//可以声明过程 或者 函数

P ::=
        GLOB_ITEM ; GLOB_ITEM ; ... ; GLOB_ITEM
        //最终的程序是多个函数/过程声明的连接， main函数是入口。
```

### 运行命令 (command for running):

##### 生成语法树 (GRAMMAR TREE PRINTING):

```shell
make clean

make main1

./main1 sample_file
```

##### 运行 (RUNNING):

```shell
make clean

make

./main sample_file
```

## 实现细节

### 前端

#### 词法分析

前端处理用的是flex + bison工具

（flex做词法分析， 使用有限状态自动机实现正则表达式匹配， 把程序串转化为一个一个token）

我会在 lang.l 定义这样的token class（把匹配到的正则表达式映射到token）

```c
"malloc" {
    return TM_MALLOC;
}

"read_int" {
    return TM_RI;
}

"read_char" {
    return TM_RC;
}

"write_int" {
    return TM_WI;
}

"write_char" {
    return TM_WC;
}

[_A-Za-z][_A-Za-z0-9]* {
    yylval.i = new_str(yytext, yyleng);
    return TM_IDENT;
}

";" {
    return TM_SEMICOL;
    }

"," {
    return TM_COMMA;
    }
```

### 语法分析

语法分析就是做token的规约形成语法树。（最开始是零散的一个一个的token, 慢慢规约， 最终规约为一整个NT_GLOBALS， 长出语法树）

这其中的原理是移入规约分析，要避免移入规约冲突。 然后有“用NFA判断扫描线左侧可行结构”和“计算first / follow集合”等判别法。

我会在lang.y里面把token的定义写好， 前缀TM表示terminate终结符， NT表示non-terminate非终结符。 然后我在lang.y里面写这样的派生规则：

![](https://notes.sjtu.edu.cn/uploads/upload_904aebbe7e053b2622fed30327f023a3.png)


这就表示我可以把NT_GLOBALS 派生成一个NT_GLOBAL， 或者派生成NT_GLOBAL TM_SEMICOL NT_GLOBALS。 其实就是表示可以派生成若干个NT_GLOBAL用分号的连接。（多个func / proc）

注意， 这里实际程序运行的过程肯定是做规约而不是派生。

这里调用的函数是C语言写的lang.c里面的函数， \$$ 表示语法树的当前节点对应的结构体对象， \$1 表示展开后的第一个参数， 也就是这里的NT_GLOBAL。
这里调用的TGCons 在lang.c里面长这样：

![](https://notes.sjtu.edu.cn/uploads/upload_0068e957a6333271effd0ccde4a8596c.png)


实际上， 比如我们看这里面的第二条规约规则：

![](https://notes.sjtu.edu.cn/uploads/upload_02c20d0ebf7d467ab08d658705872737.png)


我们实际上运行的时候， 如果符合NT_GLOBAL TM_SEMICOL, 我就会调用这个TGCons， 传入这两个指针， 得到一个新的指针并返回， 相当于构建了语法树上的一个结点。

parser.c是bison自动生成的， 不用看。 lang.h包含了所有的结构体定义和函数定义，是struct of union of struct, 比如：

![](https://notes.sjtu.edu.cn/uploads/upload_d48ac0e961bb62e4c5bc9fb87f33a9e9.png)


所以到了这一步，我们摆脱了flex的token， 来到C的结构体的领域。


然后在lang.y里面我也可以定义运算符的优先级和结合律。

### 解释器： 小步语义

![](https://notes.sjtu.edu.cn/uploads/upload_9374bc318b7e9b5847fa862c7a598fd7.png)


我维护了这些东西：

![](https://notes.sjtu.edu.cn/uploads/upload_4843f1fb0e0dbed08028e34ac6f0069e.png)


找变量的时候， 从栈顶向下一层一层找。

var_info和func_proc_info的实现：

![](https://notes.sjtu.edu.cn/uploads/upload_3e8c14c211eebd5b70525fb70257098d.png)


var_info： 存类型（这里只用存有几层指针）， 存它是不是引用， 然后存地址。 需要拿值的时候去找地址里存的值就行了。 所以每次修改也是针对地址的修改， 这样子指针操作也一下子就合法了。

![](https://notes.sjtu.edu.cn/uploads/upload_6039b94b9a9b00ff6ba4e841c6b88916.png)


func_proc_info 存参数列表， command body和类型（是func 还是 proc）

解释器主体就是， 一直执行step(小步)。 小步的时候我会不断在focused_program 和 evaluation context之间移动。

对于添加函数的解释器， 我们的函数内部也可能会修改程序状态。 所以我们要修改我们的小步语义，把表达式也拆开。

再复习一下小步语义 foc / ectx：

![](https://notes.sjtu.edu.cn/uploads/upload_623d0cf6b68f56cb463ed29b2e8e0517.png)


这里面记得维护好 地址-> 值的hashmap 和变量栈即可。

### 难点

这里面值得注意的就是， for 不能直接用while实现， 因为continue的话， for的步进会执行， 但是while不会。

比如，

![](https://notes.sjtu.edu.cn/uploads/upload_226c6c7b1ebae0dcb29cc257050352a9.png)

所以for要特殊实现， 进行多次规约。

### main

![](https://notes.sjtu.edu.cn/uploads/upload_afbfb04e3b48ee8cd5421118b03084db.png)

main函数就长这样， 初始化residual program然后无限step即可。

### 样例

![](https://notes.sjtu.edu.cn/uploads/upload_cdaeebd782e4190e969f1fcc93418666.png)


![](https://notes.sjtu.edu.cn/uploads/upload_22792685da686080d6ff340d7c35b07b.png)


### Makefile 看架构

``` shell Makefile

lexer.h: lang.l
    flex lang.l
    
lexer.c: lang.l
    flex lang.l

//flex 做词法分析， 我们在lang.l里面写好分词规则（正则表达式匹配转化成token）  

parser.c: lang.y
    bison -o parser.c -d -v lang.y
    
parser.h: lang.y
    bison -o parser.c -d -v lang.y
    
lib_new.o: lib_new.c lib_new.h
    g++ -c lib_new.c
//包含了哈希表

lang.o: lang.c lang.h lib_new.h
    g++ -c lang.c

parser.o: parser.c parser.h lexer.h lang.h
    g++ -c parser.c

lexer.o: lexer.c lexer.h parser.h lang.h
    g++ -c lexer.c

interpreter.o: interpreter.cpp lang.h lib_new.h
    g++ -c interpreter.cpp
//解释器
  
main.o: main.c lexer.h parser.h lang.h
    g++ -c main.c

main: lang.o parser.o lexer.o interpreter.o lib_new.o main.o
    g++ -g -OO lang.o parser.o lexer.o interpreter.o lib_new.o main.o -o main

main1.o: main1.c lexer.h parser.h lang.h
    g++ -c main1.c

main1: lang.o parser.o lexer.o interpreter.o lib_new.o main1.o
    g++ lang.o parser.o lexer.o interpreter.o lib_new.o main1.o -o main1

all: main
#all: main1

clean:
    rm -f lexer.h lexer.c parser.h parser.c *.o main

```


## 总结

这是大二上学期最好玩的一个课程项目了， 喜欢这门课的解释器 / 编译器部分。