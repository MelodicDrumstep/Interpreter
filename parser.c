/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"

	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
  struct glob_item_list * root; 
  // Now the root is a pointer to the global item list

#line 81 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TM_NAT = 3,                     /* TM_NAT  */
  YYSYMBOL_TM_IDENT = 4,                   /* TM_IDENT  */
  YYSYMBOL_TM_LEFT_BRACE = 5,              /* TM_LEFT_BRACE  */
  YYSYMBOL_TM_RIGHT_BRACE = 6,             /* TM_RIGHT_BRACE  */
  YYSYMBOL_TM_LEFT_PAREN = 7,              /* TM_LEFT_PAREN  */
  YYSYMBOL_TM_RIGHT_PAREN = 8,             /* TM_RIGHT_PAREN  */
  YYSYMBOL_TM_SEMICOL = 9,                 /* TM_SEMICOL  */
  YYSYMBOL_TM_COMMA = 10,                  /* TM_COMMA  */
  YYSYMBOL_TM_MALLOC = 11,                 /* TM_MALLOC  */
  YYSYMBOL_TM_RI = 12,                     /* TM_RI  */
  YYSYMBOL_TM_RC = 13,                     /* TM_RC  */
  YYSYMBOL_TM_WI = 14,                     /* TM_WI  */
  YYSYMBOL_TM_WC = 15,                     /* TM_WC  */
  YYSYMBOL_TM_INT = 16,                    /* TM_INT  */
  YYSYMBOL_TM_IF = 17,                     /* TM_IF  */
  YYSYMBOL_TM_THEN = 18,                   /* TM_THEN  */
  YYSYMBOL_TM_ELSE = 19,                   /* TM_ELSE  */
  YYSYMBOL_TM_WHILE = 20,                  /* TM_WHILE  */
  YYSYMBOL_TM_DO = 21,                     /* TM_DO  */
  YYSYMBOL_TM_FOR = 22,                    /* TM_FOR  */
  YYSYMBOL_TM_ASGNOP = 23,                 /* TM_ASGNOP  */
  YYSYMBOL_TM_OR = 24,                     /* TM_OR  */
  YYSYMBOL_TM_AND = 25,                    /* TM_AND  */
  YYSYMBOL_TM_NOT = 26,                    /* TM_NOT  */
  YYSYMBOL_TM_ADDR = 27,                   /* TM_ADDR  */
  YYSYMBOL_TM_LT = 28,                     /* TM_LT  */
  YYSYMBOL_TM_LE = 29,                     /* TM_LE  */
  YYSYMBOL_TM_GT = 30,                     /* TM_GT  */
  YYSYMBOL_TM_GE = 31,                     /* TM_GE  */
  YYSYMBOL_TM_EQ = 32,                     /* TM_EQ  */
  YYSYMBOL_TM_NE = 33,                     /* TM_NE  */
  YYSYMBOL_TM_PLUS = 34,                   /* TM_PLUS  */
  YYSYMBOL_TM_MINUS = 35,                  /* TM_MINUS  */
  YYSYMBOL_TM_MUL = 36,                    /* TM_MUL  */
  YYSYMBOL_TM_DIV = 37,                    /* TM_DIV  */
  YYSYMBOL_TM_MOD = 38,                    /* TM_MOD  */
  YYSYMBOL_TM_UMINUS = 39,                 /* TM_UMINUS  */
  YYSYMBOL_TM_DEREF = 40,                  /* TM_DEREF  */
  YYSYMBOL_TM_PROC = 41,                   /* TM_PROC  */
  YYSYMBOL_TM_FUNC = 42,                   /* TM_FUNC  */
  YYSYMBOL_TM_CONT = 43,                   /* TM_CONT  */
  YYSYMBOL_TM_BREAK = 44,                  /* TM_BREAK  */
  YYSYMBOL_TM_PTR = 45,                    /* TM_PTR  */
  YYSYMBOL_TM_REF = 46,                    /* TM_REF  */
  YYSYMBOL_TM_RET = 47,                    /* TM_RET  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_NT_WHOLE = 49,                  /* NT_WHOLE  */
  YYSYMBOL_NT_GLOBALS = 50,                /* NT_GLOBALS  */
  YYSYMBOL_NT_GLOBAL = 51,                 /* NT_GLOBAL  */
  YYSYMBOL_NT_VARL = 52,                   /* NT_VARL  */
  YYSYMBOL_NT_EXPRL = 53,                  /* NT_EXPRL  */
  YYSYMBOL_NT_PTRS = 54,                   /* NT_PTRS  */
  YYSYMBOL_NT_CMD = 55,                    /* NT_CMD  */
  YYSYMBOL_NT_EXPR0 = 56,                  /* NT_EXPR0  */
  YYSYMBOL_NT_EXPR1 = 57,                  /* NT_EXPR1  */
  YYSYMBOL_NT_EXPR = 58                    /* NT_EXPR  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    93,    93,   102,   106,   114,   118,   122,   126,   130,
     134,   138,   145,   149,   153,   157,   161,   165,   169,   173,
     180,   184,   192,   196,   202,   206,   210,   215,   219,   223,
     228,   232,   237,   241,   245,   249,   253,   257,   261,   266,
     271,   275,   279,   287,   291,   295,   302,   306,   314,   318,
     322,   328,   334,   338,   342,   346,   350,   354,   358,   362,
     366,   370,   374,   378,   382,   386,   390,   394,   398,   402
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TM_NAT", "TM_IDENT",
  "TM_LEFT_BRACE", "TM_RIGHT_BRACE", "TM_LEFT_PAREN", "TM_RIGHT_PAREN",
  "TM_SEMICOL", "TM_COMMA", "TM_MALLOC", "TM_RI", "TM_RC", "TM_WI",
  "TM_WC", "TM_INT", "TM_IF", "TM_THEN", "TM_ELSE", "TM_WHILE", "TM_DO",
  "TM_FOR", "TM_ASGNOP", "TM_OR", "TM_AND", "TM_NOT", "TM_ADDR", "TM_LT",
  "TM_LE", "TM_GT", "TM_GE", "TM_EQ", "TM_NE", "TM_PLUS", "TM_MINUS",
  "TM_MUL", "TM_DIV", "TM_MOD", "TM_UMINUS", "TM_DEREF", "TM_PROC",
  "TM_FUNC", "TM_CONT", "TM_BREAK", "TM_PTR", "TM_REF", "TM_RET",
  "$accept", "NT_WHOLE", "NT_GLOBALS", "NT_GLOBAL", "NT_VARL", "NT_EXPRL",
  "NT_PTRS", "NT_CMD", "NT_EXPR0", "NT_EXPR1", "NT_EXPR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-41)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,    -2,     4,     3,    32,  -103,    67,  -103,  -103,    16,
       2,    35,    33,  -103,   -13,  -103,  -103,    18,    13,    80,
      34,  -103,    36,     0,    84,    89,    88,    98,    86,    99,
      92,     9,   121,    86,   102,    88,  -103,   108,    86,   176,
     125,   129,   130,   133,   134,    12,   163,   164,   169,   170,
     176,   176,   176,   176,  -103,  -103,     6,  -103,  -103,   331,
      88,   142,   172,   181,    86,    21,   191,   178,   131,    27,
     183,   185,   176,   196,   197,   176,   176,   184,   195,    14,
     176,   176,    86,    86,  -103,  -103,  -103,  -103,  -103,    86,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,  -103,    88,    88,   217,   105,  -103,
      86,   201,   110,   231,   315,  -103,   165,  -103,   200,  -103,
    -103,   218,   233,   176,   221,   222,   236,   251,   266,   111,
     118,   263,   346,   360,   371,    48,    48,    48,    48,    48,
      48,   109,   109,  -103,  -103,  -103,  -103,  -103,    88,  -103,
     122,    86,   145,   176,  -103,   252,  -103,  -103,  -103,   346,
     269,   176,   254,   260,   272,   285,   303,  -103,  -103,   147,
    -103,  -103,  -103,   346,   302,   306,   321,   334,   176,  -103,
    -103,    86,    86,   176,   284,   154,   155,   299,   333,   323,
    -103,  -103,    86,   352,   175,    86,   353,   188,    86,  -103,
     189,  -103
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     5,    22,     0,
       0,     0,     0,     1,     0,     6,    23,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,     0,     0,     0,     0,    43,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,    47,    48,     0,
       0,    14,    13,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,    46,    51,    49,    50,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,    15,     0,     9,
       0,     0,    66,     0,    20,    24,     0,    44,     0,    68,
      69,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,    32,    31,    64,    63,    57,    59,    58,    60,    61,
      62,    53,    54,    52,    55,    56,    19,    16,     0,    10,
       0,     0,    65,     0,    66,     0,    67,    41,    42,    26,
       0,     0,     0,     0,     0,     0,     0,    17,     7,     0,
      21,    65,    27,    29,     0,     0,     0,     0,     0,     8,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    36,     0,     0,     0,     0,     0,     0,     0,    33,
       0,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,   358,  -103,   -25,  -102,    -6,   -33,  -103,  -103,
     -28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    24,   113,     9,    56,    57,    58,
      59
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,    34,     7,     1,    29,    69,    20,    11,    10,    17,
      67,    71,    88,    62,   155,    89,    77,    31,   125,    12,
      15,    25,    84,    85,    86,    87,    22,   109,     2,     3,
      89,   108,    13,   115,    23,   104,    89,    19,    27,    79,
     114,    28,    18,     8,   118,     8,    30,   121,   122,   129,
     130,   170,   127,   128,    16,    63,   131,     8,    78,    16,
     126,    16,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    14,   150,     8,    16,
     146,   147,    99,   100,   101,   102,   103,    26,   114,    36,
      37,    38,    32,    39,    33,   159,    61,    40,    41,    42,
      43,    44,    45,    46,    23,    35,    47,    48,    49,    60,
      66,   149,    50,    51,    89,    68,   -40,   165,   169,   -40,
      89,    52,    53,   167,   166,   114,    64,    89,   168,    54,
      55,    89,    72,   173,    36,    70,    73,    74,    39,   112,
      75,    76,    40,    41,    42,   101,   102,   103,   185,   186,
     184,   -39,   105,   179,   -39,   187,    89,    50,    51,   194,
     189,   190,   197,    89,    89,   200,    52,    53,    36,    70,
      80,    81,    39,   154,    82,    83,    40,    41,    42,    36,
      70,   196,   106,    39,    89,   107,   111,    40,    41,    42,
     116,    50,    51,   117,   199,   201,   110,    89,    89,   124,
      52,    53,    50,    51,   119,   120,   151,   123,   156,    91,
      92,    52,    53,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    91,    92,   157,   148,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   152,
     162,   158,    91,    92,   160,   161,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    91,    92,   163,
     171,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    89,   172,   164,    91,    92,   174,   175,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      91,    92,   188,   176,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   177,   180,   191,    91,    92,
     178,   181,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    91,    92,   153,   182,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   192,    91,
      92,   183,   193,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    90,    91,    92,   195,   198,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      91,    92,    21,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    92,     0,     0,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103
};

static const yytype_int16 yycheck[] =
{
      33,    26,     4,    16,     4,    38,    12,     4,     4,     7,
      35,    39,     6,     4,   116,     9,     4,    23,     4,    16,
       4,     8,    50,    51,    52,    53,     8,     6,    41,    42,
       9,    64,     0,     6,    16,    60,     9,     4,     4,    45,
      68,     5,     7,    45,    72,    45,    46,    75,    76,    82,
      83,   153,    80,    81,    45,    46,    89,    45,    46,    45,
      46,    45,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     9,   110,    45,    45,
     105,   106,    34,    35,    36,    37,    38,     7,   116,     3,
       4,     5,     8,     7,     5,   123,     4,    11,    12,    13,
      14,    15,    16,    17,    16,     7,    20,    21,    22,    10,
       8,     6,    26,    27,     9,     7,     6,     6,   151,     9,
       9,    35,    36,   148,     6,   153,     5,     9,     6,    43,
      44,     9,     7,   161,     3,     4,     7,     7,     7,     8,
       7,     7,    11,    12,    13,    36,    37,    38,   181,   182,
     178,     6,    10,     6,     9,   183,     9,    26,    27,   192,
       6,     6,   195,     9,     9,   198,    35,    36,     3,     4,
       7,     7,     7,     8,     5,     5,    11,    12,    13,     3,
       4,     6,    10,     7,     9,     4,     8,    11,    12,    13,
       7,    26,    27,     8,     6,     6,     5,     9,     9,     4,
      35,    36,    26,    27,     8,     8,     5,    23,     8,    24,
      25,    35,    36,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    24,    25,     8,    10,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,     8,
       4,     8,    24,    25,    23,    23,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    24,    25,     8,
       8,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,     9,     4,     8,    24,    25,    23,    18,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      24,    25,     8,    21,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    20,     4,     8,    24,    25,
       7,     5,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    24,    25,    10,     5,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     5,    24,
      25,     7,    19,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    23,    24,    25,     5,     5,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      24,    25,    14,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    25,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    41,    42,    49,    50,    51,     4,    45,    54,
       4,     4,    16,     0,     9,     4,    45,     7,     7,     4,
      54,    50,     8,    16,    52,     8,     7,     4,     5,     4,
      46,    54,     8,     5,    52,     7,     3,     4,     5,     7,
      11,    12,    13,    14,    15,    16,    17,    20,    21,    22,
      26,    27,    35,    36,    43,    44,    55,    56,    57,    58,
      10,     4,     4,    46,     5,    55,     8,    52,     7,    55,
       4,    58,     7,     7,     7,     7,     7,     4,    46,    54,
       7,     7,     5,     5,    58,    58,    58,    58,     6,     9,
      23,    24,    25,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    52,    10,    10,     4,    55,     6,
       5,     8,     8,    53,    58,     6,     7,     8,    58,     8,
       8,    58,    58,    23,     4,     4,    46,    58,    58,    55,
      55,    55,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    52,    52,    10,     6,
      55,     5,     8,    10,     8,    53,     8,     8,     8,    58,
      23,    23,     4,     8,     8,     6,     6,    52,     6,    55,
      53,     8,     4,    58,    23,    18,    21,    20,     7,     6,
       4,     5,     5,     7,    58,    55,    55,    58,     8,     6,
       6,     8,     5,    19,    55,     5,     6,    55,     5,     6,
      55,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     2,     3,     9,    10,     7,
       8,     7,     2,     3,     3,     4,     5,     6,     4,     5,
       1,     3,     1,     2,     3,     2,     4,     5,     3,     5,
       6,     3,     3,    12,     8,    13,     8,     1,     1,     4,
       3,     4,     4,     1,     3,     1,     2,     1,     1,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     4,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* NT_WHOLE: NT_GLOBALS  */
#line 94 "lang.y"
  {
    (yyval.globiteml) = ((yyvsp[0].globiteml));
    root = (yyval.globiteml); //root is the final root of the tree
  }
#line 1288 "parser.c"
    break;

  case 3: /* NT_GLOBALS: NT_GLOBAL  */
#line 103 "lang.y"
  {
    (yyval.globiteml) = (TGCons((yyvsp[0].globitem), TGNil())); 
  }
#line 1296 "parser.c"
    break;

  case 4: /* NT_GLOBALS: NT_GLOBAL TM_SEMICOL NT_GLOBALS  */
#line 107 "lang.y"
  {
    (yyval.globiteml) = (TGCons((yyvsp[-2].globitem), (yyvsp[0].globiteml)));
  }
#line 1304 "parser.c"
    break;

  case 5: /* NT_GLOBAL: TM_INT TM_IDENT  */
#line 115 "lang.y"
  {
    (yyval.globitem) = (TGlobVar((yyvsp[0].i), 0));
  }
#line 1312 "parser.c"
    break;

  case 6: /* NT_GLOBAL: TM_INT NT_PTRS TM_IDENT  */
#line 119 "lang.y"
  {
    (yyval.globitem) = (TGlobVar((yyvsp[0].i), (yyvsp[-1].n)));
  }
#line 1320 "parser.c"
    break;

  case 7: /* NT_GLOBAL: TM_FUNC TM_INT TM_IDENT TM_LEFT_PAREN NT_VARL TM_RIGHT_PAREN TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 123 "lang.y"
  {
    (yyval.globitem) = (TFuncDef((yyvsp[-6].i), (yyvsp[-4].varl), (yyvsp[-1].c)));
  }
#line 1328 "parser.c"
    break;

  case 8: /* NT_GLOBAL: TM_FUNC TM_INT NT_PTRS TM_IDENT TM_LEFT_PAREN NT_VARL TM_RIGHT_PAREN TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 127 "lang.y"
  {
    (yyval.globitem) = (TFuncDef((yyvsp[-6].i), (yyvsp[-4].varl), (yyvsp[-1].c)));
  }
#line 1336 "parser.c"
    break;

  case 9: /* NT_GLOBAL: TM_FUNC TM_IDENT TM_LEFT_PAREN TM_RIGHT_PAREN TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 131 "lang.y"
  {
    (yyval.globitem) = (TFuncDef((yyvsp[-5].i), TVNil(), (yyvsp[-1].c))); //The one with no parameter
  }
#line 1344 "parser.c"
    break;

  case 10: /* NT_GLOBAL: TM_PROC TM_IDENT TM_LEFT_PAREN NT_VARL TM_RIGHT_PAREN TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 135 "lang.y"
  {
    (yyval.globitem) = (TProcDef((yyvsp[-6].i), (yyvsp[-4].varl), (yyvsp[-1].c)));
  }
#line 1352 "parser.c"
    break;

  case 11: /* NT_GLOBAL: TM_PROC TM_IDENT TM_LEFT_PAREN TM_RIGHT_PAREN TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 139 "lang.y"
  {
    (yyval.globitem) = (TProcDef((yyvsp[-5].i), TVNil(), (yyvsp[-1].c)));//The one with no parameter
  }
#line 1360 "parser.c"
    break;

  case 12: /* NT_VARL: TM_INT TM_IDENT  */
#line 146 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[0].i), TVNil(), 0, 0));
  }
#line 1368 "parser.c"
    break;

  case 13: /* NT_VARL: TM_INT NT_PTRS TM_IDENT  */
#line 150 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[0].i), TVNil(), (yyvsp[-1].n), 0));
  }
#line 1376 "parser.c"
    break;

  case 14: /* NT_VARL: TM_INT TM_REF TM_IDENT  */
#line 154 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[0].i), TVNil(), 0, 1));
  }
#line 1384 "parser.c"
    break;

  case 15: /* NT_VARL: TM_INT NT_PTRS TM_REF TM_IDENT  */
#line 158 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[0].i), TVNil(), (yyvsp[-2].n), 1));
  }
#line 1392 "parser.c"
    break;

  case 16: /* NT_VARL: TM_INT NT_PTRS TM_IDENT TM_COMMA NT_VARL  */
#line 162 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[-2].i), (yyvsp[0].varl), (yyvsp[-3].n), 0));
  }
#line 1400 "parser.c"
    break;

  case 17: /* NT_VARL: TM_INT NT_PTRS TM_REF TM_IDENT TM_COMMA NT_VARL  */
#line 166 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[-2].i), (yyvsp[0].varl), (yyvsp[-4].n), 1));
  }
#line 1408 "parser.c"
    break;

  case 18: /* NT_VARL: TM_INT TM_IDENT TM_COMMA NT_VARL  */
#line 170 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[-2].i), (yyvsp[0].varl), 0, 0));
  }
#line 1416 "parser.c"
    break;

  case 19: /* NT_VARL: TM_INT TM_REF TM_IDENT TM_COMMA NT_VARL  */
#line 174 "lang.y"
  {
    (yyval.varl) = (TVCons((yyvsp[-2].i), (yyvsp[0].varl), 0, 1));
  }
#line 1424 "parser.c"
    break;

  case 20: /* NT_EXPRL: NT_EXPR  */
#line 181 "lang.y"
  {
    (yyval.exprl) = (TECons((yyvsp[0].e), TENil()));
  }
#line 1432 "parser.c"
    break;

  case 21: /* NT_EXPRL: NT_EXPR TM_COMMA NT_EXPRL  */
#line 185 "lang.y"
  {
    (yyval.exprl) = (TECons((yyvsp[-2].e), (yyvsp[0].exprl)));
  }
#line 1440 "parser.c"
    break;

  case 22: /* NT_PTRS: TM_PTR  */
#line 193 "lang.y"
  {
    (yyval.n) = 1;
  }
#line 1448 "parser.c"
    break;

  case 23: /* NT_PTRS: NT_PTRS TM_PTR  */
#line 197 "lang.y"
  {
    (yyval.n) = (yyvsp[-1].n) + 1;
  }
#line 1456 "parser.c"
    break;

  case 24: /* NT_CMD: TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 203 "lang.y"
  {
    (yyval.c) = (TLocal((yyvsp[-1].c)));
  }
#line 1464 "parser.c"
    break;

  case 25: /* NT_CMD: TM_INT TM_IDENT  */
#line 207 "lang.y"
  {
    (yyval.c) = (TDecl((yyvsp[0].i), 0));
  }
#line 1472 "parser.c"
    break;

  case 26: /* NT_CMD: TM_INT TM_IDENT TM_ASGNOP NT_EXPR  */
#line 211 "lang.y"
  {
    (yyval.c) = (TDeclAsgn((yyvsp[-2].i), 0, (yyvsp[0].e)));
  }
#line 1480 "parser.c"
    break;

  case 27: /* NT_CMD: TM_INT TM_REF TM_IDENT TM_ASGNOP TM_IDENT  */
#line 216 "lang.y"
  {
    (yyval.c) = (TRefDeclAsgn((yyvsp[-2].i), 0, (yyvsp[0].i)));
  }
#line 1488 "parser.c"
    break;

  case 28: /* NT_CMD: TM_INT NT_PTRS TM_IDENT  */
#line 220 "lang.y"
  {
    (yyval.c) = (TDecl((yyvsp[0].i), (yyvsp[-1].n)));
  }
#line 1496 "parser.c"
    break;

  case 29: /* NT_CMD: TM_INT NT_PTRS TM_IDENT TM_ASGNOP NT_EXPR  */
#line 224 "lang.y"
  {
    (yyval.c) = (TDeclAsgn((yyvsp[-2].i), (yyvsp[-3].n), (yyvsp[0].e)));
  }
#line 1504 "parser.c"
    break;

  case 30: /* NT_CMD: TM_INT NT_PTRS TM_REF TM_IDENT TM_ASGNOP TM_IDENT  */
#line 229 "lang.y"
  {
    (yyval.c) = (TRefDeclAsgn((yyvsp[-2].i), (yyvsp[-4].n), (yyvsp[0].i)));
  }
#line 1512 "parser.c"
    break;

  case 31: /* NT_CMD: NT_EXPR TM_ASGNOP NT_EXPR  */
#line 233 "lang.y"
  {
    (yyval.c) = (TAsgn((yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1520 "parser.c"
    break;

  case 32: /* NT_CMD: NT_CMD TM_SEMICOL NT_CMD  */
#line 238 "lang.y"
  {
    (yyval.c) = (TSeq((yyvsp[-2].c), (yyvsp[0].c)));
  }
#line 1528 "parser.c"
    break;

  case 33: /* NT_CMD: TM_IF TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN TM_THEN TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE TM_ELSE TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 242 "lang.y"
  { 
    (yyval.c) = (TIf((yyvsp[-9].e), (yyvsp[-5].c), (yyvsp[-1].c)));
  }
#line 1536 "parser.c"
    break;

  case 34: /* NT_CMD: TM_WHILE TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN TM_DO TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 246 "lang.y"
  {
    (yyval.c) = (TWhile((yyvsp[-5].e), (yyvsp[-1].c))); 
  }
#line 1544 "parser.c"
    break;

  case 35: /* NT_CMD: TM_FOR TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE  */
#line 250 "lang.y"
  {
    (yyval.c) = (TFor((yyvsp[-10].c), (yyvsp[-7].e), (yyvsp[-4].c), (yyvsp[-1].c)));
  }
#line 1552 "parser.c"
    break;

  case 36: /* NT_CMD: TM_DO TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE TM_WHILE TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN  */
#line 254 "lang.y"
  {
    (yyval.c) = (TDoWhile((yyvsp[-5].c), (yyvsp[-1].e)));
  }
#line 1560 "parser.c"
    break;

  case 37: /* NT_CMD: TM_CONT  */
#line 258 "lang.y"
  {
    (yyval.c) = (TContinue());
  }
#line 1568 "parser.c"
    break;

  case 38: /* NT_CMD: TM_BREAK  */
#line 262 "lang.y"
  {
    (yyval.c) = (TBreak());
  }
#line 1576 "parser.c"
    break;

  case 39: /* NT_CMD: TM_IDENT TM_LEFT_PAREN NT_EXPRL TM_RIGHT_PAREN  */
#line 267 "lang.y"
  {
    (yyval.c) = (TProc((yyvsp[-3].i), (yyvsp[-1].exprl)));
  }
#line 1584 "parser.c"
    break;

  case 40: /* NT_CMD: TM_IDENT TM_LEFT_PAREN TM_RIGHT_PAREN  */
#line 272 "lang.y"
  {
    (yyval.c) = (TProc((yyvsp[-2].i), TENil()));
  }
#line 1592 "parser.c"
    break;

  case 41: /* NT_CMD: TM_WI TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN  */
#line 276 "lang.y"
  {
    (yyval.c) = (TWriteInt((yyvsp[-1].e)));
  }
#line 1600 "parser.c"
    break;

  case 42: /* NT_CMD: TM_WC TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN  */
#line 280 "lang.y"
  {
    (yyval.c) = (TWriteChar((yyvsp[-1].e)));
  }
#line 1608 "parser.c"
    break;

  case 43: /* NT_EXPR0: TM_NAT  */
#line 288 "lang.y"
  {
    (yyval.e) = (TConst((yyvsp[0].n)));
  }
#line 1616 "parser.c"
    break;

  case 44: /* NT_EXPR0: TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN  */
#line 292 "lang.y"
  {
    (yyval.e) = ((yyvsp[-1].e));
  }
#line 1624 "parser.c"
    break;

  case 45: /* NT_EXPR0: TM_IDENT  */
#line 296 "lang.y"
  {
    (yyval.e) = (TVar((yyvsp[0].i)));
  }
#line 1632 "parser.c"
    break;

  case 46: /* NT_EXPR1: TM_NOT NT_EXPR  */
#line 303 "lang.y"
  {
    (yyval.e) = (TUnOp(T_NOT, (yyvsp[0].e)));
  }
#line 1640 "parser.c"
    break;

  case 47: /* NT_EXPR1: NT_EXPR0  */
#line 307 "lang.y"
  {
    (yyval.e) = ((yyvsp[0].e));
  }
#line 1648 "parser.c"
    break;

  case 48: /* NT_EXPR: NT_EXPR1  */
#line 315 "lang.y"
  {
    (yyval.e) = ((yyvsp[0].e));
  }
#line 1656 "parser.c"
    break;

  case 49: /* NT_EXPR: TM_MINUS NT_EXPR  */
#line 319 "lang.y"
  {
    (yyval.e) = (TUnOp(T_UMINUS, (yyvsp[0].e)));
  }
#line 1664 "parser.c"
    break;

  case 50: /* NT_EXPR: TM_MUL NT_EXPR  */
#line 323 "lang.y"
  {
    (yyval.e) = (TDeref((yyvsp[0].e)));
  }
#line 1672 "parser.c"
    break;

  case 51: /* NT_EXPR: TM_ADDR NT_EXPR  */
#line 329 "lang.y"
  {
    (yyval.e) = (TAddrOf((yyvsp[0].e)));
  }
#line 1680 "parser.c"
    break;

  case 52: /* NT_EXPR: NT_EXPR TM_MUL NT_EXPR  */
#line 335 "lang.y"
  {
    (yyval.e) = (TBinOp(T_MUL, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1688 "parser.c"
    break;

  case 53: /* NT_EXPR: NT_EXPR TM_PLUS NT_EXPR  */
#line 339 "lang.y"
  {
    (yyval.e) = (TBinOp(T_PLUS, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1696 "parser.c"
    break;

  case 54: /* NT_EXPR: NT_EXPR TM_MINUS NT_EXPR  */
#line 343 "lang.y"
  {
    (yyval.e) = (TBinOp(T_MINUS, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1704 "parser.c"
    break;

  case 55: /* NT_EXPR: NT_EXPR TM_DIV NT_EXPR  */
#line 347 "lang.y"
  {
    (yyval.e) = (TBinOp(T_DIV, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1712 "parser.c"
    break;

  case 56: /* NT_EXPR: NT_EXPR TM_MOD NT_EXPR  */
#line 351 "lang.y"
  {
    (yyval.e) = (TBinOp(T_MOD, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1720 "parser.c"
    break;

  case 57: /* NT_EXPR: NT_EXPR TM_LT NT_EXPR  */
#line 355 "lang.y"
  {
    (yyval.e) = (TBinOp(T_LT, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1728 "parser.c"
    break;

  case 58: /* NT_EXPR: NT_EXPR TM_GT NT_EXPR  */
#line 359 "lang.y"
  {
    (yyval.e) = (TBinOp(T_GT, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1736 "parser.c"
    break;

  case 59: /* NT_EXPR: NT_EXPR TM_LE NT_EXPR  */
#line 363 "lang.y"
  {
    (yyval.e) = (TBinOp(T_LE, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1744 "parser.c"
    break;

  case 60: /* NT_EXPR: NT_EXPR TM_GE NT_EXPR  */
#line 367 "lang.y"
  {
    (yyval.e) = (TBinOp(T_GE, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1752 "parser.c"
    break;

  case 61: /* NT_EXPR: NT_EXPR TM_EQ NT_EXPR  */
#line 371 "lang.y"
  {
    (yyval.e) = (TBinOp(T_EQ, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1760 "parser.c"
    break;

  case 62: /* NT_EXPR: NT_EXPR TM_NE NT_EXPR  */
#line 375 "lang.y"
  {
    (yyval.e) = (TBinOp(T_NE, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1768 "parser.c"
    break;

  case 63: /* NT_EXPR: NT_EXPR TM_AND NT_EXPR  */
#line 379 "lang.y"
  {
    (yyval.e) = (TBinOp(T_AND, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1776 "parser.c"
    break;

  case 64: /* NT_EXPR: NT_EXPR TM_OR NT_EXPR  */
#line 383 "lang.y"
  {
    (yyval.e) = (TBinOp(T_OR, (yyvsp[-2].e), (yyvsp[0].e)));
  }
#line 1784 "parser.c"
    break;

  case 65: /* NT_EXPR: TM_IDENT TM_LEFT_PAREN NT_EXPRL TM_RIGHT_PAREN  */
#line 387 "lang.y"
  {
    (yyval.e) = (TFunc((yyvsp[-3].i), (yyvsp[-1].exprl)));
  }
#line 1792 "parser.c"
    break;

  case 66: /* NT_EXPR: TM_IDENT TM_LEFT_PAREN TM_RIGHT_PAREN  */
#line 391 "lang.y"
  {
    (yyval.e) = (TFunc((yyvsp[-2].i), TENil()));
  }
#line 1800 "parser.c"
    break;

  case 67: /* NT_EXPR: TM_MALLOC TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN  */
#line 395 "lang.y"
  {
    (yyval.e) = (TMalloc((yyvsp[-1].e)));
  }
#line 1808 "parser.c"
    break;

  case 68: /* NT_EXPR: TM_RI TM_LEFT_PAREN TM_RIGHT_PAREN  */
#line 399 "lang.y"
  {
    (yyval.e) = (TReadInt());
  }
#line 1816 "parser.c"
    break;

  case 69: /* NT_EXPR: TM_RC TM_LEFT_PAREN TM_RIGHT_PAREN  */
#line 403 "lang.y"
  {
    (yyval.e) = (TReadChar());
  }
#line 1824 "parser.c"
    break;


#line 1828 "parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 409 "lang.y"


void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
}
