/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "pars.y"


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

#include "defines.h"

char *gettxt (const char *msgid, const char *dflt_str);
void yyerror(const char *s);

double drand48();
long lrand48();

#ifndef lint
static char RCSid[] = "$Id: pars.y,v 1.3 2007/02/21 00:21:21 pturner Exp $";
#endif

double result; /* return value if expression */
static int interr;
static double tmp;

jmp_buf begin;

static char *progname;
static int lineno = 1;
char f_string[256];
static int pos = 0;

static double *aa, *bb, *cc, *dd, *xx, *yy;
static int setindex;
static int setsetno;


#line 111 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    VAR = 259,                     /* VAR  */
    CEIL = 260,                    /* CEIL  */
    FLOOR = 261,                   /* FLOOR  */
    MOD = 262,                     /* MOD  */
    TAN = 263,                     /* TAN  */
    PI = 264,                      /* PI  */
    ABS = 265,                     /* ABS  */
    SQR = 266,                     /* SQR  */
    LGAMMA = 267,                  /* LGAMMA  */
    LOG = 268,                     /* LOG  */
    LN = 269,                      /* LN  */
    ERF = 270,                     /* ERF  */
    ERFC = 271,                    /* ERFC  */
    EXP = 272,                     /* EXP  */
    SIN = 273,                     /* SIN  */
    COS = 274,                     /* COS  */
    ACOS = 275,                    /* ACOS  */
    ASIN = 276,                    /* ASIN  */
    ATAN2 = 277,                   /* ATAN2  */
    ATAN = 278,                    /* ATAN  */
    SQRT = 279,                    /* SQRT  */
    RAND = 280,                    /* RAND  */
    HYPOT = 281,                   /* HYPOT  */
    DEG = 282,                     /* DEG  */
    DX = 283,                      /* DX  */
    DY = 284,                      /* DY  */
    RAD = 285,                     /* RAD  */
    MAXP = 286,                    /* MAXP  */
    MINP = 287,                    /* MINP  */
    INDEX = 288,                   /* INDEX  */
    SETNO = 289,                   /* SETNO  */
    INT = 290,                     /* INT  */
    INVN = 291,                    /* INVN  */
    INVT = 292,                    /* INVT  */
    IRAND = 293,                   /* IRAND  */
    NORM = 294,                    /* NORM  */
    NORMP = 295,                   /* NORMP  */
    RNORM = 296,                   /* RNORM  */
    OR = 297,                      /* OR  */
    AND = 298,                     /* AND  */
    GT = 299,                      /* GT  */
    LT = 300,                      /* LT  */
    LE = 301,                      /* LE  */
    GE = 302,                      /* GE  */
    EQ = 303,                      /* EQ  */
    NE = 304,                      /* NE  */
    UMINUS = 305,                  /* UMINUS  */
    NOT = 306                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMBER 258
#define VAR 259
#define CEIL 260
#define FLOOR 261
#define MOD 262
#define TAN 263
#define PI 264
#define ABS 265
#define SQR 266
#define LGAMMA 267
#define LOG 268
#define LN 269
#define ERF 270
#define ERFC 271
#define EXP 272
#define SIN 273
#define COS 274
#define ACOS 275
#define ASIN 276
#define ATAN2 277
#define ATAN 278
#define SQRT 279
#define RAND 280
#define HYPOT 281
#define DEG 282
#define DX 283
#define DY 284
#define RAD 285
#define MAXP 286
#define MINP 287
#define INDEX 288
#define SETNO 289
#define INT 290
#define INVN 291
#define INVT 292
#define IRAND 293
#define NORM 294
#define NORMP 295
#define RNORM 296
#define OR 297
#define AND 298
#define GT 299
#define LT 300
#define LE 301
#define GE 302
#define EQ 303
#define NE 304
#define UMINUS 305
#define NOT 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 47 "pars.y"

	double val;
	double *ptr;
	int func;

#line 269 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_VAR = 4,                        /* VAR  */
  YYSYMBOL_CEIL = 5,                       /* CEIL  */
  YYSYMBOL_FLOOR = 6,                      /* FLOOR  */
  YYSYMBOL_MOD = 7,                        /* MOD  */
  YYSYMBOL_TAN = 8,                        /* TAN  */
  YYSYMBOL_PI = 9,                         /* PI  */
  YYSYMBOL_ABS = 10,                       /* ABS  */
  YYSYMBOL_SQR = 11,                       /* SQR  */
  YYSYMBOL_LGAMMA = 12,                    /* LGAMMA  */
  YYSYMBOL_LOG = 13,                       /* LOG  */
  YYSYMBOL_LN = 14,                        /* LN  */
  YYSYMBOL_ERF = 15,                       /* ERF  */
  YYSYMBOL_ERFC = 16,                      /* ERFC  */
  YYSYMBOL_EXP = 17,                       /* EXP  */
  YYSYMBOL_SIN = 18,                       /* SIN  */
  YYSYMBOL_COS = 19,                       /* COS  */
  YYSYMBOL_ACOS = 20,                      /* ACOS  */
  YYSYMBOL_ASIN = 21,                      /* ASIN  */
  YYSYMBOL_ATAN2 = 22,                     /* ATAN2  */
  YYSYMBOL_ATAN = 23,                      /* ATAN  */
  YYSYMBOL_SQRT = 24,                      /* SQRT  */
  YYSYMBOL_RAND = 25,                      /* RAND  */
  YYSYMBOL_HYPOT = 26,                     /* HYPOT  */
  YYSYMBOL_DEG = 27,                       /* DEG  */
  YYSYMBOL_DX = 28,                        /* DX  */
  YYSYMBOL_DY = 29,                        /* DY  */
  YYSYMBOL_RAD = 30,                       /* RAD  */
  YYSYMBOL_MAXP = 31,                      /* MAXP  */
  YYSYMBOL_MINP = 32,                      /* MINP  */
  YYSYMBOL_INDEX = 33,                     /* INDEX  */
  YYSYMBOL_SETNO = 34,                     /* SETNO  */
  YYSYMBOL_INT = 35,                       /* INT  */
  YYSYMBOL_INVN = 36,                      /* INVN  */
  YYSYMBOL_INVT = 37,                      /* INVT  */
  YYSYMBOL_IRAND = 38,                     /* IRAND  */
  YYSYMBOL_NORM = 39,                      /* NORM  */
  YYSYMBOL_NORMP = 40,                     /* NORMP  */
  YYSYMBOL_RNORM = 41,                     /* RNORM  */
  YYSYMBOL_42_ = 42,                       /* '='  */
  YYSYMBOL_OR = 43,                        /* OR  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_GT = 45,                        /* GT  */
  YYSYMBOL_LT = 46,                        /* LT  */
  YYSYMBOL_LE = 47,                        /* LE  */
  YYSYMBOL_GE = 48,                        /* GE  */
  YYSYMBOL_EQ = 49,                        /* EQ  */
  YYSYMBOL_NE = 50,                        /* NE  */
  YYSYMBOL_51_ = 51,                       /* '+'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_55_ = 55,                       /* '%'  */
  YYSYMBOL_56_ = 56,                       /* '^'  */
  YYSYMBOL_UMINUS = 57,                    /* UMINUS  */
  YYSYMBOL_NOT = 58,                       /* NOT  */
  YYSYMBOL_59_n_ = 59,                     /* '\n'  */
  YYSYMBOL_60_ = 60,                       /* '('  */
  YYSYMBOL_61_ = 61,                       /* ')'  */
  YYSYMBOL_62_ = 62,                       /* ','  */
  YYSYMBOL_63_ = 63,                       /* '?'  */
  YYSYMBOL_64_ = 64,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_list = 66,                      /* list  */
  YYSYMBOL_asgn = 67,                      /* asgn  */
  YYSYMBOL_expr = 68                       /* expr  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   950

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  4
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      59,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    55,     2,     2,
      60,    61,    53,    51,    62,    52,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,     2,
       2,    42,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    56,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    43,    44,    45,
      46,    47,    48,    49,    50,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    70,    71,    72,    73,    75,    77,    78,
      79,    80,    81,    82,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "VAR",
  "CEIL", "FLOOR", "MOD", "TAN", "PI", "ABS", "SQR", "LGAMMA", "LOG", "LN",
  "ERF", "ERFC", "EXP", "SIN", "COS", "ACOS", "ASIN", "ATAN2", "ATAN",
  "SQRT", "RAND", "HYPOT", "DEG", "DX", "DY", "RAD", "MAXP", "MINP",
  "INDEX", "SETNO", "INT", "INVN", "INVT", "IRAND", "NORM", "NORMP",
  "RNORM", "'='", "OR", "AND", "GT", "LT", "LE", "GE", "EQ", "NE", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "NOT", "'\\n'", "'('",
  "')'", "','", "'?'", "':'", "$accept", "list", "asgn", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    61,   297,   298,   299,   300,   301,   302,   303,
     304,    43,    45,    42,    47,    37,    94,   305,   306,    10,
      40,    41,    44,    63,    58
};
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     115,   -57,   176,   -58,   -58,   -58,   -38,   -55,   -29,   -28,
     -27,   -58,   -26,   -25,   -10,    -8,    27,    34,    37,    38,
      40,    41,    43,    44,    45,    46,    47,   -58,    51,   -58,
     -58,   -58,   -58,    91,    92,   -58,   -58,   106,   108,    50,
      50,   -58,    50,   110,   216,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
     -58,    33,    33,   237,   -58,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,   -58,
      50,   867,   258,   279,   300,   321,   342,   363,   384,   405,
     426,   447,   468,   489,   510,   531,   552,   573,   594,   615,
     636,   657,   678,   699,   720,   741,   -58,   887,   109,   170,
     170,   170,   170,   170,   170,    36,    36,    30,    30,    30,
      30,   194,   -58,   -58,    50,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,    50,   -58,
     -58,    50,    50,    50,   -58,   -58,    50,   762,   783,   804,
     825,   846,   867,   -58,   -58,   -58,   -58,   -58
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     6,     1,     8,     9,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    23,
      24,    25,    42,     0,     0,    31,    32,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    59,    57,     0,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    58,    56,    55,    49,
      50,    51,    52,    53,    54,    10,    11,    12,    13,    14,
      15,     0,    21,    29,     0,    47,    16,    45,    35,    37,
      36,    26,    27,    28,    44,    22,    17,    18,     0,    19,
      46,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,    48,    40,    20,    30,    38,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,   -58,   -39
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    43,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    72,     3,    73,    45,    46,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    47,    48,    49,    50,    51,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      52,   131,    53,     5,    70,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    88,    54,    38,    85,
      86,    87,    88,    90,    55,   157,    90,    56,    57,    90,
      58,    59,    39,    60,    61,    62,    63,    64,    40,   158,
      42,    65,   159,   160,   161,    -2,     1,   162,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    66,    67,    -2,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    68,    -2,    69,    74,
       0,     0,    90,    -2,    -2,    -2,     4,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     0,     0,    38,    -3,    -3,    -3,    -3,    -3,
      -3,    83,    84,    85,    86,    87,    88,     0,    39,     0,
       0,     0,     0,    90,    40,    41,    42,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,     0,    90,   156,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,    89,     0,     0,     0,    90,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,   116,     0,
      90,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,   132,
       0,    90,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
     133,     0,    90,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,   134,    90,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,     0,
       0,     0,   135,     0,    90,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
       0,     0,     0,   136,     0,    90,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,     0,   137,     0,    90,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,   138,     0,    90,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,   139,     0,    90,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,   140,     0,    90,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,   141,     0,
      90,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,   142,
       0,    90,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
     143,     0,    90,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,   144,     0,    90,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,     0,
       0,     0,   145,     0,    90,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
       0,     0,     0,   146,     0,    90,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,     0,   147,     0,    90,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,     0,   148,    90,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,   149,     0,    90,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,   150,     0,    90,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,   151,
      90,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
     152,    90,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
       0,   153,    90,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,   154,     0,    90,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,     0,     0,
       0,     0,   155,     0,    90,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     0,
       0,     0,     0,   163,     0,    90,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,     0,   164,     0,    90,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,     0,     0,   165,     0,    90,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,   166,     0,    90,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,   167,     0,    90,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
      90,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
      90
};

static const yytype_int16 yycheck[] =
{
      39,    40,    59,    42,    42,    60,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    60,    60,    60,    60,    60,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      60,    90,    60,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    56,    60,    38,    53,
      54,    55,    56,    63,    60,   134,    63,    60,    60,    63,
      60,    60,    52,    60,    60,    60,    60,    60,    58,   148,
      60,    60,   151,   152,   153,     0,     1,   156,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    60,    60,    38,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    60,    52,    60,    59,
      -1,    -1,    63,    58,    59,    60,     0,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    38,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    52,    -1,
      -1,    -1,    -1,    63,    58,    59,    60,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,    63,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,
      63,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,
      -1,    63,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      61,    -1,    63,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    62,    63,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    61,    -1,    63,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    63,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    61,    -1,    63,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    61,    -1,    63,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    61,    -1,    63,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,    63,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,
      63,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,
      -1,    63,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      61,    -1,    63,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    -1,    63,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    61,    -1,    63,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    63,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    61,    -1,    63,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    62,    63,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    61,    -1,    63,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,    63,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    62,
      63,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      62,    63,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    62,    63,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    61,    -1,    63,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    61,    -1,    63,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    61,    -1,    63,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    61,    -1,    63,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    61,    -1,    63,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    61,    -1,    63,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    61,    -1,    63,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    66,    59,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    38,    52,
      58,    59,    60,    67,    68,    42,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
       4,    68,    68,    68,    59,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    59,
      63,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    61,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    61,    61,    62,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    61,
      61,    62,    62,    62,    61,    61,    64,    68,    68,    68,
      68,    68,    68,    61,    61,    61,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    66,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     2,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       6,     4,     4,     1,     1,     1,     4,     4,     4,     4,
       6,     1,     1,     4,     4,     4,     4,     4,     6,     6,
       6,     1,     1,     1,     4,     4,     4,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 5: /* list: list expr '\n'  */
#line 72 "pars.y"
                         { result=(yyvsp[-1].val); }
#line 1565 "y.tab.c"
    break;

  case 6: /* list: error '\n'  */
#line 73 "pars.y"
                     {yyerror("error:"); yyerrok; }
#line 1571 "y.tab.c"
    break;

  case 7: /* asgn: VAR '=' expr  */
#line 75 "pars.y"
                     { *((yyval.ptr))=(yyvsp[0].val); result = (yyvsp[0].val); }
#line 1577 "y.tab.c"
    break;

  case 9: /* expr: VAR  */
#line 78 "pars.y"
                { (yyval.val) = *((yyvsp[0].ptr)); }
#line 1583 "y.tab.c"
    break;

  case 10: /* expr: expr '+' expr  */
#line 79 "pars.y"
                                        { (yyval.val) = (yyvsp[-2].val) + (yyvsp[0].val); }
#line 1589 "y.tab.c"
    break;

  case 11: /* expr: expr '-' expr  */
#line 80 "pars.y"
                                        { (yyval.val) = (yyvsp[-2].val) - (yyvsp[0].val); }
#line 1595 "y.tab.c"
    break;

  case 12: /* expr: expr '*' expr  */
#line 81 "pars.y"
                                        { (yyval.val) = (yyvsp[-2].val) * (yyvsp[0].val); }
#line 1601 "y.tab.c"
    break;

  case 13: /* expr: expr '/' expr  */
#line 82 "pars.y"
                                        { if ((yyvsp[0].val) !=0.0) {
						(yyval.val) = (yyvsp[-2].val) / (yyvsp[0].val); 
					  }
					  else {
    						yyerror("Divide by zero");
					  }
					}
#line 1613 "y.tab.c"
    break;

  case 14: /* expr: expr '%' expr  */
#line 89 "pars.y"
                                        { (yyval.val) = fmod((yyvsp[-2].val),(yyvsp[0].val)); }
#line 1619 "y.tab.c"
    break;

  case 15: /* expr: expr '^' expr  */
#line 90 "pars.y"
                                        { (yyval.val) = pow((yyvsp[-2].val),(yyvsp[0].val)); }
#line 1625 "y.tab.c"
    break;

  case 16: /* expr: ABS '(' expr ')'  */
#line 91 "pars.y"
                                        { (yyval.val) = fabs((yyvsp[-1].val)); }
#line 1631 "y.tab.c"
    break;

  case 17: /* expr: ACOS '(' expr ')'  */
#line 92 "pars.y"
                                        { (yyval.val) = acos((yyvsp[-1].val)); }
#line 1637 "y.tab.c"
    break;

  case 18: /* expr: ASIN '(' expr ')'  */
#line 93 "pars.y"
                                        { (yyval.val) = asin((yyvsp[-1].val)); }
#line 1643 "y.tab.c"
    break;

  case 19: /* expr: ATAN '(' expr ')'  */
#line 94 "pars.y"
                                        { (yyval.val) = atan((yyvsp[-1].val)); }
#line 1649 "y.tab.c"
    break;

  case 20: /* expr: ATAN2 '(' expr ',' expr ')'  */
#line 95 "pars.y"
                                        { (yyval.val) = atan2((yyvsp[-3].val), (yyvsp[-1].val)); }
#line 1655 "y.tab.c"
    break;

  case 21: /* expr: CEIL '(' expr ')'  */
#line 96 "pars.y"
                                        { (yyval.val) = ceil((yyvsp[-1].val)); }
#line 1661 "y.tab.c"
    break;

  case 22: /* expr: COS '(' expr ')'  */
#line 97 "pars.y"
                                        { (yyval.val) = cos((yyvsp[-1].val)); }
#line 1667 "y.tab.c"
    break;

  case 23: /* expr: DEG  */
#line 98 "pars.y"
                                        { (yyval.val) = 180.0/M_PI; }
#line 1673 "y.tab.c"
    break;

  case 24: /* expr: DX  */
#line 99 "pars.y"
                                        { (yyval.val) = *xx; }
#line 1679 "y.tab.c"
    break;

  case 25: /* expr: DY  */
#line 100 "pars.y"
                                        { (yyval.val) = *yy; }
#line 1685 "y.tab.c"
    break;

  case 26: /* expr: ERF '(' expr ')'  */
#line 101 "pars.y"
                                        { (yyval.val) = erf((yyvsp[-1].val)); }
#line 1691 "y.tab.c"
    break;

  case 27: /* expr: ERFC '(' expr ')'  */
#line 102 "pars.y"
                                        { (yyval.val) = erfc((yyvsp[-1].val)); }
#line 1697 "y.tab.c"
    break;

  case 28: /* expr: EXP '(' expr ')'  */
#line 103 "pars.y"
                                        { (yyval.val) = exp((yyvsp[-1].val)); }
#line 1703 "y.tab.c"
    break;

  case 29: /* expr: FLOOR '(' expr ')'  */
#line 104 "pars.y"
                                        { (yyval.val) = floor((yyvsp[-1].val)); }
#line 1709 "y.tab.c"
    break;

  case 30: /* expr: HYPOT '(' expr ',' expr ')'  */
#line 105 "pars.y"
                                        { (yyval.val) = hypot((yyvsp[-3].val), (yyvsp[-1].val)); }
#line 1715 "y.tab.c"
    break;

  case 31: /* expr: INDEX  */
#line 106 "pars.y"
                                        { (yyval.val) = setindex; }
#line 1721 "y.tab.c"
    break;

  case 32: /* expr: SETNO  */
#line 107 "pars.y"
                                        { (yyval.val) = setsetno; }
#line 1727 "y.tab.c"
    break;

  case 33: /* expr: INT '(' expr ')'  */
#line 108 "pars.y"
                                        { (yyval.val) = (long) (yyvsp[-1].val); }
#line 1733 "y.tab.c"
    break;

  case 34: /* expr: IRAND '(' expr ')'  */
#line 109 "pars.y"
                                        { (yyval.val) = lrand48(); }
#line 1739 "y.tab.c"
    break;

  case 35: /* expr: LGAMMA '(' expr ')'  */
#line 110 "pars.y"
                                        { (yyval.val) = lgamma((yyvsp[-1].val)); }
#line 1745 "y.tab.c"
    break;

  case 36: /* expr: LN '(' expr ')'  */
#line 111 "pars.y"
                                        { (yyval.val) = log((yyvsp[-1].val)); }
#line 1751 "y.tab.c"
    break;

  case 37: /* expr: LOG '(' expr ')'  */
#line 112 "pars.y"
                                        { (yyval.val) = log10((yyvsp[-1].val)); }
#line 1757 "y.tab.c"
    break;

  case 38: /* expr: MAXP '(' expr ',' expr ')'  */
#line 113 "pars.y"
                                        { (yyval.val) = (yyvsp[-3].val) >= (yyvsp[-1].val) ? (yyvsp[-3].val) : (yyvsp[-1].val); }
#line 1763 "y.tab.c"
    break;

  case 39: /* expr: MINP '(' expr ',' expr ')'  */
#line 114 "pars.y"
                                        { (yyval.val) = (yyvsp[-3].val) <= (yyvsp[-1].val) ? (yyvsp[-3].val) : (yyvsp[-1].val); }
#line 1769 "y.tab.c"
    break;

  case 40: /* expr: MOD '(' expr ',' expr ')'  */
#line 115 "pars.y"
                                        { (yyval.val) = fmod((yyvsp[-3].val),(yyvsp[-1].val)); }
#line 1775 "y.tab.c"
    break;

  case 41: /* expr: PI  */
#line 116 "pars.y"
                                        { (yyval.val) = M_PI; }
#line 1781 "y.tab.c"
    break;

  case 42: /* expr: RAD  */
#line 117 "pars.y"
                                        { (yyval.val) = M_PI/180.0; }
#line 1787 "y.tab.c"
    break;

  case 43: /* expr: RAND  */
#line 118 "pars.y"
                                        { (yyval.val) = drand48(); }
#line 1793 "y.tab.c"
    break;

  case 44: /* expr: SIN '(' expr ')'  */
#line 119 "pars.y"
                                        { (yyval.val) = sin((yyvsp[-1].val)); }
#line 1799 "y.tab.c"
    break;

  case 45: /* expr: SQR '(' expr ')'  */
#line 120 "pars.y"
                                        { (yyval.val) = pow((yyvsp[-1].val),2.0); }
#line 1805 "y.tab.c"
    break;

  case 46: /* expr: SQRT '(' expr ')'  */
#line 121 "pars.y"
                                        { (yyval.val) = sqrt((yyvsp[-1].val)); }
#line 1811 "y.tab.c"
    break;

  case 47: /* expr: TAN '(' expr ')'  */
#line 122 "pars.y"
                                        { (yyval.val) = tan((yyvsp[-1].val)); }
#line 1817 "y.tab.c"
    break;

  case 48: /* expr: expr '?' expr ':' expr  */
#line 123 "pars.y"
                                                { (yyval.val) = (yyvsp[-4].val) ? (yyvsp[-2].val) : (yyvsp[0].val); }
#line 1823 "y.tab.c"
    break;

  case 49: /* expr: expr GT expr  */
#line 124 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) > (yyvsp[0].val); }
#line 1829 "y.tab.c"
    break;

  case 50: /* expr: expr LT expr  */
#line 125 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) < (yyvsp[0].val); }
#line 1835 "y.tab.c"
    break;

  case 51: /* expr: expr LE expr  */
#line 126 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) <= (yyvsp[0].val); }
#line 1841 "y.tab.c"
    break;

  case 52: /* expr: expr GE expr  */
#line 127 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) >= (yyvsp[0].val); }
#line 1847 "y.tab.c"
    break;

  case 53: /* expr: expr EQ expr  */
#line 128 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) == (yyvsp[0].val); }
#line 1853 "y.tab.c"
    break;

  case 54: /* expr: expr NE expr  */
#line 129 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) != (yyvsp[0].val); }
#line 1859 "y.tab.c"
    break;

  case 55: /* expr: expr AND expr  */
#line 130 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) && (yyvsp[0].val); }
#line 1865 "y.tab.c"
    break;

  case 56: /* expr: expr OR expr  */
#line 131 "pars.y"
                                { (yyval.val) = (yyvsp[-2].val) || (yyvsp[0].val); }
#line 1871 "y.tab.c"
    break;

  case 57: /* expr: NOT expr  */
#line 132 "pars.y"
                                { (yyval.val) = !((yyvsp[0].val)); }
#line 1877 "y.tab.c"
    break;

  case 58: /* expr: '(' expr ')'  */
#line 133 "pars.y"
                       { (yyval.val) = (yyvsp[-1].val); }
#line 1883 "y.tab.c"
    break;

  case 59: /* expr: '-' expr  */
#line 134 "pars.y"
                                 { (yyval.val) = -(yyvsp[0].val); }
#line 1889 "y.tab.c"
    break;


#line 1893 "y.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 136 "pars.y"


void fixupstr(val)
    char val[];

{
    lowtoupper(val);
    val[strlen(val) + 1] = 0;
    val[strlen(val)] = '\n';
}

void scanner(s, x, y, a, b, c, d, i, setno, errpos)
    char s[];
double *x, *y, *a, *b, *c, *d;
int i, setno, *errpos;

{
    interr = 0;
    if (setjmp(begin)) {
	*errpos = interr;
	return;
    }
    pos = 0;
    aa = a;
    bb = b;
    cc = c;
    dd = d;
    xx = x;
    yy = y;
    setindex = i + 1;
    setsetno = setno;
    strcpy(f_string, s);
    yyparse();
    *errpos = interr;
}

struct funcs {
    char *s;
    int type;
} key[] = {
    "A", VAR,
    "ABS", ABS,
    "ACOS", ACOS,
    "ASIN", ASIN,
    "ATAN", ATAN,
    "ATAN2", ATAN2,
    "B", VAR,
    "C", VAR,
    "CEIL", CEIL,
    "COS", COS,
    "D", VAR,
    "DEG", DEG,
    "DEPTH", VAR,
    "DX", DX,
    "DY", DY,
    "ERF", ERF,
    "ERFC", ERFC,
    "EXP", EXP,
    "FLOOR", FLOOR,
    "HYPOT", HYPOT,
    "INDEX", INDEX,
    "INT", INT,
    "IRAND", IRAND,
    "LGAMMA", LGAMMA,
    "LN", LN,
    "LOG", LOG,
    "MAX", MAXP,
    "MIN", MINP,
    "MOD", MOD,
    "PI", PI,
    "RAD", RAD,
    "RAND", RAND,
    "RNORM", RNORM,
    "SETNO", SETNO,
    "SIN", SIN,
    "SQR", SQR,
    "SQRT", SQRT,
    "TAN", TAN,
    "X", VAR,
    "Y", VAR
};

static int maxfunc = sizeof(key) / sizeof(symtab_entry);

int findf(key, s, tlen)
    struct funcs key[];
char *s;
int tlen;

{

    int low, high, mid;

    low = 0;
    high = tlen - 1;
    while (low <= high) {
	mid = (low + high) / 2;
	if (strcmp(s, key[mid].s) < 0) {
	    high = mid - 1;
	} else {
	    if (strcmp(s, key[mid].s) > 0) {
		low = mid + 1;
	    } else {
		return (mid);
	    }
	}
    }
    return (-1);
}

int getcharstr()
{
    if (pos >= strlen(f_string))
	return EOF;
    return (f_string[pos++]);
}

void ungetchstr()
{
    if (pos > 0)
	pos--;
}

int yylex()
{
    int c;
    int found;

    while ((c = getcharstr()) == ' ' || c == '\t');
    if (c == EOF)
	return (0);
    if (c == '.' || isdigit(c)) {
	char stmp[80];
	double d;
	int i;

	i = 0;
	while (c == '.' || isdigit(c)) {
	    stmp[i++] = c;
	    c = getcharstr();
	}
	if (c == 'E' || c == 'e') {
	    stmp[i++] = c;
	    c = getcharstr();
	    if (c == '+' || c == '-') {
		stmp[i++] = c;
		c = getcharstr();
	    }
	    while (c == '.' || isdigit(c)) {
		stmp[i++] = c;
		c = getcharstr();
	    }
	}
	stmp[i] = '\0';
	ungetchstr();
	sscanf(stmp, "%lf", &d);
	yylval.val = d;
	return NUMBER;
    }
    if (isalpha(c)) {
	char sbuf[100], *p = sbuf;

	do {
	    *p++ = c;
	}
	while ((c = getcharstr()) != EOF && isalnum(c));
	ungetchstr();
	*p = '\0';
	if ((found = findf(key, sbuf, maxfunc)) >= 0) {
	    if (key[found].type == VAR) {
		switch (sbuf[0]) {
		case 'A':
		    yylval.ptr = aa;
		    return VAR;
		case 'B':
		    yylval.ptr = bb;
		    return VAR;
		case 'C':
		    yylval.ptr = cc;
		    return VAR;
		case 'D':
		    if (strcmp(sbuf,"DEPTH")) {
		        yylval.ptr = dd;
		    }
		    else {
		        yylval.ptr = aa;
		    }
		    return VAR;
		case 'X':
		    yylval.ptr = xx;
		    return VAR;
		case 'Y':
		    yylval.ptr = yy;
		    return VAR;
		}
	    }
	    yylval.func = key[found].type;
	    return key[found].type;
	} else {
	    strcat(sbuf, ": No such function or variable");
	    yyerror(sbuf);
	}
    }
    switch (c) {
    case '>':
	return follow('=', GE, GT);
    case '<':
	return follow('=', LE, LT);
    case '=':
	return follow('=', EQ, '=');
    case '!':
	return follow('=', NE, NOT);
    case '|':
	return follow('|', OR, '|');
    case '&':
	return follow('&', AND, '&');
    case '\n':
	return '\n';
    default:
	return c;
    }
}

int follow(int expect, int ifyes, int ifno)
{
    int c = getcharstr();

    if (c == expect)
	return ifyes;
    ungetchstr();
    return ifno;
}

void yyerror(const char *s)
{
    interr = 1;
    errwin(s);
    longjmp(begin, 1);
}
