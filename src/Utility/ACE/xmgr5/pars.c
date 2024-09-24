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
#line 1 "pars.y"


/* $Id: pars.y,v 1.8 2004/06/16 18:34:10 pturner Exp $
 * 
 * evaluate expressions, commands, parameter files
 * 
 */

#define PARS			/* to overide some defines in defines.h */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <ctype.h>
#ifndef WIN32
#include <sys/param.h>
#endif
#include <stdarg.h>
 
#include "globals.h"
#include "noxprotos.h"

void set_prop(int gno, ...);
void set_monitor(int monitor, ...);

#ifndef M_PI
#     define M_PI  3.14159265358979323846
#endif

#ifndef TRUE
#     define TRUE 1
#endif

#ifndef FALSE
#     define FALSE 0
#endif

double result, resx, resy;	/* return value if expression */

double drand48(void);
long lrand48(void);
double erf(double arg); /* doesn't seem to be in ANSI C */
double erfc(double arg); /* doesn't seem to be in ANSI C */
double rnorm(double mean, double sdev);
double fx(double x);
double *getvptr(int gno, int setno, int v);
double vmin(double *x, int n);
double vmax(double *x, int n);
void yyerror(char *s);

static int interr;

static double *freelist[100]; 	/* temporary vectors */
static int fcnt;		/* number allocated */

int naxis = 0;	/* current axis */
int curline, curbox, curstring, curleg, curgrid;

int gotbatch, gotparams, gotread; /* these guys attempt to avoid reentrancy problems */
int readtype, readsrc;
char batchfile[256], paramfile[256], readfile[256];

static char f_string[512];	/* buffer for string to parse */
static int pos = 0;
static double *aa, *bb, *cc, *dd, *xx, *yy;
static int setindex, lxy, ls;
static int setsetno;
static int whichgraph;
static int whichset;

extern int change_gno;
extern int change_type;


#line 147 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    ABS = 258,                     /* ABS  */
    ACOS = 259,                    /* ACOS  */
    ALL = 260,                     /* ALL  */
    ASIN = 261,                    /* ASIN  */
    ATAN = 262,                    /* ATAN  */
    ATAN2 = 263,                   /* ATAN2  */
    CEIL = 264,                    /* CEIL  */
    COS = 265,                     /* COS  */
    DEG = 266,                     /* DEG  */
    DX = 267,                      /* DX  */
    DY = 268,                      /* DY  */
    ERF = 269,                     /* ERF  */
    ERFC = 270,                    /* ERFC  */
    EXP = 271,                     /* EXP  */
    FLOOR = 272,                   /* FLOOR  */
    HYPOT = 273,                   /* HYPOT  */
    INDEX = 274,                   /* INDEX  */
    INT = 275,                     /* INT  */
    INVN = 276,                    /* INVN  */
    INVT = 277,                    /* INVT  */
    IRAND = 278,                   /* IRAND  */
    LGAMMA = 279,                  /* LGAMMA  */
    LN = 280,                      /* LN  */
    LOG = 281,                     /* LOG  */
    LOGISTIC = 282,                /* LOGISTIC  */
    MAXP = 283,                    /* MAXP  */
    MINP = 284,                    /* MINP  */
    MOD = 285,                     /* MOD  */
    NORM = 286,                    /* NORM  */
    NORMP = 287,                   /* NORMP  */
    PI = 288,                      /* PI  */
    RAD = 289,                     /* RAD  */
    RAND = 290,                    /* RAND  */
    RNORM = 291,                   /* RNORM  */
    SETNO = 292,                   /* SETNO  */
    SIN = 293,                     /* SIN  */
    SQR = 294,                     /* SQR  */
    SQRT = 295,                    /* SQRT  */
    TAN = 296,                     /* TAN  */
    INUM = 297,                    /* INUM  */
    CTD = 298,                     /* CTD  */
    ADP = 299,                     /* ADP  */
    TPC = 300,                     /* TPC  */
    VX1 = 301,                     /* VX1  */
    VX2 = 302,                     /* VX2  */
    VY1 = 303,                     /* VY1  */
    VY2 = 304,                     /* VY2  */
    WX1 = 305,                     /* WX1  */
    WX2 = 306,                     /* WX2  */
    WY1 = 307,                     /* WY1  */
    WY2 = 308,                     /* WY2  */
    DELAYP = 309,                  /* DELAYP  */
    DOUBLEBUFFER = 310,            /* DOUBLEBUFFER  */
    DOWN = 311,                    /* DOWN  */
    ABSOLUTE = 312,                /* ABSOLUTE  */
    ABORT = 313,                   /* ABORT  */
    ACTIVATE = 314,                /* ACTIVATE  */
    ACTIVE = 315,                  /* ACTIVE  */
    ALT = 316,                     /* ALT  */
    ALTERNATE = 317,               /* ALTERNATE  */
    ALTXAXIS = 318,                /* ALTXAXIS  */
    ALTYAXIS = 319,                /* ALTYAXIS  */
    ANGLE = 320,                   /* ANGLE  */
    ANNOTATE = 321,                /* ANNOTATE  */
    APPEND = 322,                  /* APPEND  */
    AREA = 323,                    /* AREA  */
    ARROW = 324,                   /* ARROW  */
    AUTO = 325,                    /* AUTO  */
    AUTOSCALE = 326,               /* AUTOSCALE  */
    AUTOTICKS = 327,               /* AUTOTICKS  */
    AVG = 328,                     /* AVG  */
    AXIS = 329,                    /* AXIS  */
    AXES = 330,                    /* AXES  */
    BACKBUFFER = 331,              /* BACKBUFFER  */
    BACKGROUND = 332,              /* BACKGROUND  */
    BAR = 333,                     /* BAR  */
    BATCH = 334,                   /* BATCH  */
    BLOCK = 335,                   /* BLOCK  */
    BIN = 336,                     /* BIN  */
    BOTH = 337,                    /* BOTH  */
    BOTTOM = 338,                  /* BOTTOM  */
    BOX = 339,                     /* BOX  */
    BOXPLOT = 340,                 /* BOXPLOT  */
    BP = 341,                      /* BP  */
    CD = 342,                      /* CD  */
    CELLS = 343,                   /* CELLS  */
    CENTER = 344,                  /* CENTER  */
    CHAR = 345,                    /* CHAR  */
    CHRSTR = 346,                  /* CHRSTR  */
    CLEAR = 347,                   /* CLEAR  */
    CLICK = 348,                   /* CLICK  */
    CMAP = 349,                    /* CMAP  */
    COLOR = 350,                   /* COLOR  */
    COMMENT = 351,                 /* COMMENT  */
    COPY = 352,                    /* COPY  */
    CORIE = 353,                   /* CORIE  */
    CYCLE = 354,                   /* CYCLE  */
    DB = 355,                      /* DB  */
    DECIMAL = 356,                 /* DECIMAL  */
    DEF = 357,                     /* DEF  */
    DEFAULT = 358,                 /* DEFAULT  */
    DELETE = 359,                  /* DELETE  */
    DEVICE = 360,                  /* DEVICE  */
    DFT = 361,                     /* DFT  */
    DIFFERENCE = 362,              /* DIFFERENCE  */
    DISK = 363,                    /* DISK  */
    DRAW2 = 364,                   /* DRAW2  */
    DROP = 365,                    /* DROP  */
    DXDX = 366,                    /* DXDX  */
    DXP = 367,                     /* DXP  */
    DYDY = 368,                    /* DYDY  */
    DYP = 369,                     /* DYP  */
    ECHO = 370,                    /* ECHO  */
    EDIT = 371,                    /* EDIT  */
    ELSE = 372,                    /* ELSE  */
    END = 373,                     /* END  */
    ERRORBAR = 374,                /* ERRORBAR  */
    EXIT = 375,                    /* EXIT  */
    EXPONENTIAL = 376,             /* EXPONENTIAL  */
    FALSEP = 377,                  /* FALSEP  */
    FFT = 378,                     /* FFT  */
    FILEP = 379,                   /* FILEP  */
    FILL = 380,                    /* FILL  */
    FIND = 381,                    /* FIND  */
    FIXEDPOINT = 382,              /* FIXEDPOINT  */
    FLUSH = 383,                   /* FLUSH  */
    FOCUS = 384,                   /* FOCUS  */
    FOLLOWS = 385,                 /* FOLLOWS  */
    FONTP = 386,                   /* FONTP  */
    FOREGROUND = 387,              /* FOREGROUND  */
    FORMAT = 388,                  /* FORMAT  */
    FRONTBUFFER = 389,             /* FRONTBUFFER  */
    FRAMEP = 390,                  /* FRAMEP  */
    GETP = 391,                    /* GETP  */
    GIFL = 392,                    /* GIFL  */
    GIFP = 393,                    /* GIFP  */
    GRAPH = 394,                   /* GRAPH  */
    GRAPHNO = 395,                 /* GRAPHNO  */
    GRAPHS = 396,                  /* GRAPHS  */
    GRAPHTYPE = 397,               /* GRAPHTYPE  */
    GRID = 398,                    /* GRID  */
    HARDCOPY = 399,                /* HARDCOPY  */
    HBAR = 400,                    /* HBAR  */
    HBOXPLOT = 401,                /* HBOXPLOT  */
    HGAP = 402,                    /* HGAP  */
    HIDDEN = 403,                  /* HIDDEN  */
    HORIZONTAL = 404,              /* HORIZONTAL  */
    HISTO = 405,                   /* HISTO  */
    IF = 406,                      /* IF  */
    IGNORE = 407,                  /* IGNORE  */
    IHL = 408,                     /* IHL  */
    IMAGE = 409,                   /* IMAGE  */
    IN = 410,                      /* IN  */
    INIT = 411,                    /* INIT  */
    INITGRAPHICS = 412,            /* INITGRAPHICS  */
    INOUT = 413,                   /* INOUT  */
    INTEGRATE = 414,               /* INTEGRATE  */
    INTERP = 415,                  /* INTERP  */
    INVDFT = 416,                  /* INVDFT  */
    INVFFT = 417,                  /* INVFFT  */
    ISOLINE = 418,                 /* ISOLINE  */
    ISOLINES = 419,                /* ISOLINES  */
    JUST = 420,                    /* JUST  */
    KILL = 421,                    /* KILL  */
    LABEL = 422,                   /* LABEL  */
    LAYOUT = 423,                  /* LAYOUT  */
    LEAVE = 424,                   /* LEAVE  */
    LEAVEGRAPHICS = 425,           /* LEAVEGRAPHICS  */
    LEFT = 426,                    /* LEFT  */
    LEGEND = 427,                  /* LEGEND  */
    LENGTH = 428,                  /* LENGTH  */
    LEVEL = 429,                   /* LEVEL  */
    LEVELS = 430,                  /* LEVELS  */
    LINE = 431,                    /* LINE  */
    LINESTYLE = 432,               /* LINESTYLE  */
    LINETO = 433,                  /* LINETO  */
    LINEWIDTH = 434,               /* LINEWIDTH  */
    LINK = 435,                    /* LINK  */
    LOAD = 436,                    /* LOAD  */
    LOCATOR = 437,                 /* LOCATOR  */
    LOCTYPE = 438,                 /* LOCTYPE  */
    LOGX = 439,                    /* LOGX  */
    LOGY = 440,                    /* LOGY  */
    LOGXY = 441,                   /* LOGXY  */
    MAJOR = 442,                   /* MAJOR  */
    MIFL = 443,                    /* MIFL  */
    MIFP = 444,                    /* MIFP  */
    MINOR = 445,                   /* MINOR  */
    MISSINGP = 446,                /* MISSINGP  */
    MONITOR = 447,                 /* MONITOR  */
    MOVE = 448,                    /* MOVE  */
    MOVE2 = 449,                   /* MOVE2  */
    MOVETO = 450,                  /* MOVETO  */
    NEGATE = 451,                  /* NEGATE  */
    NO = 452,                      /* NO  */
    NONE = 453,                    /* NONE  */
    NORMAL = 454,                  /* NORMAL  */
    NXY = 455,                     /* NXY  */
    OFF = 456,                     /* OFF  */
    OFFSETX = 457,                 /* OFFSETX  */
    OFFSETY = 458,                 /* OFFSETY  */
    ON = 459,                      /* ON  */
    OP = 460,                      /* OP  */
    ORIENT = 461,                  /* ORIENT  */
    OUT = 462,                     /* OUT  */
    PAGE = 463,                    /* PAGE  */
    PARA = 464,                    /* PARA  */
    PARALLEL = 465,                /* PARALLEL  */
    PARAMETERS = 466,              /* PARAMETERS  */
    PARAMS = 467,                  /* PARAMS  */
    PATTERN = 468,                 /* PATTERN  */
    PERIMETER = 469,               /* PERIMETER  */
    PERP = 470,                    /* PERP  */
    PERPENDICULAR = 471,           /* PERPENDICULAR  */
    PIE = 472,                     /* PIE  */
    PIPE = 473,                    /* PIPE  */
    PLACE = 474,                   /* PLACE  */
    POINT = 475,                   /* POINT  */
    POLAR = 476,                   /* POLAR  */
    POWER = 477,                   /* POWER  */
    PREC = 478,                    /* PREC  */
    PREPEND = 479,                 /* PREPEND  */
    PRINT = 480,                   /* PRINT  */
    PS = 481,                      /* PS  */
    PSCOLORP = 482,                /* PSCOLORP  */
    PSMONOP = 483,                 /* PSMONOP  */
    PSCOLORL = 484,                /* PSCOLORL  */
    PSMONOL = 485,                 /* PSMONOL  */
    PUSH = 486,                    /* PUSH  */
    POP = 487,                     /* POP  */
    PUTP = 488,                    /* PUTP  */
    READ = 489,                    /* READ  */
    REDRAW = 490,                  /* REDRAW  */
    REGRESS = 491,                 /* REGRESS  */
    REGNUM = 492,                  /* REGNUM  */
    REGIONS = 493,                 /* REGIONS  */
    RENDER = 494,                  /* RENDER  */
    REVERSE = 495,                 /* REVERSE  */
    RIGHT = 496,                   /* RIGHT  */
    RISER = 497,                   /* RISER  */
    ROT = 498,                     /* ROT  */
    RUNAVG = 499,                  /* RUNAVG  */
    RUNMED = 500,                  /* RUNMED  */
    RUNSTD = 501,                  /* RUNSTD  */
    RUNMIN = 502,                  /* RUNMIN  */
    RUNMAX = 503,                  /* RUNMAX  */
    SAMPLE = 504,                  /* SAMPLE  */
    SAVEALL = 505,                 /* SAVEALL  */
    SCALE = 506,                   /* SCALE  */
    SCIENTIFIC = 507,              /* SCIENTIFIC  */
    SET = 508,                     /* SET  */
    SETNUM = 509,                  /* SETNUM  */
    SETS = 510,                    /* SETS  */
    SIGN = 511,                    /* SIGN  */
    SIZE = 512,                    /* SIZE  */
    SKIP = 513,                    /* SKIP  */
    SLEEP = 514,                   /* SLEEP  */
    SLICE = 515,                   /* SLICE  */
    SOURCE = 516,                  /* SOURCE  */
    SPEC = 517,                    /* SPEC  */
    SPECIFIED = 518,               /* SPECIFIED  */
    SPECTRUM = 519,                /* SPECTRUM  */
    STACK = 520,                   /* STACK  */
    STACKEDBAR = 521,              /* STACKEDBAR  */
    STACKEDHBAR = 522,             /* STACKEDHBAR  */
    STACKEDLINE = 523,             /* STACKEDLINE  */
    STAGGER = 524,                 /* STAGGER  */
    START = 525,                   /* START  */
    STARTTYPE = 526,               /* STARTTYPE  */
    STATUS = 527,                  /* STATUS  */
    STEP = 528,                    /* STEP  */
    STOP = 529,                    /* STOP  */
    STRING = 530,                  /* STRING  */
    SUBTITLE = 531,                /* SUBTITLE  */
    SWAPBUFFER = 532,              /* SWAPBUFFER  */
    SYMBOL = 533,                  /* SYMBOL  */
    TICKP = 534,                   /* TICKP  */
    TICKLABEL = 535,               /* TICKLABEL  */
    TICKMARKS = 536,               /* TICKMARKS  */
    TITLE = 537,                   /* TITLE  */
    TO = 538,                      /* TO  */
    TOP = 539,                     /* TOP  */
    TRUEP = 540,                   /* TRUEP  */
    TYPE = 541,                    /* TYPE  */
    UP = 542,                      /* UP  */
    VELOCITY = 543,                /* VELOCITY  */
    VERTICAL = 544,                /* VERTICAL  */
    VGAP = 545,                    /* VGAP  */
    VIEW = 546,                    /* VIEW  */
    WITH = 547,                    /* WITH  */
    WORLD = 548,                   /* WORLD  */
    WRITE = 549,                   /* WRITE  */
    X = 550,                       /* X  */
    X0 = 551,                      /* X0  */
    X1 = 552,                      /* X1  */
    XAXES = 553,                   /* XAXES  */
    XAXIS = 554,                   /* XAXIS  */
    XCOR = 555,                    /* XCOR  */
    XMAX = 556,                    /* XMAX  */
    XMIN = 557,                    /* XMIN  */
    FEGRID = 558,                  /* FEGRID  */
    RECTGRID = 559,                /* RECTGRID  */
    XY = 560,                      /* XY  */
    XYARC = 561,                   /* XYARC  */
    XYBOX = 562,                   /* XYBOX  */
    XYBOXPLOT = 563,               /* XYBOXPLOT  */
    XYFIXED = 564,                 /* XYFIXED  */
    XYHILO = 565,                  /* XYHILO  */
    XYRT = 566,                    /* XYRT  */
    XYSEG = 567,                   /* XYSEG  */
    XYSTRING = 568,                /* XYSTRING  */
    XYDX = 569,                    /* XYDX  */
    XYDY = 570,                    /* XYDY  */
    XYDXDX = 571,                  /* XYDXDX  */
    XYDYDY = 572,                  /* XYDYDY  */
    XYDXDY = 573,                  /* XYDXDY  */
    XYX2Y2 = 574,                  /* XYX2Y2  */
    XYXX = 575,                    /* XYXX  */
    XYYY = 576,                    /* XYYY  */
    XYZ = 577,                     /* XYZ  */
    XYZW = 578,                    /* XYZW  */
    XYUV = 579,                    /* XYUV  */
    Y = 580,                       /* Y  */
    Y0 = 581,                      /* Y0  */
    Y1 = 582,                      /* Y1  */
    Y2 = 583,                      /* Y2  */
    Y3 = 584,                      /* Y3  */
    Y4 = 585,                      /* Y4  */
    Y5 = 586,                      /* Y5  */
    YAXES = 587,                   /* YAXES  */
    YAXIS = 588,                   /* YAXIS  */
    YES = 589,                     /* YES  */
    YMAX = 590,                    /* YMAX  */
    YMIN = 591,                    /* YMIN  */
    ZEROXAXIS = 592,               /* ZEROXAXIS  */
    ZEROYAXIS = 593,               /* ZEROYAXIS  */
    ABOVE = 594,                   /* ABOVE  */
    BELOW = 595,                   /* BELOW  */
    POLYI = 596,                   /* POLYI  */
    POLYO = 597,                   /* POLYO  */
    GENERAL = 598,                 /* GENERAL  */
    DDMMYY = 599,                  /* DDMMYY  */
    MMDDYY = 600,                  /* MMDDYY  */
    MMYY = 601,                    /* MMYY  */
    MMDD = 602,                    /* MMDD  */
    MONTHDAY = 603,                /* MONTHDAY  */
    DAYMONTH = 604,                /* DAYMONTH  */
    MONTHS = 605,                  /* MONTHS  */
    MONTHL = 606,                  /* MONTHL  */
    DDMONTHSYYHHMMSS = 607,        /* DDMONTHSYYHHMMSS  */
    DDMONTHSYY = 608,              /* DDMONTHSYY  */
    DAYOFWEEKS = 609,              /* DAYOFWEEKS  */
    DAYOFWEEKL = 610,              /* DAYOFWEEKL  */
    DAYOFYEAR = 611,               /* DAYOFYEAR  */
    HMS = 612,                     /* HMS  */
    HH = 613,                      /* HH  */
    MMDDHMS = 614,                 /* MMDDHMS  */
    MMDDYYHMS = 615,               /* MMDDYYHMS  */
    DEGREESLON = 616,              /* DEGREESLON  */
    DEGREESMMLON = 617,            /* DEGREESMMLON  */
    DEGREESMMSSLON = 618,          /* DEGREESMMSSLON  */
    MMSSLON = 619,                 /* MMSSLON  */
    DEGREESLAT = 620,              /* DEGREESLAT  */
    DEGREESMMLAT = 621,            /* DEGREESMMLAT  */
    DEGREESMMSSLAT = 622,          /* DEGREESMMSSLAT  */
    MMSSLAT = 623,                 /* MMSSLAT  */
    DOT = 624,                     /* DOT  */
    STAR = 625,                    /* STAR  */
    PLUS = 626,                    /* PLUS  */
    CROSS = 627,                   /* CROSS  */
    CIRCLE = 628,                  /* CIRCLE  */
    SQUARE = 629,                  /* SQUARE  */
    DIAMOND = 630,                 /* DIAMOND  */
    TRIANGLE1 = 631,               /* TRIANGLE1  */
    TRIANGLE2 = 632,               /* TRIANGLE2  */
    TRIANGLE3 = 633,               /* TRIANGLE3  */
    TRIANGLE4 = 634,               /* TRIANGLE4  */
    SPLINE = 635,                  /* SPLINE  */
    LANDSCAPE = 636,               /* LANDSCAPE  */
    PORTRAIT = 637,                /* PORTRAIT  */
    FREE = 638,                    /* FREE  */
    FIXED = 639,                   /* FIXED  */
    STATUSBAR = 640,               /* STATUSBAR  */
    LOCATORBAR = 641,              /* LOCATORBAR  */
    TOOLBAR = 642,                 /* TOOLBAR  */
    ELCIRC = 643,                  /* ELCIRC  */
    SCALAR = 644,                  /* SCALAR  */
    VECTOR = 645,                  /* VECTOR  */
    HEAT = 646,                    /* HEAT  */
    HISTORY = 647,                 /* HISTORY  */
    PROFILE = 648,                 /* PROFILE  */
    NODE = 649,                    /* NODE  */
    VAR = 650,                     /* VAR  */
    NUMBER = 651,                  /* NUMBER  */
    OR = 652,                      /* OR  */
    AND = 653,                     /* AND  */
    GT = 654,                      /* GT  */
    LT = 655,                      /* LT  */
    LE = 656,                      /* LE  */
    GE = 657,                      /* GE  */
    EQ = 658,                      /* EQ  */
    NE = 659,                      /* NE  */
    UMINUS = 660,                  /* UMINUS  */
    NOT = 661                      /* NOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ABS 258
#define ACOS 259
#define ALL 260
#define ASIN 261
#define ATAN 262
#define ATAN2 263
#define CEIL 264
#define COS 265
#define DEG 266
#define DX 267
#define DY 268
#define ERF 269
#define ERFC 270
#define EXP 271
#define FLOOR 272
#define HYPOT 273
#define INDEX 274
#define INT 275
#define INVN 276
#define INVT 277
#define IRAND 278
#define LGAMMA 279
#define LN 280
#define LOG 281
#define LOGISTIC 282
#define MAXP 283
#define MINP 284
#define MOD 285
#define NORM 286
#define NORMP 287
#define PI 288
#define RAD 289
#define RAND 290
#define RNORM 291
#define SETNO 292
#define SIN 293
#define SQR 294
#define SQRT 295
#define TAN 296
#define INUM 297
#define CTD 298
#define ADP 299
#define TPC 300
#define VX1 301
#define VX2 302
#define VY1 303
#define VY2 304
#define WX1 305
#define WX2 306
#define WY1 307
#define WY2 308
#define DELAYP 309
#define DOUBLEBUFFER 310
#define DOWN 311
#define ABSOLUTE 312
#define ABORT 313
#define ACTIVATE 314
#define ACTIVE 315
#define ALT 316
#define ALTERNATE 317
#define ALTXAXIS 318
#define ALTYAXIS 319
#define ANGLE 320
#define ANNOTATE 321
#define APPEND 322
#define AREA 323
#define ARROW 324
#define AUTO 325
#define AUTOSCALE 326
#define AUTOTICKS 327
#define AVG 328
#define AXIS 329
#define AXES 330
#define BACKBUFFER 331
#define BACKGROUND 332
#define BAR 333
#define BATCH 334
#define BLOCK 335
#define BIN 336
#define BOTH 337
#define BOTTOM 338
#define BOX 339
#define BOXPLOT 340
#define BP 341
#define CD 342
#define CELLS 343
#define CENTER 344
#define CHAR 345
#define CHRSTR 346
#define CLEAR 347
#define CLICK 348
#define CMAP 349
#define COLOR 350
#define COMMENT 351
#define COPY 352
#define CORIE 353
#define CYCLE 354
#define DB 355
#define DECIMAL 356
#define DEF 357
#define DEFAULT 358
#define DELETE 359
#define DEVICE 360
#define DFT 361
#define DIFFERENCE 362
#define DISK 363
#define DRAW2 364
#define DROP 365
#define DXDX 366
#define DXP 367
#define DYDY 368
#define DYP 369
#define ECHO 370
#define EDIT 371
#define ELSE 372
#define END 373
#define ERRORBAR 374
#define EXIT 375
#define EXPONENTIAL 376
#define FALSEP 377
#define FFT 378
#define FILEP 379
#define FILL 380
#define FIND 381
#define FIXEDPOINT 382
#define FLUSH 383
#define FOCUS 384
#define FOLLOWS 385
#define FONTP 386
#define FOREGROUND 387
#define FORMAT 388
#define FRONTBUFFER 389
#define FRAMEP 390
#define GETP 391
#define GIFL 392
#define GIFP 393
#define GRAPH 394
#define GRAPHNO 395
#define GRAPHS 396
#define GRAPHTYPE 397
#define GRID 398
#define HARDCOPY 399
#define HBAR 400
#define HBOXPLOT 401
#define HGAP 402
#define HIDDEN 403
#define HORIZONTAL 404
#define HISTO 405
#define IF 406
#define IGNORE 407
#define IHL 408
#define IMAGE 409
#define IN 410
#define INIT 411
#define INITGRAPHICS 412
#define INOUT 413
#define INTEGRATE 414
#define INTERP 415
#define INVDFT 416
#define INVFFT 417
#define ISOLINE 418
#define ISOLINES 419
#define JUST 420
#define KILL 421
#define LABEL 422
#define LAYOUT 423
#define LEAVE 424
#define LEAVEGRAPHICS 425
#define LEFT 426
#define LEGEND 427
#define LENGTH 428
#define LEVEL 429
#define LEVELS 430
#define LINE 431
#define LINESTYLE 432
#define LINETO 433
#define LINEWIDTH 434
#define LINK 435
#define LOAD 436
#define LOCATOR 437
#define LOCTYPE 438
#define LOGX 439
#define LOGY 440
#define LOGXY 441
#define MAJOR 442
#define MIFL 443
#define MIFP 444
#define MINOR 445
#define MISSINGP 446
#define MONITOR 447
#define MOVE 448
#define MOVE2 449
#define MOVETO 450
#define NEGATE 451
#define NO 452
#define NONE 453
#define NORMAL 454
#define NXY 455
#define OFF 456
#define OFFSETX 457
#define OFFSETY 458
#define ON 459
#define OP 460
#define ORIENT 461
#define OUT 462
#define PAGE 463
#define PARA 464
#define PARALLEL 465
#define PARAMETERS 466
#define PARAMS 467
#define PATTERN 468
#define PERIMETER 469
#define PERP 470
#define PERPENDICULAR 471
#define PIE 472
#define PIPE 473
#define PLACE 474
#define POINT 475
#define POLAR 476
#define POWER 477
#define PREC 478
#define PREPEND 479
#define PRINT 480
#define PS 481
#define PSCOLORP 482
#define PSMONOP 483
#define PSCOLORL 484
#define PSMONOL 485
#define PUSH 486
#define POP 487
#define PUTP 488
#define READ 489
#define REDRAW 490
#define REGRESS 491
#define REGNUM 492
#define REGIONS 493
#define RENDER 494
#define REVERSE 495
#define RIGHT 496
#define RISER 497
#define ROT 498
#define RUNAVG 499
#define RUNMED 500
#define RUNSTD 501
#define RUNMIN 502
#define RUNMAX 503
#define SAMPLE 504
#define SAVEALL 505
#define SCALE 506
#define SCIENTIFIC 507
#define SET 508
#define SETNUM 509
#define SETS 510
#define SIGN 511
#define SIZE 512
#define SKIP 513
#define SLEEP 514
#define SLICE 515
#define SOURCE 516
#define SPEC 517
#define SPECIFIED 518
#define SPECTRUM 519
#define STACK 520
#define STACKEDBAR 521
#define STACKEDHBAR 522
#define STACKEDLINE 523
#define STAGGER 524
#define START 525
#define STARTTYPE 526
#define STATUS 527
#define STEP 528
#define STOP 529
#define STRING 530
#define SUBTITLE 531
#define SWAPBUFFER 532
#define SYMBOL 533
#define TICKP 534
#define TICKLABEL 535
#define TICKMARKS 536
#define TITLE 537
#define TO 538
#define TOP 539
#define TRUEP 540
#define TYPE 541
#define UP 542
#define VELOCITY 543
#define VERTICAL 544
#define VGAP 545
#define VIEW 546
#define WITH 547
#define WORLD 548
#define WRITE 549
#define X 550
#define X0 551
#define X1 552
#define XAXES 553
#define XAXIS 554
#define XCOR 555
#define XMAX 556
#define XMIN 557
#define FEGRID 558
#define RECTGRID 559
#define XY 560
#define XYARC 561
#define XYBOX 562
#define XYBOXPLOT 563
#define XYFIXED 564
#define XYHILO 565
#define XYRT 566
#define XYSEG 567
#define XYSTRING 568
#define XYDX 569
#define XYDY 570
#define XYDXDX 571
#define XYDYDY 572
#define XYDXDY 573
#define XYX2Y2 574
#define XYXX 575
#define XYYY 576
#define XYZ 577
#define XYZW 578
#define XYUV 579
#define Y 580
#define Y0 581
#define Y1 582
#define Y2 583
#define Y3 584
#define Y4 585
#define Y5 586
#define YAXES 587
#define YAXIS 588
#define YES 589
#define YMAX 590
#define YMIN 591
#define ZEROXAXIS 592
#define ZEROYAXIS 593
#define ABOVE 594
#define BELOW 595
#define POLYI 596
#define POLYO 597
#define GENERAL 598
#define DDMMYY 599
#define MMDDYY 600
#define MMYY 601
#define MMDD 602
#define MONTHDAY 603
#define DAYMONTH 604
#define MONTHS 605
#define MONTHL 606
#define DDMONTHSYYHHMMSS 607
#define DDMONTHSYY 608
#define DAYOFWEEKS 609
#define DAYOFWEEKL 610
#define DAYOFYEAR 611
#define HMS 612
#define HH 613
#define MMDDHMS 614
#define MMDDYYHMS 615
#define DEGREESLON 616
#define DEGREESMMLON 617
#define DEGREESMMSSLON 618
#define MMSSLON 619
#define DEGREESLAT 620
#define DEGREESMMLAT 621
#define DEGREESMMSSLAT 622
#define MMSSLAT 623
#define DOT 624
#define STAR 625
#define PLUS 626
#define CROSS 627
#define CIRCLE 628
#define SQUARE 629
#define DIAMOND 630
#define TRIANGLE1 631
#define TRIANGLE2 632
#define TRIANGLE3 633
#define TRIANGLE4 634
#define SPLINE 635
#define LANDSCAPE 636
#define PORTRAIT 637
#define FREE 638
#define FIXED 639
#define STATUSBAR 640
#define LOCATORBAR 641
#define TOOLBAR 642
#define ELCIRC 643
#define SCALAR 644
#define VECTOR 645
#define HEAT 646
#define HISTORY 647
#define PROFILE 648
#define NODE 649
#define VAR 650
#define NUMBER 651
#define OR 652
#define AND 653
#define GT 654
#define LT 655
#define LE 656
#define GE 657
#define EQ 658
#define NE 659
#define UMINUS 660
#define NOT 661

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 77 "pars.y"

    double val;
    long ival;
    double *ptr;
    long func;
    long pset;
    char *str;

#line 1021 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ABS = 3,                        /* ABS  */
  YYSYMBOL_ACOS = 4,                       /* ACOS  */
  YYSYMBOL_ALL = 5,                        /* ALL  */
  YYSYMBOL_ASIN = 6,                       /* ASIN  */
  YYSYMBOL_ATAN = 7,                       /* ATAN  */
  YYSYMBOL_ATAN2 = 8,                      /* ATAN2  */
  YYSYMBOL_CEIL = 9,                       /* CEIL  */
  YYSYMBOL_COS = 10,                       /* COS  */
  YYSYMBOL_DEG = 11,                       /* DEG  */
  YYSYMBOL_DX = 12,                        /* DX  */
  YYSYMBOL_DY = 13,                        /* DY  */
  YYSYMBOL_ERF = 14,                       /* ERF  */
  YYSYMBOL_ERFC = 15,                      /* ERFC  */
  YYSYMBOL_EXP = 16,                       /* EXP  */
  YYSYMBOL_FLOOR = 17,                     /* FLOOR  */
  YYSYMBOL_HYPOT = 18,                     /* HYPOT  */
  YYSYMBOL_INDEX = 19,                     /* INDEX  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_INVN = 21,                      /* INVN  */
  YYSYMBOL_INVT = 22,                      /* INVT  */
  YYSYMBOL_IRAND = 23,                     /* IRAND  */
  YYSYMBOL_LGAMMA = 24,                    /* LGAMMA  */
  YYSYMBOL_LN = 25,                        /* LN  */
  YYSYMBOL_LOG = 26,                       /* LOG  */
  YYSYMBOL_LOGISTIC = 27,                  /* LOGISTIC  */
  YYSYMBOL_MAXP = 28,                      /* MAXP  */
  YYSYMBOL_MINP = 29,                      /* MINP  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_NORM = 31,                      /* NORM  */
  YYSYMBOL_NORMP = 32,                     /* NORMP  */
  YYSYMBOL_PI = 33,                        /* PI  */
  YYSYMBOL_RAD = 34,                       /* RAD  */
  YYSYMBOL_RAND = 35,                      /* RAND  */
  YYSYMBOL_RNORM = 36,                     /* RNORM  */
  YYSYMBOL_SETNO = 37,                     /* SETNO  */
  YYSYMBOL_SIN = 38,                       /* SIN  */
  YYSYMBOL_SQR = 39,                       /* SQR  */
  YYSYMBOL_SQRT = 40,                      /* SQRT  */
  YYSYMBOL_TAN = 41,                       /* TAN  */
  YYSYMBOL_INUM = 42,                      /* INUM  */
  YYSYMBOL_CTD = 43,                       /* CTD  */
  YYSYMBOL_ADP = 44,                       /* ADP  */
  YYSYMBOL_TPC = 45,                       /* TPC  */
  YYSYMBOL_VX1 = 46,                       /* VX1  */
  YYSYMBOL_VX2 = 47,                       /* VX2  */
  YYSYMBOL_VY1 = 48,                       /* VY1  */
  YYSYMBOL_VY2 = 49,                       /* VY2  */
  YYSYMBOL_WX1 = 50,                       /* WX1  */
  YYSYMBOL_WX2 = 51,                       /* WX2  */
  YYSYMBOL_WY1 = 52,                       /* WY1  */
  YYSYMBOL_WY2 = 53,                       /* WY2  */
  YYSYMBOL_DELAYP = 54,                    /* DELAYP  */
  YYSYMBOL_DOUBLEBUFFER = 55,              /* DOUBLEBUFFER  */
  YYSYMBOL_DOWN = 56,                      /* DOWN  */
  YYSYMBOL_ABSOLUTE = 57,                  /* ABSOLUTE  */
  YYSYMBOL_ABORT = 58,                     /* ABORT  */
  YYSYMBOL_ACTIVATE = 59,                  /* ACTIVATE  */
  YYSYMBOL_ACTIVE = 60,                    /* ACTIVE  */
  YYSYMBOL_ALT = 61,                       /* ALT  */
  YYSYMBOL_ALTERNATE = 62,                 /* ALTERNATE  */
  YYSYMBOL_ALTXAXIS = 63,                  /* ALTXAXIS  */
  YYSYMBOL_ALTYAXIS = 64,                  /* ALTYAXIS  */
  YYSYMBOL_ANGLE = 65,                     /* ANGLE  */
  YYSYMBOL_ANNOTATE = 66,                  /* ANNOTATE  */
  YYSYMBOL_APPEND = 67,                    /* APPEND  */
  YYSYMBOL_AREA = 68,                      /* AREA  */
  YYSYMBOL_ARROW = 69,                     /* ARROW  */
  YYSYMBOL_AUTO = 70,                      /* AUTO  */
  YYSYMBOL_AUTOSCALE = 71,                 /* AUTOSCALE  */
  YYSYMBOL_AUTOTICKS = 72,                 /* AUTOTICKS  */
  YYSYMBOL_AVG = 73,                       /* AVG  */
  YYSYMBOL_AXIS = 74,                      /* AXIS  */
  YYSYMBOL_AXES = 75,                      /* AXES  */
  YYSYMBOL_BACKBUFFER = 76,                /* BACKBUFFER  */
  YYSYMBOL_BACKGROUND = 77,                /* BACKGROUND  */
  YYSYMBOL_BAR = 78,                       /* BAR  */
  YYSYMBOL_BATCH = 79,                     /* BATCH  */
  YYSYMBOL_BLOCK = 80,                     /* BLOCK  */
  YYSYMBOL_BIN = 81,                       /* BIN  */
  YYSYMBOL_BOTH = 82,                      /* BOTH  */
  YYSYMBOL_BOTTOM = 83,                    /* BOTTOM  */
  YYSYMBOL_BOX = 84,                       /* BOX  */
  YYSYMBOL_BOXPLOT = 85,                   /* BOXPLOT  */
  YYSYMBOL_BP = 86,                        /* BP  */
  YYSYMBOL_CD = 87,                        /* CD  */
  YYSYMBOL_CELLS = 88,                     /* CELLS  */
  YYSYMBOL_CENTER = 89,                    /* CENTER  */
  YYSYMBOL_CHAR = 90,                      /* CHAR  */
  YYSYMBOL_CHRSTR = 91,                    /* CHRSTR  */
  YYSYMBOL_CLEAR = 92,                     /* CLEAR  */
  YYSYMBOL_CLICK = 93,                     /* CLICK  */
  YYSYMBOL_CMAP = 94,                      /* CMAP  */
  YYSYMBOL_COLOR = 95,                     /* COLOR  */
  YYSYMBOL_COMMENT = 96,                   /* COMMENT  */
  YYSYMBOL_COPY = 97,                      /* COPY  */
  YYSYMBOL_CORIE = 98,                     /* CORIE  */
  YYSYMBOL_CYCLE = 99,                     /* CYCLE  */
  YYSYMBOL_DB = 100,                       /* DB  */
  YYSYMBOL_DECIMAL = 101,                  /* DECIMAL  */
  YYSYMBOL_DEF = 102,                      /* DEF  */
  YYSYMBOL_DEFAULT = 103,                  /* DEFAULT  */
  YYSYMBOL_DELETE = 104,                   /* DELETE  */
  YYSYMBOL_DEVICE = 105,                   /* DEVICE  */
  YYSYMBOL_DFT = 106,                      /* DFT  */
  YYSYMBOL_DIFFERENCE = 107,               /* DIFFERENCE  */
  YYSYMBOL_DISK = 108,                     /* DISK  */
  YYSYMBOL_DRAW2 = 109,                    /* DRAW2  */
  YYSYMBOL_DROP = 110,                     /* DROP  */
  YYSYMBOL_DXDX = 111,                     /* DXDX  */
  YYSYMBOL_DXP = 112,                      /* DXP  */
  YYSYMBOL_DYDY = 113,                     /* DYDY  */
  YYSYMBOL_DYP = 114,                      /* DYP  */
  YYSYMBOL_ECHO = 115,                     /* ECHO  */
  YYSYMBOL_EDIT = 116,                     /* EDIT  */
  YYSYMBOL_ELSE = 117,                     /* ELSE  */
  YYSYMBOL_END = 118,                      /* END  */
  YYSYMBOL_ERRORBAR = 119,                 /* ERRORBAR  */
  YYSYMBOL_EXIT = 120,                     /* EXIT  */
  YYSYMBOL_EXPONENTIAL = 121,              /* EXPONENTIAL  */
  YYSYMBOL_FALSEP = 122,                   /* FALSEP  */
  YYSYMBOL_FFT = 123,                      /* FFT  */
  YYSYMBOL_FILEP = 124,                    /* FILEP  */
  YYSYMBOL_FILL = 125,                     /* FILL  */
  YYSYMBOL_FIND = 126,                     /* FIND  */
  YYSYMBOL_FIXEDPOINT = 127,               /* FIXEDPOINT  */
  YYSYMBOL_FLUSH = 128,                    /* FLUSH  */
  YYSYMBOL_FOCUS = 129,                    /* FOCUS  */
  YYSYMBOL_FOLLOWS = 130,                  /* FOLLOWS  */
  YYSYMBOL_FONTP = 131,                    /* FONTP  */
  YYSYMBOL_FOREGROUND = 132,               /* FOREGROUND  */
  YYSYMBOL_FORMAT = 133,                   /* FORMAT  */
  YYSYMBOL_FRONTBUFFER = 134,              /* FRONTBUFFER  */
  YYSYMBOL_FRAMEP = 135,                   /* FRAMEP  */
  YYSYMBOL_GETP = 136,                     /* GETP  */
  YYSYMBOL_GIFL = 137,                     /* GIFL  */
  YYSYMBOL_GIFP = 138,                     /* GIFP  */
  YYSYMBOL_GRAPH = 139,                    /* GRAPH  */
  YYSYMBOL_GRAPHNO = 140,                  /* GRAPHNO  */
  YYSYMBOL_GRAPHS = 141,                   /* GRAPHS  */
  YYSYMBOL_GRAPHTYPE = 142,                /* GRAPHTYPE  */
  YYSYMBOL_GRID = 143,                     /* GRID  */
  YYSYMBOL_HARDCOPY = 144,                 /* HARDCOPY  */
  YYSYMBOL_HBAR = 145,                     /* HBAR  */
  YYSYMBOL_HBOXPLOT = 146,                 /* HBOXPLOT  */
  YYSYMBOL_HGAP = 147,                     /* HGAP  */
  YYSYMBOL_HIDDEN = 148,                   /* HIDDEN  */
  YYSYMBOL_HORIZONTAL = 149,               /* HORIZONTAL  */
  YYSYMBOL_HISTO = 150,                    /* HISTO  */
  YYSYMBOL_IF = 151,                       /* IF  */
  YYSYMBOL_IGNORE = 152,                   /* IGNORE  */
  YYSYMBOL_IHL = 153,                      /* IHL  */
  YYSYMBOL_IMAGE = 154,                    /* IMAGE  */
  YYSYMBOL_IN = 155,                       /* IN  */
  YYSYMBOL_INIT = 156,                     /* INIT  */
  YYSYMBOL_INITGRAPHICS = 157,             /* INITGRAPHICS  */
  YYSYMBOL_INOUT = 158,                    /* INOUT  */
  YYSYMBOL_INTEGRATE = 159,                /* INTEGRATE  */
  YYSYMBOL_INTERP = 160,                   /* INTERP  */
  YYSYMBOL_INVDFT = 161,                   /* INVDFT  */
  YYSYMBOL_INVFFT = 162,                   /* INVFFT  */
  YYSYMBOL_ISOLINE = 163,                  /* ISOLINE  */
  YYSYMBOL_ISOLINES = 164,                 /* ISOLINES  */
  YYSYMBOL_JUST = 165,                     /* JUST  */
  YYSYMBOL_KILL = 166,                     /* KILL  */
  YYSYMBOL_LABEL = 167,                    /* LABEL  */
  YYSYMBOL_LAYOUT = 168,                   /* LAYOUT  */
  YYSYMBOL_LEAVE = 169,                    /* LEAVE  */
  YYSYMBOL_LEAVEGRAPHICS = 170,            /* LEAVEGRAPHICS  */
  YYSYMBOL_LEFT = 171,                     /* LEFT  */
  YYSYMBOL_LEGEND = 172,                   /* LEGEND  */
  YYSYMBOL_LENGTH = 173,                   /* LENGTH  */
  YYSYMBOL_LEVEL = 174,                    /* LEVEL  */
  YYSYMBOL_LEVELS = 175,                   /* LEVELS  */
  YYSYMBOL_LINE = 176,                     /* LINE  */
  YYSYMBOL_LINESTYLE = 177,                /* LINESTYLE  */
  YYSYMBOL_LINETO = 178,                   /* LINETO  */
  YYSYMBOL_LINEWIDTH = 179,                /* LINEWIDTH  */
  YYSYMBOL_LINK = 180,                     /* LINK  */
  YYSYMBOL_LOAD = 181,                     /* LOAD  */
  YYSYMBOL_LOCATOR = 182,                  /* LOCATOR  */
  YYSYMBOL_LOCTYPE = 183,                  /* LOCTYPE  */
  YYSYMBOL_LOGX = 184,                     /* LOGX  */
  YYSYMBOL_LOGY = 185,                     /* LOGY  */
  YYSYMBOL_LOGXY = 186,                    /* LOGXY  */
  YYSYMBOL_MAJOR = 187,                    /* MAJOR  */
  YYSYMBOL_MIFL = 188,                     /* MIFL  */
  YYSYMBOL_MIFP = 189,                     /* MIFP  */
  YYSYMBOL_MINOR = 190,                    /* MINOR  */
  YYSYMBOL_MISSINGP = 191,                 /* MISSINGP  */
  YYSYMBOL_MONITOR = 192,                  /* MONITOR  */
  YYSYMBOL_MOVE = 193,                     /* MOVE  */
  YYSYMBOL_MOVE2 = 194,                    /* MOVE2  */
  YYSYMBOL_MOVETO = 195,                   /* MOVETO  */
  YYSYMBOL_NEGATE = 196,                   /* NEGATE  */
  YYSYMBOL_NO = 197,                       /* NO  */
  YYSYMBOL_NONE = 198,                     /* NONE  */
  YYSYMBOL_NORMAL = 199,                   /* NORMAL  */
  YYSYMBOL_NXY = 200,                      /* NXY  */
  YYSYMBOL_OFF = 201,                      /* OFF  */
  YYSYMBOL_OFFSETX = 202,                  /* OFFSETX  */
  YYSYMBOL_OFFSETY = 203,                  /* OFFSETY  */
  YYSYMBOL_ON = 204,                       /* ON  */
  YYSYMBOL_OP = 205,                       /* OP  */
  YYSYMBOL_ORIENT = 206,                   /* ORIENT  */
  YYSYMBOL_OUT = 207,                      /* OUT  */
  YYSYMBOL_PAGE = 208,                     /* PAGE  */
  YYSYMBOL_PARA = 209,                     /* PARA  */
  YYSYMBOL_PARALLEL = 210,                 /* PARALLEL  */
  YYSYMBOL_PARAMETERS = 211,               /* PARAMETERS  */
  YYSYMBOL_PARAMS = 212,                   /* PARAMS  */
  YYSYMBOL_PATTERN = 213,                  /* PATTERN  */
  YYSYMBOL_PERIMETER = 214,                /* PERIMETER  */
  YYSYMBOL_PERP = 215,                     /* PERP  */
  YYSYMBOL_PERPENDICULAR = 216,            /* PERPENDICULAR  */
  YYSYMBOL_PIE = 217,                      /* PIE  */
  YYSYMBOL_PIPE = 218,                     /* PIPE  */
  YYSYMBOL_PLACE = 219,                    /* PLACE  */
  YYSYMBOL_POINT = 220,                    /* POINT  */
  YYSYMBOL_POLAR = 221,                    /* POLAR  */
  YYSYMBOL_POWER = 222,                    /* POWER  */
  YYSYMBOL_PREC = 223,                     /* PREC  */
  YYSYMBOL_PREPEND = 224,                  /* PREPEND  */
  YYSYMBOL_PRINT = 225,                    /* PRINT  */
  YYSYMBOL_PS = 226,                       /* PS  */
  YYSYMBOL_PSCOLORP = 227,                 /* PSCOLORP  */
  YYSYMBOL_PSMONOP = 228,                  /* PSMONOP  */
  YYSYMBOL_PSCOLORL = 229,                 /* PSCOLORL  */
  YYSYMBOL_PSMONOL = 230,                  /* PSMONOL  */
  YYSYMBOL_PUSH = 231,                     /* PUSH  */
  YYSYMBOL_POP = 232,                      /* POP  */
  YYSYMBOL_PUTP = 233,                     /* PUTP  */
  YYSYMBOL_READ = 234,                     /* READ  */
  YYSYMBOL_REDRAW = 235,                   /* REDRAW  */
  YYSYMBOL_REGRESS = 236,                  /* REGRESS  */
  YYSYMBOL_REGNUM = 237,                   /* REGNUM  */
  YYSYMBOL_REGIONS = 238,                  /* REGIONS  */
  YYSYMBOL_RENDER = 239,                   /* RENDER  */
  YYSYMBOL_REVERSE = 240,                  /* REVERSE  */
  YYSYMBOL_RIGHT = 241,                    /* RIGHT  */
  YYSYMBOL_RISER = 242,                    /* RISER  */
  YYSYMBOL_ROT = 243,                      /* ROT  */
  YYSYMBOL_RUNAVG = 244,                   /* RUNAVG  */
  YYSYMBOL_RUNMED = 245,                   /* RUNMED  */
  YYSYMBOL_RUNSTD = 246,                   /* RUNSTD  */
  YYSYMBOL_RUNMIN = 247,                   /* RUNMIN  */
  YYSYMBOL_RUNMAX = 248,                   /* RUNMAX  */
  YYSYMBOL_SAMPLE = 249,                   /* SAMPLE  */
  YYSYMBOL_SAVEALL = 250,                  /* SAVEALL  */
  YYSYMBOL_SCALE = 251,                    /* SCALE  */
  YYSYMBOL_SCIENTIFIC = 252,               /* SCIENTIFIC  */
  YYSYMBOL_SET = 253,                      /* SET  */
  YYSYMBOL_SETNUM = 254,                   /* SETNUM  */
  YYSYMBOL_SETS = 255,                     /* SETS  */
  YYSYMBOL_SIGN = 256,                     /* SIGN  */
  YYSYMBOL_SIZE = 257,                     /* SIZE  */
  YYSYMBOL_SKIP = 258,                     /* SKIP  */
  YYSYMBOL_SLEEP = 259,                    /* SLEEP  */
  YYSYMBOL_SLICE = 260,                    /* SLICE  */
  YYSYMBOL_SOURCE = 261,                   /* SOURCE  */
  YYSYMBOL_SPEC = 262,                     /* SPEC  */
  YYSYMBOL_SPECIFIED = 263,                /* SPECIFIED  */
  YYSYMBOL_SPECTRUM = 264,                 /* SPECTRUM  */
  YYSYMBOL_STACK = 265,                    /* STACK  */
  YYSYMBOL_STACKEDBAR = 266,               /* STACKEDBAR  */
  YYSYMBOL_STACKEDHBAR = 267,              /* STACKEDHBAR  */
  YYSYMBOL_STACKEDLINE = 268,              /* STACKEDLINE  */
  YYSYMBOL_STAGGER = 269,                  /* STAGGER  */
  YYSYMBOL_START = 270,                    /* START  */
  YYSYMBOL_STARTTYPE = 271,                /* STARTTYPE  */
  YYSYMBOL_STATUS = 272,                   /* STATUS  */
  YYSYMBOL_STEP = 273,                     /* STEP  */
  YYSYMBOL_STOP = 274,                     /* STOP  */
  YYSYMBOL_STRING = 275,                   /* STRING  */
  YYSYMBOL_SUBTITLE = 276,                 /* SUBTITLE  */
  YYSYMBOL_SWAPBUFFER = 277,               /* SWAPBUFFER  */
  YYSYMBOL_SYMBOL = 278,                   /* SYMBOL  */
  YYSYMBOL_TICKP = 279,                    /* TICKP  */
  YYSYMBOL_TICKLABEL = 280,                /* TICKLABEL  */
  YYSYMBOL_TICKMARKS = 281,                /* TICKMARKS  */
  YYSYMBOL_TITLE = 282,                    /* TITLE  */
  YYSYMBOL_TO = 283,                       /* TO  */
  YYSYMBOL_TOP = 284,                      /* TOP  */
  YYSYMBOL_TRUEP = 285,                    /* TRUEP  */
  YYSYMBOL_TYPE = 286,                     /* TYPE  */
  YYSYMBOL_UP = 287,                       /* UP  */
  YYSYMBOL_VELOCITY = 288,                 /* VELOCITY  */
  YYSYMBOL_VERTICAL = 289,                 /* VERTICAL  */
  YYSYMBOL_VGAP = 290,                     /* VGAP  */
  YYSYMBOL_VIEW = 291,                     /* VIEW  */
  YYSYMBOL_WITH = 292,                     /* WITH  */
  YYSYMBOL_WORLD = 293,                    /* WORLD  */
  YYSYMBOL_WRITE = 294,                    /* WRITE  */
  YYSYMBOL_X = 295,                        /* X  */
  YYSYMBOL_X0 = 296,                       /* X0  */
  YYSYMBOL_X1 = 297,                       /* X1  */
  YYSYMBOL_XAXES = 298,                    /* XAXES  */
  YYSYMBOL_XAXIS = 299,                    /* XAXIS  */
  YYSYMBOL_XCOR = 300,                     /* XCOR  */
  YYSYMBOL_XMAX = 301,                     /* XMAX  */
  YYSYMBOL_XMIN = 302,                     /* XMIN  */
  YYSYMBOL_FEGRID = 303,                   /* FEGRID  */
  YYSYMBOL_RECTGRID = 304,                 /* RECTGRID  */
  YYSYMBOL_XY = 305,                       /* XY  */
  YYSYMBOL_XYARC = 306,                    /* XYARC  */
  YYSYMBOL_XYBOX = 307,                    /* XYBOX  */
  YYSYMBOL_XYBOXPLOT = 308,                /* XYBOXPLOT  */
  YYSYMBOL_XYFIXED = 309,                  /* XYFIXED  */
  YYSYMBOL_XYHILO = 310,                   /* XYHILO  */
  YYSYMBOL_XYRT = 311,                     /* XYRT  */
  YYSYMBOL_XYSEG = 312,                    /* XYSEG  */
  YYSYMBOL_XYSTRING = 313,                 /* XYSTRING  */
  YYSYMBOL_XYDX = 314,                     /* XYDX  */
  YYSYMBOL_XYDY = 315,                     /* XYDY  */
  YYSYMBOL_XYDXDX = 316,                   /* XYDXDX  */
  YYSYMBOL_XYDYDY = 317,                   /* XYDYDY  */
  YYSYMBOL_XYDXDY = 318,                   /* XYDXDY  */
  YYSYMBOL_XYX2Y2 = 319,                   /* XYX2Y2  */
  YYSYMBOL_XYXX = 320,                     /* XYXX  */
  YYSYMBOL_XYYY = 321,                     /* XYYY  */
  YYSYMBOL_XYZ = 322,                      /* XYZ  */
  YYSYMBOL_XYZW = 323,                     /* XYZW  */
  YYSYMBOL_XYUV = 324,                     /* XYUV  */
  YYSYMBOL_Y = 325,                        /* Y  */
  YYSYMBOL_Y0 = 326,                       /* Y0  */
  YYSYMBOL_Y1 = 327,                       /* Y1  */
  YYSYMBOL_Y2 = 328,                       /* Y2  */
  YYSYMBOL_Y3 = 329,                       /* Y3  */
  YYSYMBOL_Y4 = 330,                       /* Y4  */
  YYSYMBOL_Y5 = 331,                       /* Y5  */
  YYSYMBOL_YAXES = 332,                    /* YAXES  */
  YYSYMBOL_YAXIS = 333,                    /* YAXIS  */
  YYSYMBOL_YES = 334,                      /* YES  */
  YYSYMBOL_YMAX = 335,                     /* YMAX  */
  YYSYMBOL_YMIN = 336,                     /* YMIN  */
  YYSYMBOL_ZEROXAXIS = 337,                /* ZEROXAXIS  */
  YYSYMBOL_ZEROYAXIS = 338,                /* ZEROYAXIS  */
  YYSYMBOL_ABOVE = 339,                    /* ABOVE  */
  YYSYMBOL_BELOW = 340,                    /* BELOW  */
  YYSYMBOL_POLYI = 341,                    /* POLYI  */
  YYSYMBOL_POLYO = 342,                    /* POLYO  */
  YYSYMBOL_GENERAL = 343,                  /* GENERAL  */
  YYSYMBOL_DDMMYY = 344,                   /* DDMMYY  */
  YYSYMBOL_MMDDYY = 345,                   /* MMDDYY  */
  YYSYMBOL_MMYY = 346,                     /* MMYY  */
  YYSYMBOL_MMDD = 347,                     /* MMDD  */
  YYSYMBOL_MONTHDAY = 348,                 /* MONTHDAY  */
  YYSYMBOL_DAYMONTH = 349,                 /* DAYMONTH  */
  YYSYMBOL_MONTHS = 350,                   /* MONTHS  */
  YYSYMBOL_MONTHL = 351,                   /* MONTHL  */
  YYSYMBOL_DDMONTHSYYHHMMSS = 352,         /* DDMONTHSYYHHMMSS  */
  YYSYMBOL_DDMONTHSYY = 353,               /* DDMONTHSYY  */
  YYSYMBOL_DAYOFWEEKS = 354,               /* DAYOFWEEKS  */
  YYSYMBOL_DAYOFWEEKL = 355,               /* DAYOFWEEKL  */
  YYSYMBOL_DAYOFYEAR = 356,                /* DAYOFYEAR  */
  YYSYMBOL_HMS = 357,                      /* HMS  */
  YYSYMBOL_HH = 358,                       /* HH  */
  YYSYMBOL_MMDDHMS = 359,                  /* MMDDHMS  */
  YYSYMBOL_MMDDYYHMS = 360,                /* MMDDYYHMS  */
  YYSYMBOL_DEGREESLON = 361,               /* DEGREESLON  */
  YYSYMBOL_DEGREESMMLON = 362,             /* DEGREESMMLON  */
  YYSYMBOL_DEGREESMMSSLON = 363,           /* DEGREESMMSSLON  */
  YYSYMBOL_MMSSLON = 364,                  /* MMSSLON  */
  YYSYMBOL_DEGREESLAT = 365,               /* DEGREESLAT  */
  YYSYMBOL_DEGREESMMLAT = 366,             /* DEGREESMMLAT  */
  YYSYMBOL_DEGREESMMSSLAT = 367,           /* DEGREESMMSSLAT  */
  YYSYMBOL_MMSSLAT = 368,                  /* MMSSLAT  */
  YYSYMBOL_DOT = 369,                      /* DOT  */
  YYSYMBOL_STAR = 370,                     /* STAR  */
  YYSYMBOL_PLUS = 371,                     /* PLUS  */
  YYSYMBOL_CROSS = 372,                    /* CROSS  */
  YYSYMBOL_CIRCLE = 373,                   /* CIRCLE  */
  YYSYMBOL_SQUARE = 374,                   /* SQUARE  */
  YYSYMBOL_DIAMOND = 375,                  /* DIAMOND  */
  YYSYMBOL_TRIANGLE1 = 376,                /* TRIANGLE1  */
  YYSYMBOL_TRIANGLE2 = 377,                /* TRIANGLE2  */
  YYSYMBOL_TRIANGLE3 = 378,                /* TRIANGLE3  */
  YYSYMBOL_TRIANGLE4 = 379,                /* TRIANGLE4  */
  YYSYMBOL_SPLINE = 380,                   /* SPLINE  */
  YYSYMBOL_LANDSCAPE = 381,                /* LANDSCAPE  */
  YYSYMBOL_PORTRAIT = 382,                 /* PORTRAIT  */
  YYSYMBOL_FREE = 383,                     /* FREE  */
  YYSYMBOL_FIXED = 384,                    /* FIXED  */
  YYSYMBOL_STATUSBAR = 385,                /* STATUSBAR  */
  YYSYMBOL_LOCATORBAR = 386,               /* LOCATORBAR  */
  YYSYMBOL_TOOLBAR = 387,                  /* TOOLBAR  */
  YYSYMBOL_ELCIRC = 388,                   /* ELCIRC  */
  YYSYMBOL_SCALAR = 389,                   /* SCALAR  */
  YYSYMBOL_VECTOR = 390,                   /* VECTOR  */
  YYSYMBOL_HEAT = 391,                     /* HEAT  */
  YYSYMBOL_HISTORY = 392,                  /* HISTORY  */
  YYSYMBOL_PROFILE = 393,                  /* PROFILE  */
  YYSYMBOL_NODE = 394,                     /* NODE  */
  YYSYMBOL_VAR = 395,                      /* VAR  */
  YYSYMBOL_NUMBER = 396,                   /* NUMBER  */
  YYSYMBOL_397_ = 397,                     /* '='  */
  YYSYMBOL_OR = 398,                       /* OR  */
  YYSYMBOL_AND = 399,                      /* AND  */
  YYSYMBOL_GT = 400,                       /* GT  */
  YYSYMBOL_LT = 401,                       /* LT  */
  YYSYMBOL_LE = 402,                       /* LE  */
  YYSYMBOL_GE = 403,                       /* GE  */
  YYSYMBOL_EQ = 404,                       /* EQ  */
  YYSYMBOL_NE = 405,                       /* NE  */
  YYSYMBOL_406_ = 406,                     /* '+'  */
  YYSYMBOL_407_ = 407,                     /* '-'  */
  YYSYMBOL_408_ = 408,                     /* '*'  */
  YYSYMBOL_409_ = 409,                     /* '/'  */
  YYSYMBOL_410_ = 410,                     /* '%'  */
  YYSYMBOL_411_ = 411,                     /* '^'  */
  YYSYMBOL_UMINUS = 412,                   /* UMINUS  */
  YYSYMBOL_NOT = 413,                      /* NOT  */
  YYSYMBOL_414_n_ = 414,                   /* '\n'  */
  YYSYMBOL_415_ = 415,                     /* ','  */
  YYSYMBOL_416_ = 416,                     /* '.'  */
  YYSYMBOL_417_ = 417,                     /* '('  */
  YYSYMBOL_418_ = 418,                     /* ')'  */
  YYSYMBOL_419_ = 419,                     /* '['  */
  YYSYMBOL_420_ = 420,                     /* ']'  */
  YYSYMBOL_421_ = 421,                     /* '?'  */
  YYSYMBOL_422_ = 422,                     /* ':'  */
  YYSYMBOL_YYACCEPT = 423,                 /* $accept  */
  YYSYMBOL_list = 424,                     /* list  */
  YYSYMBOL_setprint = 425,                 /* setprint  */
  YYSYMBOL_printer = 426,                  /* printer  */
  YYSYMBOL_regionset = 427,                /* regionset  */
  YYSYMBOL_parmset = 428,                  /* parmset  */
  YYSYMBOL_db = 429,                       /* db  */
  YYSYMBOL_setvelocity = 430,              /* setvelocity  */
  YYSYMBOL_xytype = 431,                   /* xytype  */
  YYSYMBOL_graphtype = 432,                /* graphtype  */
  YYSYMBOL_pagelayout = 433,               /* pagelayout  */
  YYSYMBOL_regiontype = 434,               /* regiontype  */
  YYSYMBOL_elcirctype = 435,               /* elcirctype  */
  YYSYMBOL_set_setprop = 436,              /* set_setprop  */
  YYSYMBOL_setprop = 437,                  /* setprop  */
  YYSYMBOL_setaxis = 438,                  /* setaxis  */
  YYSYMBOL_axis = 439,                     /* axis  */
  YYSYMBOL_allaxes = 440,                  /* allaxes  */
  YYSYMBOL_axesprops = 441,                /* axesprops  */
  YYSYMBOL_axisfeature = 442,              /* axisfeature  */
  YYSYMBOL_tickdesc = 443,                 /* tickdesc  */
  YYSYMBOL_tickattr = 444,                 /* tickattr  */
  YYSYMBOL_ticklabeldesc = 445,            /* ticklabeldesc  */
  YYSYMBOL_ticklabelattr = 446,            /* ticklabelattr  */
  YYSYMBOL_axislabeldesc = 447,            /* axislabeldesc  */
  YYSYMBOL_axisbardesc = 448,              /* axisbardesc  */
  YYSYMBOL_selectsets = 449,               /* selectsets  */
  YYSYMBOL_prop = 450,                     /* prop  */
  YYSYMBOL_onoff = 451,                    /* onoff  */
  YYSYMBOL_colpat = 452,                   /* colpat  */
  YYSYMBOL_runtype = 453,                  /* runtype  */
  YYSYMBOL_ffttype = 454,                  /* ffttype  */
  YYSYMBOL_sourcetype = 455,               /* sourcetype  */
  YYSYMBOL_filltype = 456,                 /* filltype  */
  YYSYMBOL_opchoice = 457,                 /* opchoice  */
  YYSYMBOL_justchoice = 458,               /* justchoice  */
  YYSYMBOL_extremetype = 459,              /* extremetype  */
  YYSYMBOL_torf = 460,                     /* torf  */
  YYSYMBOL_inoutchoice = 461,              /* inoutchoice  */
  YYSYMBOL_formatchoice = 462,             /* formatchoice  */
  YYSYMBOL_signchoice = 463,               /* signchoice  */
  YYSYMBOL_direction = 464,                /* direction  */
  YYSYMBOL_worldview = 465,                /* worldview  */
  YYSYMBOL_vector = 466,                   /* vector  */
  YYSYMBOL_asgn = 467,                     /* asgn  */
  YYSYMBOL_rasgn = 468,                    /* rasgn  */
  YYSYMBOL_vasgn = 469,                    /* vasgn  */
  YYSYMBOL_vexpr = 470,                    /* vexpr  */
  YYSYMBOL_expr = 471                      /* expr  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  513
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  423
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  733
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1647

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   661


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     414,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   410,     2,     2,
     417,   418,   408,   406,   415,   407,   416,   409,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   422,     2,
       2,   397,     2,   421,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   419,     2,   420,   411,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   398,   399,   400,   401,   402,   403,   404,   405,
     412,   413
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   531,   531,   532,   533,   534,   535,   538,   541,   542,
     543,   544,   545,   546,   547,   548,   554,   563,   572,   580,
     583,   586,   589,   597,   598,   599,   600,   601,   602,   603,
     604,   608,   611,   614,   617,   620,   623,   630,   644,   650,
     653,   656,   668,   677,   680,   683,   686,   689,   693,   697,
     701,   706,   712,   717,   725,   730,   735,   740,   743,   766,
     769,   772,   775,   778,   781,   784,   787,   790,   792,   794,
     800,   813,   818,   823,   827,   831,   834,   838,   841,   848,
     855,   858,   862,   870,   878,   881,   884,   887,   890,   894,
     901,   905,   909,   913,   920,   925,   929,   933,   937,   941,
     945,   949,   963,   975,   987,  1001,  1006,  1016,  1019,  1022,
    1025,  1028,  1031,  1035,  1043,  1049,  1054,  1059,  1064,  1072,
    1080,  1085,  1089,  1092,  1095,  1098,  1101,  1106,  1111,  1115,
    1120,  1125,  1131,  1137,  1140,  1143,  1146,  1150,  1154,  1157,
    1160,  1163,  1166,  1169,  1172,  1181,  1184,  1187,  1190,  1193,
    1196,  1199,  1202,  1214,  1217,  1220,  1223,  1226,  1229,  1236,
    1239,  1242,  1245,  1248,  1251,  1254,  1257,  1269,  1272,  1275,
    1278,  1281,  1284,  1289,  1292,  1295,  1298,  1301,  1304,  1307,
    1310,  1322,  1325,  1328,  1331,  1334,  1337,  1340,  1343,  1350,
    1353,  1356,  1359,  1362,  1369,  1372,  1375,  1378,  1381,  1385,
    1388,  1391,  1394,  1398,  1402,  1406,  1409,  1413,  1417,  1420,
    1423,  1426,  1429,  1432,  1435,  1438,  1441,  1444,  1447,  1455,
    1458,  1461,  1464,  1468,  1471,  1474,  1477,  1480,  1483,  1486,
    1489,  1493,  1496,  1499,  1502,  1504,  1506,  1508,  1512,  1515,
    1518,  1522,  1525,  1528,  1531,  1534,  1537,  1541,  1545,  1548,
    1551,  1554,  1557,  1560,  1563,  1566,  1569,  1572,  1575,  1578,
    1581,  1584,  1587,  1590,  1593,  1596,  1601,  1606,  1611,  1614,
    1621,  1626,  1633,  1640,  1647,  1654,  1663,  1664,  1665,  1669,
    1670,  1671,  1672,  1673,  1674,  1675,  1679,  1682,  1685,  1688,
    1691,  1694,  1697,  1700,  1703,  1706,  1709,  1712,  1715,  1718,
    1721,  1724,  1727,  1730,  1733,  1736,  1739,  1742,  1745,  1751,
    1754,  1757,  1760,  1763,  1766,  1769,  1772,  1775,  1778,  1781,
    1784,  1790,  1793,  1796,  1799,  1805,  1806,  1807,  1808,  1809,
    1810,  1814,  1815,  1816,  1820,  1835,  1838,  1841,  1844,  1847,
    1850,  1853,  1856,  1859,  1862,  1865,  1868,  1871,  1874,  1877,
    1880,  1883,  1886,  1889,  1892,  1895,  1898,  1901,  1904,  1907,
    1910,  1913,  1916,  1919,  1926,  1927,  1928,  1929,  1930,  1931,
    1935,  1936,  1937,  1938,  1939,  1940,  1944,  1945,  1946,  1950,
    1953,  1956,  1959,  1962,  1965,  1968,  1974,  1975,  1976,  1977,
    1978,  1984,  1985,  1989,  1994,  1997,  2000,  2003,  2006,  2009,
    2012,  2015,  2018,  2021,  2024,  2027,  2030,  2033,  2036,  2039,
    2042,  2045,  2048,  2051,  2054,  2057,  2060,  2063,  2066,  2069,
    2072,  2075,  2078,  2081,  2087,  2088,  2092,  2095,  2098,  2101,
    2104,  2107,  2110,  2114,  2118,  2121,  2124,  2127,  2130,  2133,
    2136,  2139,  2142,  2145,  2148,  2151,  2154,  2157,  2160,  2163,
    2166,  2169,  2172,  2175,  2178,  2181,  2188,  2192,  2195,  2198,
    2201,  2204,  2208,  2211,  2214,  2217,  2220,  2226,  2229,  2232,
    2235,  2241,  2246,  2251,  2256,  2261,  2266,  2274,  2277,  2280,
    2283,  2286,  2292,  2295,  2301,  2304,  2310,  2313,  2316,  2319,
    2322,  2328,  2331,  2334,  2337,  2343,  2346,  2352,  2355,  2358,
    2364,  2367,  2370,  2373,  2376,  2382,  2385,  2388,  2394,  2397,
    2403,  2406,  2412,  2415,  2418,  2424,  2427,  2430,  2433,  2436,
    2439,  2442,  2445,  2448,  2451,  2454,  2457,  2460,  2463,  2466,
    2469,  2472,  2475,  2478,  2481,  2484,  2487,  2490,  2493,  2496,
    2499,  2502,  2505,  2508,  2514,  2517,  2520,  2526,  2529,  2532,
    2535,  2538,  2541,  2547,  2550,  2556,  2557,  2558,  2559,  2560,
    2561,  2562,  2563,  2564,  2568,  2579,  2594,  2609,  2621,  2639,
    2650,  2658,  2681,  2703,  2726,  2734,  2757,  2780,  2806,  2815,
    2829,  2843,  2857,  2866,  2875,  2884,  2893,  2902,  2911,  2920,
    2929,  2938,  2947,  2956,  2965,  2974,  2987,  3002,  3017,  3030,
    3039,  3048,  3057,  3066,  3075,  3084,  3093,  3102,  3111,  3120,
    3129,  3138,  3147,  3156,  3165,  3174,  3183,  3192,  3201,  3210,
    3219,  3228,  3237,  3246,  3255,  3264,  3273,  3282,  3291,  3300,
    3309,  3318,  3327,  3336,  3345,  3354,  3363,  3372,  3381,  3390,
    3399,  3408,  3417,  3426,  3438,  3447,  3456,  3465,  3474,  3483,
    3492,  3501,  3510,  3519,  3528,  3538,  3539,  3542,  3545,  3555,
    3565,  3575,  3590,  3605,  3608,  3621,  3624,  3627,  3630,  3639,
    3642,  3645,  3648,  3651,  3654,  3657,  3660,  3663,  3666,  3669,
    3672,  3675,  3678,  3681,  3684,  3687,  3690,  3693,  3696,  3699,
    3702,  3705,  3708,  3711,  3714,  3717,  3720,  3723,  3726,  3729,
    3732,  3735,  3738,  3741,  3744,  3747,  3750,  3753,  3756,  3759,
    3763,  3766,  3769,  3772,  3775,  3778,  3781,  3784,  3787,  3790,
    3793,  3796,  3799,  3806,  3809,  3812,  3815,  3818,  3821,  3824,
    3827,  3830,  3833,  3836
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
  "\"end of file\"", "error", "\"invalid token\"", "ABS", "ACOS", "ALL",
  "ASIN", "ATAN", "ATAN2", "CEIL", "COS", "DEG", "DX", "DY", "ERF", "ERFC",
  "EXP", "FLOOR", "HYPOT", "INDEX", "INT", "INVN", "INVT", "IRAND",
  "LGAMMA", "LN", "LOG", "LOGISTIC", "MAXP", "MINP", "MOD", "NORM",
  "NORMP", "PI", "RAD", "RAND", "RNORM", "SETNO", "SIN", "SQR", "SQRT",
  "TAN", "INUM", "CTD", "ADP", "TPC", "VX1", "VX2", "VY1", "VY2", "WX1",
  "WX2", "WY1", "WY2", "DELAYP", "DOUBLEBUFFER", "DOWN", "ABSOLUTE",
  "ABORT", "ACTIVATE", "ACTIVE", "ALT", "ALTERNATE", "ALTXAXIS",
  "ALTYAXIS", "ANGLE", "ANNOTATE", "APPEND", "AREA", "ARROW", "AUTO",
  "AUTOSCALE", "AUTOTICKS", "AVG", "AXIS", "AXES", "BACKBUFFER",
  "BACKGROUND", "BAR", "BATCH", "BLOCK", "BIN", "BOTH", "BOTTOM", "BOX",
  "BOXPLOT", "BP", "CD", "CELLS", "CENTER", "CHAR", "CHRSTR", "CLEAR",
  "CLICK", "CMAP", "COLOR", "COMMENT", "COPY", "CORIE", "CYCLE", "DB",
  "DECIMAL", "DEF", "DEFAULT", "DELETE", "DEVICE", "DFT", "DIFFERENCE",
  "DISK", "DRAW2", "DROP", "DXDX", "DXP", "DYDY", "DYP", "ECHO", "EDIT",
  "ELSE", "END", "ERRORBAR", "EXIT", "EXPONENTIAL", "FALSEP", "FFT",
  "FILEP", "FILL", "FIND", "FIXEDPOINT", "FLUSH", "FOCUS", "FOLLOWS",
  "FONTP", "FOREGROUND", "FORMAT", "FRONTBUFFER", "FRAMEP", "GETP", "GIFL",
  "GIFP", "GRAPH", "GRAPHNO", "GRAPHS", "GRAPHTYPE", "GRID", "HARDCOPY",
  "HBAR", "HBOXPLOT", "HGAP", "HIDDEN", "HORIZONTAL", "HISTO", "IF",
  "IGNORE", "IHL", "IMAGE", "IN", "INIT", "INITGRAPHICS", "INOUT",
  "INTEGRATE", "INTERP", "INVDFT", "INVFFT", "ISOLINE", "ISOLINES", "JUST",
  "KILL", "LABEL", "LAYOUT", "LEAVE", "LEAVEGRAPHICS", "LEFT", "LEGEND",
  "LENGTH", "LEVEL", "LEVELS", "LINE", "LINESTYLE", "LINETO", "LINEWIDTH",
  "LINK", "LOAD", "LOCATOR", "LOCTYPE", "LOGX", "LOGY", "LOGXY", "MAJOR",
  "MIFL", "MIFP", "MINOR", "MISSINGP", "MONITOR", "MOVE", "MOVE2",
  "MOVETO", "NEGATE", "NO", "NONE", "NORMAL", "NXY", "OFF", "OFFSETX",
  "OFFSETY", "ON", "OP", "ORIENT", "OUT", "PAGE", "PARA", "PARALLEL",
  "PARAMETERS", "PARAMS", "PATTERN", "PERIMETER", "PERP", "PERPENDICULAR",
  "PIE", "PIPE", "PLACE", "POINT", "POLAR", "POWER", "PREC", "PREPEND",
  "PRINT", "PS", "PSCOLORP", "PSMONOP", "PSCOLORL", "PSMONOL", "PUSH",
  "POP", "PUTP", "READ", "REDRAW", "REGRESS", "REGNUM", "REGIONS",
  "RENDER", "REVERSE", "RIGHT", "RISER", "ROT", "RUNAVG", "RUNMED",
  "RUNSTD", "RUNMIN", "RUNMAX", "SAMPLE", "SAVEALL", "SCALE", "SCIENTIFIC",
  "SET", "SETNUM", "SETS", "SIGN", "SIZE", "SKIP", "SLEEP", "SLICE",
  "SOURCE", "SPEC", "SPECIFIED", "SPECTRUM", "STACK", "STACKEDBAR",
  "STACKEDHBAR", "STACKEDLINE", "STAGGER", "START", "STARTTYPE", "STATUS",
  "STEP", "STOP", "STRING", "SUBTITLE", "SWAPBUFFER", "SYMBOL", "TICKP",
  "TICKLABEL", "TICKMARKS", "TITLE", "TO", "TOP", "TRUEP", "TYPE", "UP",
  "VELOCITY", "VERTICAL", "VGAP", "VIEW", "WITH", "WORLD", "WRITE", "X",
  "X0", "X1", "XAXES", "XAXIS", "XCOR", "XMAX", "XMIN", "FEGRID",
  "RECTGRID", "XY", "XYARC", "XYBOX", "XYBOXPLOT", "XYFIXED", "XYHILO",
  "XYRT", "XYSEG", "XYSTRING", "XYDX", "XYDY", "XYDXDX", "XYDYDY",
  "XYDXDY", "XYX2Y2", "XYXX", "XYYY", "XYZ", "XYZW", "XYUV", "Y", "Y0",
  "Y1", "Y2", "Y3", "Y4", "Y5", "YAXES", "YAXIS", "YES", "YMAX", "YMIN",
  "ZEROXAXIS", "ZEROYAXIS", "ABOVE", "BELOW", "POLYI", "POLYO", "GENERAL",
  "DDMMYY", "MMDDYY", "MMYY", "MMDD", "MONTHDAY", "DAYMONTH", "MONTHS",
  "MONTHL", "DDMONTHSYYHHMMSS", "DDMONTHSYY", "DAYOFWEEKS", "DAYOFWEEKL",
  "DAYOFYEAR", "HMS", "HH", "MMDDHMS", "MMDDYYHMS", "DEGREESLON",
  "DEGREESMMLON", "DEGREESMMSSLON", "MMSSLON", "DEGREESLAT",
  "DEGREESMMLAT", "DEGREESMMSSLAT", "MMSSLAT", "DOT", "STAR", "PLUS",
  "CROSS", "CIRCLE", "SQUARE", "DIAMOND", "TRIANGLE1", "TRIANGLE2",
  "TRIANGLE3", "TRIANGLE4", "SPLINE", "LANDSCAPE", "PORTRAIT", "FREE",
  "FIXED", "STATUSBAR", "LOCATORBAR", "TOOLBAR", "ELCIRC", "SCALAR",
  "VECTOR", "HEAT", "HISTORY", "PROFILE", "NODE", "VAR", "NUMBER", "'='",
  "OR", "AND", "GT", "LT", "LE", "GE", "EQ", "NE", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'^'", "UMINUS", "NOT", "'\\n'", "','", "'.'", "'('",
  "')'", "'['", "']'", "'?'", "':'", "$accept", "list", "setprint",
  "printer", "regionset", "parmset", "db", "setvelocity", "xytype",
  "graphtype", "pagelayout", "regiontype", "elcirctype", "set_setprop",
  "setprop", "setaxis", "axis", "allaxes", "axesprops", "axisfeature",
  "tickdesc", "tickattr", "ticklabeldesc", "ticklabelattr",
  "axislabeldesc", "axisbardesc", "selectsets", "prop", "onoff", "colpat",
  "runtype", "ffttype", "sourcetype", "filltype", "opchoice", "justchoice",
  "extremetype", "torf", "inoutchoice", "formatchoice", "signchoice",
  "direction", "worldview", "vector", "asgn", "rasgn", "vasgn", "vexpr",
  "expr", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,    61,   652,   653,
     654,   655,   656,   657,   658,   659,    43,    45,    42,    47,
      37,    94,   660,   661,    10,    44,    46,    40,    41,    91,
      93,    63,    58
};
#endif

#define YYPACT_NINF (-882)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-734)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1635,  -363,  -275,  -271,  -267,  -152,  -136,  -107,   -76,   -28,
    -882,  -882,   -64,   -46,    -2,    25,    28,     3,    34,    41,
      47,    49,    65,    67,    75,    78,    80,    89,    61,   102,
     104,    92,   116,   117,   120,   121,   122,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,   115,   -78,   -78,  -106,  -882,
    -882,   293,  -192,   503,   -78,   446,   682,  1014,   455,    32,
     151,   157,   -90,   -78,  -882,   -45,   181,   160,  -882,   133,
    4148,   467,  -882,  -882,  -882,   502,   -78,   304,   468,    20,
       5,   461,   150,   282,  -882,  -882,   -85,  -143,   186,  2047,
    2628,   205,   206,  -150,   194,   -92,   -29,  4148,   111,   366,
     425,  -882,  -882,   527,   658,  -882,   203,   144,  -882,  -882,
    -882,  -882,  -882,   531,   -99,  -882,   227,   154,  -239,  2376,
     237,  -882,  4148,   239,   682,   271,  3484,   193,  3638,   171,
    -882,  -882,   503,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,   503,  -882,  -882,  -882,   208,   -92,   -92,   -92,  -331,
    -882,  4302,  4302,  4302,   635,   224,   225,   226,   229,   230,
     231,   233,    94,  -882,  1629,   246,   262,  -295,   234,   269,
     270,  1197,  1048,  -882,  4302,  4302,  4302,  4302,  4302,  4302,
    4302,  4302,  4302,  4302,  4302,  4302,  4400,   245,  4302,  4302,
    4302,  4302,  4302,  4302,  4302,  4302,  4302,  4302,  4302,  4302,
    4302,  -882,  -882,  -882,  -882,  -882,   275,   510,   -92,  -882,
    -882,  -882,   429,   291,   306,   -92,   313,   315,  -882,  -882,
    -882,  -882,  -882,   317,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,   614,   297,   299,
     314,   316,   318,   319,   325,  -882,   326,   327,   329,   330,
     331,  -882,   333,   334,   335,   336,   337,   339,   340,   341,
     342,   344,  -882,  -882,  -882,   361,  -882,   363,   364,   365,
     368,   338,  -882,   -57,   292,   387,   390,  -214,   371,   380,
     382,  4148,  4148,  4148,  -882,   383,  1080,  -882,  -882,  -882,
    -882,  -882,   394,  -882,   389,   449,  -882,   395,   -87,   554,
     423,  -234,   440,   448,   588,  -882,   592,   292,  1171,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,   752,   456,   -92,   457,
     458,   460,  -882,  -882,   596,   -75,   600,   298,   -78,   -92,
    -882,   602,   277,    85,  -882,   607,  -882,  -882,    94,  -882,
     469,   609,   470,   477,  -151,  -128,  4148,   478,  -882,  -882,
    -882,  -882,  -882,   420,   618,   480,   481,   482,   485,   488,
     489,   490,  -214,   493,   495,  4148,  4148,  -882,  1537,  -225,
     496,  -882,   292,   497,   498,  -214,  -882,  1707,  -882,  -882,
     -92,   612,   508,  -882,   491,   625,  1745,  -882,  -882,   513,
      -4,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,   660,   819,   515,  -882,   908,
     823,   -49,  -882,   824,    19,   -48,   664,   523,  4148,   524,
     525,   178,  4148,   397,  -882,  -882,   526,   312,  4148,   572,
    -882,  -882,  -882,  -882,  4148,  -882,   685,   547,   853,   549,
     292,   550,   551,  -214,   553,  -882,  1864,  -882,   556,   557,
     560,   561,  2119,  -882,   562,   563,   564,   587,  -882,   698,
     595,   384,   611,   613,  -214,   615,   617,   620,   623,   639,
    2163,   640,  -882,   661,  -882,   662,  4148,  4148,  4148,  4148,
    2187,   919,   -20,  4148,  -882,  -882,   760,  -882,  -882,  -882,
    4302,  4148,   642,   652,   653,   382,   383,   649,  -296,   649,
     -60,  1948,  2310,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,   256,   704,  1211,  2037,  -882,  -882,  -882,   965,   350,
     -83,  -882,  2136,  -882,  -882,  -882,  4148,   675,  -882,   691,
    2880,   682,  4148,  -882,   692,  -882,   835,   836,  4302,  4148,
    -882,  -882,  -882,  4302,  4302,  4302,  4302,  4302,  4302,  4302,
    4302,  4302,  4302,  4302,  4302,  4302,  -882,  4302,  4148,  4148,
    4148,  4148,  4148,  4148,  4148,  4148,  4302,  4302,  4302,  4302,
    4148,  4302,  -882,  4148,  2358,  2334,  6124,  2415,  6148,  2439,
    6172,  2578,  1144,  2720,  6196,  2608,  6220,  2756,  6244,  2780,
    6268,  2814,  6292,  2839,  6316,  2917,  6340,  2956,   -59,  6364,
    3140,   674,  6388,  3168,  6412,  3193,  6436,  3324,  6460,  3348,
    6484,  3504,  6508,  3659,  6532,  3683,  6556,  3718,  6580,  3839,
    6604,  3872,  6628,  4082,  6652,  4106,  6676,  4168,   837,  -882,
     697,  -882,   699,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    4148,  4148,  4148,  4148,  4148,  4148,  4148,  4148,  4148,  4148,
    4148,  4148,  4148,   700,  4148,  4148,  4148,  4148,  4148,  4148,
    4148,  4148,  4148,  4148,  4148,  4148,  4148,  -882,   703,  -882,
     705,  -882,   167,  -882,  -882,  -882,  -882,  -882,   397,   512,
    4148,   684,   684,  4201,  4148,  4148,  4148,  4148,  4148,  4148,
    4148,   707,   852,   856,  1020,   702,   858,   717,  -882,   718,
    -882,  -882,  -882,   719,   706,  4148,   722,  -882,  -882,  -882,
    -882,  -882,   723,   -56,  -882,   724,  2136,   726,   728,  4148,
    -882,  -882,  -882,   729,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,   -97,   730,  -882,  -882,   712,
     714,  -882,   734,   735,  4148,   736,   -84,  -129,  -214,   738,
     720,  -882,   530,  -882,   740,    54,   744,   745,  -882,   746,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  1052,  -882,
    6700,  6700,  4148,   748,   749,  -882,  -882,  -882,  -882,  -882,
    4148,  -882,  1006,   732,   894,   895,  4148,  -882,  -882,  -882,
    -882,  -882,  -882,  1059,  -882,  -882,  1061,  -882,  -882,  1065,
    -882,   741,  1067,  -882,  1084,   761,  -882,  4240,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  4264,   780,   764,
    -882,  1087,  4334,  -882,   783,  -334,  4358,   785,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  4148,  -882,  -882,  -882,  -882,
    4148,  -882,  -882,  -882,  -882,   786,  -882,  1096,   792,   793,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  4148,
    -882,  -882,  -882,  6700,  6700,  6700,  6700,  4148,  -882,  1099,
    1101,  4382,   779,  3549,  6724,  2540,  4302,   427,   512,  -882,
    -882,   799,   800,   820,  -882,  -882,   941,  -882,   821,   825,
     183,    99,   828,   -61,  -882,   -92,  4148,  4148,   -92,  -882,
     832,   842,  -882,   845,  3057,  3386,  4148,  4148,    83,  -882,
     846,   847,   -40,   804,  1211,  -882,  -882,  -882,   848,  1129,
     976,   849,   850,  1636,   870,   183,    -5,   871,    83,   873,
    1158,   -41,   874,   875,  3819,  3973,    -6,   877,   859,  2037,
    -882,  -882,  -882,   880,   881,   882,   101,    83,  -882,  -882,
     -50,  -882,   883,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  6700,  -882,  -882,   -78,   884,  4148,   885,
     886,   889,  4148,   890,  6700,  -882,  4420,  -882,   872,   876,
    3549,  6724,  3298,  2863,  6724,   967,  1605,  1605,  1605,  1605,
    1605,  1605,    44,  -121,    44,  -121,  -337,    16,  -337,    16,
    -337,    16,   925,   802,   673,  3040,  3040,  3040,  3040,  3040,
    3040,    44,  -121,    44,  -121,  -337,   114,  -337,   216,  -304,
    -337,   267,   763,  -882,   840,  -882,  -882,  -882,  -882,  -882,
    -882,  4302,  4148,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  4302,  4302,  -882,  -882,  -882,
     878,  -882,  -882,  -882,  -882,  -882,  -882,  4148,  4148,  4302,
    4148,  4302,  4148,  4302,  4148,  -882,  -882,  4302,  4302,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,   682,  -882,  -882,
    4444,  4468,  4492,  4516,  4540,  4564,  4588,  4612,  4636,  4660,
    4684,  4708,  4732,   887,  4756,  4780,  4804,  4828,  4852,  4876,
    4900,  4924,  4948,  4972,  4996,  5020,  5044,  -882,  -882,   879,
    -882,  -344,  5068,  5092,   309,   309,  -304,  -304,  -304,  5116,
     888,  1007,  -882,   892,  1198,    12,  -882,  -882,  -882,   896,
    6700,  -882,  -882,  -882,  -882,  -882,  2136,   893,  -882,  5140,
    -882,   898,   312,  4148,   397,  -882,  4148,   900,  -882,  -882,
    6700,   897,  2136,   903,   904,  -882,  -882,  -882,   901,  4148,
    4148,  -882,   -50,  -882,   906,  -882,  -882,  -882,  -882,  6700,
    -882,  -882,  5164,  -882,  4148,  1021,  -882,  6700,  -882,  -882,
    -882,  1063,   142,  -882,   922,  4148,  4148,  4148,   926,  -882,
    4148,  4148,  4302,    72,  4148,  4148,  -882,  6700,  5188,  -882,
    -882,  -882,   920,  5212,  5236,  1188,  -882,  4148,  4148,   940,
     932,  -344,  -882,  -882,  -882,   942,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,   934,  -882,  6700,
    6700,  -882,  -882,  -882,  -882,   954,   -92,   956,   957,   958,
    -882,  6700,   959,   -92,   961,   962,   963,  -882,  6700,  6700,
    6700,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  4148,  -882,  -882,  -882,   964,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,     1,  6700,     8,  6700,  -882,
    -882,  -882,  1270,  -882,  -882,  -882,  -882,   966,   968,  -882,
    -882,  -882,  -882,  -882,  -882,  6700,  -882,  -882,  -882,  6700,
    -882,  4148,   969,   984,   985,  4302,  4148,  6748,  5260,  6772,
    5284,  6796,  5308,  5332,  5356,  6820,  5380,  6844,  5404,  6868,
    5428,  6892,  5452,  6916,  5476,   987,  -882,  4148,  -882,  4148,
     397,  4148,  -882,  -882,  4148,   989,  1223,  1295,   972,  1298,
     977,   973,  -882,   997,  4148,   980,  -882,  1305,  5500,  -301,
    5524,  -882,  1001,  -882,  -882,  -882,  1003,  6700,  6700,  -882,
    -882,  4148,  5548,  1260,  1311,  -882,  -882,  -882,  1011,   986,
    5572,  6700,  6700,  -882,  6700,  6700,  3549,  6724,  -882,  -882,
    -882,  -882,  5596,  5620,  1009,  1010,  4148,  4148,  1317,  5644,
    5668,  4148,   397,  -882,  1023,  -882,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  6700,  -882,  -882,  -882,  -882,
    -882,  -882,  -882,  -882,  6700,   999,  1002,  4148,  3549,  6700,
    -882,  -882,  -882,  -882,  -882,  1012,  4148,  4148,  -882,  -882,
    -882,  -882,  -882,  -882,  -882,  -882,  -882,  1013,  -882,  5692,
    5716,   -72,  5740,  5764,  1015,  1008,  1018,  1334,  1019,  1335,
    -882,  -882,  6700,  1032,  -882,  4148,  4302,   287,  4148,  4148,
    -882,  -882,  5788,  4148,  1022,   142,  1024,  -882,  4148,  1038,
    4148,  -882,  -882,  5812,  5836,  -882,  1338,  4148,  6700,   -72,
    -882,  -882,  -882,  6700,  5860,  5884,  -882,  -882,  4148,  -882,
    4148,  1044,  1189,  1351,  1030,  1369,  1046,  -882,  6700,  3549,
    6724,  -882,  5908,  5932,  4148,  6700,  1209,    -8,  1068,  5956,
    4148,  5980,  4148,  4148,  -882,  6004,  -882,  -882,  6028,  6700,
    -882,  -882,  1050,  1375,  1055,  1380,  1075,  1078,  6700,  -882,
    1079,  1077,  -882,  4148,  6700,  4148,  6700,  6700,  1097,  -882,
    1100,  1083,  1408,  1085,  4148,  1086,  1088,  1106,  6700,   854,
    1089,  1095,  1115,  1102,  1421,  6700,  -882,  1118,  1324,  4148,
    -882,  1120,  1104,  1430,  1107,  1108,  1128,  6052,  -882,  1130,
    1110,  1132,  1133,  -882,  4148,  -882,  1134,  1116,  1117,  6076,
    1119,  1137,  1139,  4148,  1140,  -882,  1122,  6100,  1124,  1145,
    4148,  1160,  1366,  6700,  -882,  1165,  -882
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,   611,
     700,   701,     0,     0,     0,     0,     0,   620,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   632,   633,
     634,     0,   621,     0,     0,     0,     0,   692,   693,   694,
     695,   696,   697,   698,   699,     0,     0,     0,     0,   372,
     373,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,     0,     0,     0,   491,     0,
       0,     0,    46,   492,    92,     0,     0,     0,     0,     0,
       0,    21,     0,     0,   493,   494,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   134,     0,     0,    39,     0,     0,   486,   488,
     487,   490,   489,     0,   472,   473,     0,     0,     0,     0,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
     555,   557,     0,   370,   556,   558,   559,   560,   561,   562,
     563,     0,   371,   374,   375,     0,     0,     0,     0,   578,
     655,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   364,   366,     0,     0,     0,   579,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,   511,   510,    62,    68,     0,     0,     0,   104,
     102,   103,     0,     0,     0,     0,     0,     0,   483,   482,
     376,   379,    64,     0,   308,   307,   306,   305,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,     0,     0,     0,
       0,     0,     0,     0,     0,   678,     0,     0,     0,     0,
       0,   702,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   714,   715,   716,     0,   703,     0,     0,     0,
       0,     0,   152,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,     0,    41,   139,   155,
     138,   167,     0,    54,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,    42,
     110,   109,   106,   108,   107,    63,     0,     0,     0,     0,
       0,     0,   248,    69,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,   255,     0,   476,   475,   367,   369,
       0,     0,     0,     0,     0,     0,     0,     0,   231,    90,
      91,    88,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   559,   209,     0,     0,
       0,   166,   157,     0,     0,     0,   156,     0,    56,    55,
       0,     0,     0,   105,     0,     0,     0,   548,   551,     0,
       0,   550,   552,   549,   547,    59,    58,    30,    28,    27,
      29,    26,    25,    23,    24,     0,     0,     0,    70,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,   132,     0,     0,     0,     0,
      66,   495,   496,   111,     0,   136,     0,     0,     0,     0,
     171,     0,     0,     0,     0,   170,     0,   203,     0,     0,
       0,     0,     0,   198,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,    71,   153,    72,   168,     0,     0,     0,     0,
       0,     0,   128,     0,   377,   378,     0,    48,    50,    49,
       0,     0,     0,     0,     0,   578,   579,   654,   582,   652,
     582,     0,     0,     1,    14,     9,     8,    12,    11,    13,
      10,     0,     0,     0,     0,   365,   390,   480,     0,     0,
       0,   479,     0,   336,   477,   478,     0,     0,   481,     0,
       0,     0,     0,   334,     0,   335,     0,     0,     0,     0,
       3,     5,     4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,    40,     0,   380,   383,   385,   382,   381,    43,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   148,   498,   499,
     497,   149,     0,   146,   147,   554,   553,   145,     0,     0,
       0,   733,   731,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,     0,
     185,   181,   182,     0,     0,     0,     0,   252,   253,   250,
     251,   249,     0,     0,   259,     0,     0,     0,     0,     0,
     264,   260,   256,     0,   313,   319,   314,   320,   310,   311,
     312,   317,   315,   316,   309,   318,   261,   684,   685,   686,
     687,   688,   689,   690,   691,   471,     0,   368,    20,     0,
       0,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,     0,   232,     0,     0,     0,     0,   215,     0,
     229,   226,   213,   211,   214,   227,   228,   210,     0,   212,
     223,   224,     0,     0,     0,   163,   162,   161,   160,   159,
       0,    61,     0,     0,     0,     0,     0,    60,   322,   323,
     321,   324,    47,    18,    16,    22,     0,   114,   115,     0,
     120,     0,     0,   118,     0,     0,    33,     0,    34,    35,
     327,   328,   325,   326,   329,   330,    32,     0,   657,     0,
      75,     0,     0,   663,     0,   580,     0,     0,   175,   180,
     177,   178,   174,   173,   176,     0,   206,   204,   207,   205,
       0,   201,   199,   202,   200,     0,   283,     0,     0,     0,
     277,   282,   281,   284,   276,   195,   194,   197,   196,     0,
     141,   154,   169,   190,   189,   192,   191,     0,   126,     0,
       0,     0,     0,   570,   574,     0,     0,     0,     0,   653,
     732,     0,     0,     0,   389,   467,     0,   456,     0,     0,
       0,     0,     0,     0,   388,     0,     0,     0,     0,   514,
       0,     0,   512,     0,     0,     0,     0,     0,     0,   513,
       0,     0,     0,     0,   386,   391,   393,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   387,
     424,   426,   363,     0,     0,     0,     0,     0,   484,   485,
       0,   351,     0,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   527,   528,   525,   526,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   340,   338,   339,   354,     0,     0,     0,     0,
       0,     0,     0,     0,   341,   337,     0,   350,     0,     0,
     571,   575,     0,   651,   582,   650,   644,   645,   646,   647,
     648,   649,   584,   582,   588,   582,   592,   582,   596,   582,
     602,   582,     0,   730,   729,   723,   724,   725,   726,   727,
     728,   585,   582,   589,   582,   593,   582,   597,   582,   669,
     600,   582,     0,   604,   603,   605,   672,   606,   673,   607,
     674,     0,     0,   609,   676,   610,   677,   612,   679,   613,
     680,   614,   681,   615,   682,     0,     0,   100,   622,   704,
     623,   624,   706,   625,   707,   626,   708,     0,     0,     0,
       0,     0,     0,     0,     0,   631,   713,     0,     0,   639,
     718,   640,   719,   641,   720,   642,   721,     0,    78,   384,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   151,     0,
     657,     0,     0,     0,   665,   666,   667,   668,   670,     0,
       0,     0,    84,   270,     0,     0,   184,   186,   187,     0,
      51,   254,   269,   257,   258,   262,     0,     0,   268,     0,
     263,     0,     0,     0,     0,   208,     0,     0,   235,   234,
     233,     0,     0,     0,     0,   241,   242,   239,     0,     0,
       0,   219,     0,   216,     0,   220,   221,   225,   230,   222,
     164,   165,     0,    38,     0,     0,    86,    52,    17,   121,
     116,     0,     0,   119,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,   179,   172,     0,   285,
     280,   279,     0,     0,     0,   130,   129,     0,     0,   656,
       0,   580,   468,   469,   470,     0,   465,   464,   507,   506,
     505,   462,   458,   457,   466,   459,   460,     0,   405,   402,
     401,   400,   409,   403,   410,     0,     0,     0,     0,     0,
     394,   396,     0,     0,     0,     0,     0,   395,   397,   398,
     399,   504,   501,   502,   503,   500,   419,   406,   422,   420,
     421,     0,   392,   437,   432,     0,   453,   452,   431,   430,
     450,   438,   434,   436,   435,   454,   441,   429,   433,   545,
     546,   544,   442,   439,   440,     0,   443,     0,   444,   427,
     428,   449,     0,   425,   355,   358,   357,     0,     0,   359,
     356,   352,   353,   343,   345,   347,   342,   349,   348,   344,
     346,     0,     0,     0,   658,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   671,     0,   705,     0,
       0,     0,   656,   658,     0,     0,     0,     0,     0,     0,
     275,     0,   265,     0,     0,     0,    76,     0,     0,   581,
       0,   127,     0,   243,   244,   245,     0,   240,   237,   217,
     218,     0,     0,     0,     0,   331,   332,   333,     0,     0,
       0,    37,   569,    82,    80,   567,   572,   576,   509,   508,
     664,   661,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,     0,   411,   417,   415,   413,   407,
     412,   418,   416,   414,   408,   423,   451,   446,   445,   448,
     447,   455,   361,   360,   362,     0,     0,     0,   643,   722,
     608,   675,   616,   618,   617,   619,     0,     0,   628,   710,
     629,   711,   630,   712,   635,   637,   636,   638,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,   266,   267,     0,    74,     0,     0,     0,     0,     0,
     247,   246,     0,     0,     0,     0,     0,    94,     0,   659,
       0,    53,   278,     0,     0,   131,     0,     0,   564,   581,
     461,    95,    96,   565,     0,     0,   683,   717,     0,   659,
       0,     0,     0,     0,     0,     0,     0,    83,    81,   573,
     577,   662,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,   627,   709,     0,   144,
      44,    85,     0,     0,     0,     0,   660,     0,   158,    87,
       0,     0,   123,     0,   566,     0,   193,   188,     0,   660,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,   568,    98,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,   272,     0,
       0,     0,     0,   124,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   271,     0,     0,     0,     0,
       0,     0,     0,   137,   274,     0,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -882,  -882,  -882,  1149,  -882,  -882,  -882,  -882,  -102,  -882,
    -882,  -882,    51,  -882,  -882,  -882,  1488,  1504,   190,  1239,
    -882,   654,  -882,   630,  -882,  -882,  -882,  -882,   -54,  -768,
    -882,  -882,  -420,  -882,  -881,   645,    84,   -39,  -882,  -720,
    -882,  -882,  -354,    52,  -882,  -882,  -882,   212,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   154,   155,   416,   156,   157,   158,   159,   247,   746,
     812,   836,  1418,   160,   543,   161,   162,   163,   220,   525,
     934,   935,   959,   960,   914,   904,   164,   544,   221,   972,
     165,   166,   443,   681,  1296,  1261,  1431,   204,   937,  1002,
    1322,   406,   687,   295,   168,   169,   170,   609,  1024
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     172,   819,   425,   294,   705,   824,  1176,  1204,   205,  1265,
     353,   436,   968,  1181,  1173,   222,  1319,   841,   787,   765,
    1195,   324,   468,   332,   306,   344,   762,   709,   763,   355,
    1299,   799,   793,   345,   206,   377,   386,   325,   678,   766,
     767,   393,   818,   823,   202,   968,   307,   202,   334,  1192,
     304,   173,   167,   434,   444,   768,  1389,   296,   390,   441,
     441,   794,   209,  1232,  1329,   455,   500,  1316,    49,    50,
     318,  1457,  1233,   218,   565,  1381,   219,   685,  1459,   686,
      53,   437,  1233,  1182,   567,  1234,  1340,   391,   501,   378,
     387,   335,   497,   498,   499,   308,  1506,   396,   336,   853,
    1428,  1429,   548,  1390,   889,   640,   210,   699,   526,   218,
     545,   394,   219,   890,  -733,  1507,   298,   583,  1508,   456,
     873,   438,   462,  1183,   549,   583,   480,   356,   490,   769,
     969,   747,   748,   749,   750,   751,   752,   753,   754,  1193,
     211,   679,   174,   357,  1312,  1430,   175,   337,   207,   968,
     176,   508,   510,   512,   641,  1320,   680,   445,  1321,   821,
    1196,   645,   710,   969,   305,  1291,  1292,   397,   338,   442,
     442,   795,   521,  1194,   585,   587,   589,   591,   593,   595,
     597,   599,   601,   603,   605,   607,   610,   339,   613,   615,
     617,   619,   621,   623,   625,   627,   629,   631,   633,   635,
     637,  1266,  1341,   506,   506,   506,  1174,   203,   299,   970,
     203,   723,   171,   747,   748,   749,   750,   751,   752,   753,
     754,   218,  1300,  1309,   219,   395,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   427,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   358,  1293,   218,  1330,  1313,   219,   346,
     347,   522,   441,  1458,   764,   177,   398,   969,   770,   399,
    1460,   309,  1258,   822,   718,   340,   310,   481,  1337,   400,
    1338,   178,   401,   730,  1314,   732,   341,   578,   579,   580,
     581,   691,   692,   693,   526,   218,   724,   300,   219,   731,
     583,   771,   218,   132,   133,   219,   342,   301,  1262,   778,
     179,   354,   311,   971,  1263,  1428,  1429,   439,   402,  1184,
     428,   429,   494,   430,  1294,   491,   359,   360,   457,   706,
     463,   495,   458,   482,   464,  1267,   801,   141,   142,   755,
     469,   180,   143,   144,  1507,   218,  1202,  1538,   219,   830,
    -731,   901,   403,   181,  1259,   734,   772,   898,   312,  1087,
     313,   583,   735,   507,   509,   511,   470,  1295,   459,   483,
     465,   182,   442,   523,   524,   790,   791,   808,   809,   810,
     811,   326,  -678,   840,  1580,  1581,   584,   586,   588,   590,
     592,   594,   596,   598,   600,   602,   604,   606,   404,   327,
     612,   614,   616,   618,   620,   622,   624,   626,   628,   630,
     632,   634,   636,  -702,  1197,   183,   460,   870,   466,   831,
     441,  1149,   736,   737,  1260,   492,   580,   581,   827,   328,
     431,   726,   837,   902,  1409,   903,   343,   583,   842,  1015,
     361,   362,   184,   471,   846,   185,   493,   484,   472,   432,
     473,   186,   563,   564,   474,   565,  1392,   218,   187,   314,
     219,   738,   739,   740,   188,   567,   189,   905,   485,   936,
     961,  -714,  1403,   747,   748,   749,   750,   751,   752,   753,
     754,   329,   190,   330,   191,   838,   883,   884,   885,   886,
     407,   845,   192,   891,   461,   193,   467,   194,   741,   218,
     894,   895,   219,   408,   409,   218,   195,   405,   219,   196,
     410,   201,  -715,   218,  -716,   774,   219,   832,   833,   834,
     835,   727,   475,   963,  -667,   581,  -703,   964,   208,   965,
     442,  1415,  1416,  1417,   197,   583,  1003,   198,   199,   200,
    1014,   223,  1016,   742,   743,   775,   297,   302,  1021,  1022,
     316,   867,   506,   303,   411,   412,   315,   868,   319,   333,
     433,  1033,  1035,  1037,  1039,  1041,   350,   351,  1043,  1044,
    1045,  1046,  1047,  1048,  1049,  1050,  1052,  1054,  1056,  1058,
    1059,  1061,   744,  1062,   728,   218,   745,   352,   219,   392,
     331,   224,   966,   212,   413,   320,   414,   776,   213,   777,
     506,   388,   389,   729,   417,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   418,   506,
     426,   218,   435,   440,   219,   496,  -668,   581,   506,   506,
     506,   506,   321,   506,   214,   513,   967,   583,   514,   515,
     516,   611,   322,   517,   518,   519,   215,   520,   550,   415,
    1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,  1129,
    1130,  1131,  1132,   546,  1134,  1135,  1136,  1137,  1138,  1139,
    1140,  1141,  1142,  1143,  1144,  1145,  1146,  -670,   581,   547,
     216,  1250,   217,   551,   552,   843,   642,   643,   583,   869,
    1152,   638,   130,   131,  1153,  1154,  1155,  1156,  1157,  1158,
    1159,   419,   644,   218,   218,   649,   219,   219,   682,   646,
     225,   647,   893,   648,   650,  1170,   651,   697,   698,   580,
     699,  1203,   134,   135,   136,   137,   138,   139,   140,  1179,
     583,   652,   703,   653,   677,   654,   655,   420,   421,   224,
    1150,  1151,   656,   657,   658,   843,   659,   660,   661,   422,
     662,   663,   664,   665,   666,   323,   667,   668,   669,   670,
    1020,   671,  1397,   224,  1190,  1023,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1034,  1036,  1038,  1040,   672,  1042,
     673,   674,   675,   683,   407,   676,   684,   688,  1051,  1053,
    1055,  1057,  1209,  1060,   906,   907,   689,   408,   409,   908,
    1212,   690,   694,  1200,   410,   702,  1217,   130,   131,   701,
     704,   707,   423,   226,   227,   228,   229,   230,   231,   708,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   909,   711,   134,   135,   136,
     137,   138,   139,   140,   712,   713,   714,   716,   411,   412,
     844,   722,   717,   719,   720,  1237,   721,   725,   225,   733,
    1238,  1268,   756,   759,  1271,   758,   760,   130,   131,   910,
    1280,  1287,   911,   761,   773,   779,   780,   781,   782,  1243,
     936,   783,   225,   912,   784,   785,   786,  1244,   413,   788,
     414,   789,   796,   797,   798,   802,   610,   134,   135,   136,
     137,   138,   139,   140,   803,   961,   639,   804,   805,   807,
     814,   815,  1339,   816,   817,   820,  1269,  1270,   825,   826,
     828,   829,   839,   913,  1281,  1288,  1289,  1290,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,   847,   848,   849,   850,   851,   852,   506,   854,
    1251,   583,   856,   857,  1326,  1328,   858,   859,   861,   862,
     863,   226,   227,   228,   229,   230,   231,  1343,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   864,   865,   226,   227,   228,   229,   230,
     231,   866,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   871,  1345,   872,
     888,   874,  1349,   875,   892,  1375,   876,   248,   249,   877,
     250,   251,   252,   253,   254,   255,    10,    11,   256,   257,
     258,   259,   260,   261,   262,   878,   880,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   424,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   962,   881,   882,   896,
      37,    38,    39,    40,    41,    42,    43,    44,   897,   898,
     567,  1004,  1358,   570,   571,   572,   573,   574,   575,   695,
     696,   697,   698,   580,   699,  1360,  1362,  1005,  1017,  1018,
    1019,  1117,  1090,  1118,   583,  1119,  1133,  1363,  1364,  1147,
    1366,  1148,  1368,  1160,  1370,   583,  1161,  1372,  1374,   281,
    1162,  1163,  1165,  1166,  1167,  1168,   282,  1164,  1171,  1172,
    1175,  1169,  1177,   506,  1178,  1180,  1185,  1186,  1396,  1187,
    1188,  1189,  1191,  1609,  1198,  1199,  1201,   506,   506,   283,
    1205,  1206,  1207,  1208,  1210,  1211,  1213,  1214,  1215,  1216,
    1218,   506,  1219,   506,   284,   506,  1220,  1221,  1222,   506,
     506,   568,   569,   570,   571,   572,   573,   574,   575,   695,
     696,   697,   698,   580,   699,  1223,  1224,  1227,  1229,  1228,
    1231,  1236,  1239,  1398,   583,  1356,  1400,  1240,  1241,  1242,
    1245,   285,  1246,   286,  1248,  1252,  1253,   287,  1255,  1407,
    1408,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,  1412,   218,  1254,  1256,   219,  1301,
    1304,  1257,  1446,   583,  1264,  1420,  1421,  1422,  1272,  1451,
    1424,  1425,  1427,  1305,  1432,  1433,  1399,   915,  1273,   916,
     917,  1274,  1297,  1298,  1303,  1306,  1307,  1439,  1440,  1318,
    -671,   288,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,  1310,  1315,   289,  1317,
    1323,  1324,   918,  1331,  1332,   583,  1334,  1335,  1336,  1342,
    1344,  1346,  1347,  1357,   506,  1348,  1350,  1352,  -705,  1388,
    1386,  1353,  1391,   919,  1395,  1380,  1401,  1359,  1361,  1404,
    1405,  1455,  1410,  1385,  1413,  1378,   920,  1387,  1393,   130,
     131,  1365,  1402,  1367,   921,  1369,  1406,  1414,  1419,  1371,
    1373,  1438,  1423,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,  1435,   565,  1441,  1443,   134,
     135,   136,   137,   138,   139,   140,   567,  1355,  1442,  1444,
    1445,  1464,  1447,  1448,  1449,  1450,  1469,  1452,  1453,  1454,
    1456,  1461,  1462,  1495,  1463,  1465,   922,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,  1489,   565,  1490,
    1466,  1492,  1467,  1488,  1493,  1494,  1496,  1497,   567,  1498,
     923,  1500,  1499,  1501,  1502,  1503,  1504,  1510,   924,  1511,
    1514,   925,  1515,  1516,  1517,  1521,  1522,   506,  1525,   290,
     150,  1512,   218,   926,   927,   219,   928,  1531,   929,  1530,
    1532,   291,  -683,  -717,  1542,  1544,  1546,   292,  1547,  1564,
    1541,   293,  1491,  1543,  1545,  1560,  1523,  1524,  1556,  1558,
    1570,  1528,  1572,  1571,  1426,  1573,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
    1574,  1575,   582,  1579,  1582,  1590,  1591,  1533,   930,   583,
    1592,  1593,  1594,   931,  1595,  1596,  1534,  1535,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,  1597,  1600,  1529,   700,  1601,   932,  1602,  1603,
    1604,   583,  1608,  1607,  1606,  1548,  1550,  1610,  1552,  1553,
    1611,  1612,  1614,  1555,  1615,  1616,  1618,  1613,  1559,  1619,
    1561,  1620,  1621,  1622,  1623,  1626,  1625,  1565,  1627,  1628,
    1630,  1631,  1632,  1635,  1634,  1636,  1638,  1639,  1568,  1641,
    1569,  1642,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,  1578,   565,  1644,  1645,   506,  1071,
    1584,  1646,  1586,  1587,   813,   567,  1557,  1468,   348,   568,
     569,   570,   571,   572,   573,   574,   575,   695,   696,   697,
     698,   580,   699,  1598,   349,  1599,   715,   757,  1302,  1333,
    1311,  1551,   583,     0,  1605,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   933,   565,  1617,
       0,   566,     0,     0,     0,     0,     0,     0,   567,     0,
       0,     0,     0,     0,  1629,     0,     0,     0,     0,     0,
       0,     0,     0,  1637,     0,    -2,     1,     0,     2,     3,
    1643,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,     0,     0,
       0,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,     0,    47,    48,     0,     0,     0,    49,    50,
       0,     0,     0,     0,     0,    51,    52,     0,     0,     0,
      53,    54,    55,     0,     0,    56,     0,     0,  1549,    57,
       0,     0,    58,     0,   527,   528,     0,    59,     0,    60,
      61,     0,    62,    63,    64,    65,     0,   973,    66,     0,
      67,    68,    69,     0,    70,     0,     0,     0,   529,     0,
      71,     0,     0,     0,   530,    72,     0,   974,    73,     0,
     531,     0,   532,    74,    75,     0,     0,     0,     0,    76,
      77,    78,     0,     0,     0,    79,    80,     0,     0,    81,
       0,   533,     0,     0,     0,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
       0,    88,     0,     0,     0,     0,   534,    89,   535,     0,
       0,    90,    91,     0,    92,    93,    94,    95,     0,     0,
     536,     0,     0,     0,     0,     0,     0,     0,    96,    97,
     218,     0,     0,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,   537,     0,     0,     0,     0,     0,   975,     0,
      99,   100,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,   107,     0,     0,     0,     0,     0,     0,   108,
     109,   110,   111,   112,     0,   113,   538,   539,     0,   114,
     115,     0,     0,     0,   116,     0,   117,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,   540,     0,     0,
     119,   120,   121,   122,     0,   541,     0,   123,     0,     0,
       0,   124,     0,   125,     0,     0,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   568,   569,   570,   571,   572,
     573,   574,   575,   695,   696,   697,   698,   580,   699,     0,
       0,   542,   792,     0,     0,     0,     0,     0,   583,     0,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
       0,     0,   143,   144,     0,     0,     0,     0,     0,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  -734,  -734,  -734,  -734,  -734,
    -734,   561,   562,   563,   564,   145,   565,     0,     0,     0,
     146,   147,   148,     0,     0,     0,   567,     0,     0,     0,
     149,   150,  1308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   151,     0,     0,     0,     0,     0,   152,     0,
     248,   249,   153,   250,   251,   252,   253,   254,   255,    10,
      11,   256,   257,   258,   259,   260,   261,   262,     0,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,     0,
     272,   273,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,     0,   938,     0,   939,   568,   569,   570,   571,   572,
     573,   574,   575,   695,   696,   697,   698,   580,   699,     0,
       0,     0,   800,     0,     0,     0,     0,   940,   583,     0,
       0,   363,   941,     0,     0,     0,     0,   364,     0,     0,
       0,     0,   365,   568,   569,   570,   571,   572,   573,   574,
     575,   695,   696,   697,   698,   580,   699,     0,     0,     0,
     806,     0,     0,     0,     0,     0,   583,     0,   942,     0,
     943,     0,     0,     0,     0,     0,     0,     0,   366,     0,
       0,     0,     0,     0,   944,     0,     0,   317,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,   945,     0,     0,   946,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,   947,     0,     0,     0,
     369,     0,     0,     0,   370,     0,   371,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,   973,   218,     0,
       0,   219,   948,     0,     0,     0,     0,     0,   218,     0,
       0,   219,     0,     0,     0,     0,     0,   974,     0,     0,
     949,   950,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,   855,
       0,     0,     0,     0,   288,   583,     0,     0,     0,     0,
       0,     0,     0,   951,     0,   952,     0,     0,     0,     0,
       0,   289,     0,     0,     0,     0,   953,   954,     0,     0,
       0,   955,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   956,     0,     0,     0,   957,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   374,     0,     0,
       0,     0,   130,   131,   375,     0,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   975,   565,
       0,     0,     0,     0,     0,     0,   899,     0,     0,   567,
       0,     0,   134,   135,   376,   137,   138,   139,   140,   248,
     249,     0,   250,   251,   252,   253,   254,   255,    10,    11,
     256,   257,   258,   259,   260,   261,   262,     0,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,     0,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     0,     0,   958,     0,     0,     0,     0,     0,     0,
       0,     0,   290,   150,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,     0,     0,     0,     0,     0,
     292,     0,     0,     0,   293,     0,   446,     0,     0,     0,
       0,   447,     0,     0,     0,     0,     0,     0,   448,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,     0,     0,   449,     0,     0,
       0,     0,     0,     0,     0,     0,   450,   568,   569,   570,
     571,   572,   573,   574,   575,   695,   696,   697,   698,   580,
     699,     0,     0,     0,   860,     0,     0,     0,     0,     0,
     583,   451,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   452,     0,     0,     0,   453,
       0,   568,   569,   570,   571,   572,   573,   574,   575,   695,
     696,   697,   698,   580,   699,     0,     0,   218,   879,     0,
     219,     0,     0,     0,   583,   568,   569,   570,   571,   572,
     573,   574,   575,   695,   696,   697,   698,   580,   699,     0,
       0,     0,   887,     0,     0,     0,     0,     0,   583,     0,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   454,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,   248,   249,     0,   250,   251,   252,   253,   254,   255,
      10,    11,   256,   257,   258,   259,   260,   261,   262,     0,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
       0,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   130,   131,     0,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,     0,     0,
       0,   134,   135,   136,   137,   138,   139,   140,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,     0,   380,     0,     0,     0,     0,   900,     0,
     381,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,     0,     0,     0,     0,
       0,     0,  1064,     0,     0,   583,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   382,   565,
       0,   290,   150,     0,     0,     0,  1063,     0,     0,   567,
       0,     0,     0,   291,     0,     0,     0,     0,     0,   292,
       0,     0,     0,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   383,     0,   384,     0,     0,
       0,   385,     0,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,     0,     0,   218,
       0,     0,   219,  1066,     0,     0,   583,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,     0,     0,     0,     0,     0,     0,  1068,     0,     0,
     583,     0,     0,     0,     0,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,   248,   249,     0,   250,   251,   252,   253,
     254,   255,    10,    11,   256,   257,   258,   259,   260,   261,
     262,     0,     0,   263,   264,   265,   266,   267,   268,   269,
     270,   271,     0,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     0,   130,   131,     0,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,   134,   135,   136,   137,   138,   139,   140,
    1249,   583,     0,     0,     0,     0,     0,     0,     0,  1006,
    1007,     0,     0,     0,     0,  1008,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
       0,     0,     0,     0,     0,     0,  1070,     0,     0,   583,
       0,     0,     0,     0,     0,  1009,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     317,     0,     0,   290,   150,     0,  1074,     0,     0,   583,
       0,     0,     0,     0,     0,   291,     0,     0,     0,     0,
       0,   292,     0,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1010,     0,  1011,
     248,   249,     0,   250,   251,   252,   253,   254,   255,    10,
      11,   256,   257,   258,   259,   260,   261,   262,     0,     0,
     263,   264,   265,   266,   267,   268,   269,   270,   271,     0,
     272,   273,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,   288,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,     0,     0,   289,  1072,     0,  1012,  1013,     0,
       0,   583,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1275,     0,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,     0,     0,
       0,     0,     0,     0,  1076,   130,   131,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,     0,     0,     0,     0,     0,   317,  1078,     0,
    1276,   583,     0,     0,     0,   134,   135,   136,   137,   138,
     139,   140,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,     0,     0,     0,     0,
       0,     0,  1080,     0,  1277,   583,  1278,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,     0,     0,     0,     0,     0,     0,  1082,   218,     0,
     583,   219,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,     0,   565,   290,   150,     0,     0,     0,
       0,     0,     0,     0,   567,     0,     0,   291,     0,     0,
       0,     0,     0,   292,   288,     0,     0,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   289,     0,     0,  1279,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,     0,
       0,     0,     0,     0,     0,  1084,     0,     0,   583,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   131,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,     0,     0,
       0,  1086,     0,     0,     0,     0,     0,   583,     0,     0,
       0,     0,   134,   135,   136,   137,   138,   139,   140,   248,
     249,     0,   250,   251,   252,   253,   254,   255,    10,    11,
     256,   257,   258,   259,   260,   261,   262,     0,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,     0,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
    -734,  -734,  -734,  -734,  -734,  -734,   695,   696,   697,   698,
     580,   699,   290,   150,     0,     0,     0,     0,     0,     0,
       0,   583,     0,     0,   291,     0,     0,     0,     0,     0,
     292,     0,     0,     0,   293,     0,     0,     0,     0,     0,
       0,  1282,     0,     0,     0,     0,     0,   248,   249,     0,
     250,   251,   252,   253,   254,   255,    10,    11,   256,   257,
     258,   259,   260,   261,   262,     0,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,     0,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   317,     0,     0,  1283,
      37,    38,    39,    40,    41,    42,    43,    44,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,     0,     0,     0,     0,     0,     0,  1089,     0,
       0,   583,     0,  1284,     0,  1285,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
       0,     0,     0,     0,     0,     0,  1092,   218,     0,   583,
     219,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,     0,     0,     0,     0,     0,
       0,  1094,     0,     0,   583,     0,     0,     0,     0,     0,
       0,     0,     0,   288,   317,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,   248,   249,  1286,   250,   251,   252,   253,   254,   255,
      10,    11,   256,   257,   258,   259,   260,   261,   262,     0,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
       0,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,   130,   131,     0,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,   134,   135,   136,   137,   138,   139,   140,  1354,   583,
       0,   288,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,     0,     0,   289,     0,
       0,     0,  1096,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
       0,     0,     0,  1098,     0,     0,     0,     0,     0,   583,
       0,     0,     0,     0,     0,     0,     0,     0,   317,   130,
     131,   290,   150,     0,     0,   476,   477,     0,     0,     0,
       0,     0,     0,   291,     0,     0,     0,     0,     0,   292,
       0,     0,     0,   293,     0,     0,     0,     0,     0,   134,
     135,   136,   137,   138,   139,   140,     0,     0,     0,   478,
     479,     0,   248,   249,     0,   250,   251,   252,   253,   254,
     255,    10,    11,   256,   257,   258,   259,   260,   261,   262,
       0,     0,   263,   264,   265,   266,   267,   268,   269,   270,
     271,     0,   272,   273,   274,   275,   276,   277,   278,   279,
     280,     0,     0,     0,     0,    37,    38,    39,    40,    41,
      42,    43,    44,     0,     0,   288,     0,     0,     0,   290,
     150,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   291,   289,     0,     0,     0,     0,   292,     0,     0,
       0,   293,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,     0,     0,     0,  1100,
       0,     0,     0,     0,     0,   583,     0,     0,     0,     0,
       0,     0,     0,   130,   131,     0,     0,     0,     0,   486,
     487,     0,     0,     0,     0,     0,     0,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   317,
     565,     0,     0,   134,   135,   136,   137,   138,   139,   140,
     567,     0,     0,   488,   489,     0,   248,   249,     0,   250,
     251,   252,   253,   254,   255,    10,    11,   256,   257,   258,
     259,   260,   261,   262,     0,     0,   263,   264,   265,   266,
     267,   268,   269,   270,   271,     0,   272,   273,   274,   275,
     276,   277,   278,   279,   280,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,   290,   150,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   291,     0,     0,     0,     0,
       0,   292,     0,     0,     0,   293,   288,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,     0,     0,   289,  1102,     0,     0,     0,     0,     0,
     583,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,     0,     0,     0,  1104,     0,
       0,     0,     0,     0,   583,  1325,     0,     0,     0,     0,
       0,     0,     0,   317,   130,   131,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
       0,     0,     0,     0,     0,     0,  1106,     0,     0,   583,
       0,     0,     0,     0,   134,   135,   136,   137,   138,   139,
     140,   248,   249,     0,   250,   251,   252,   253,   254,   255,
      10,    11,   256,   257,   258,   259,   260,   261,   262,     0,
       0,   263,   264,   265,   266,   267,   268,   269,   270,   271,
       0,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       0,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
     288,     0,     0,     0,   290,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   291,   289,     0,     0,
       0,     0,   292,     0,     0,     0,   293,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,     0,     0,     0,  1108,     0,     0,     0,     0,  1327,
     583,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,     0,     0,     0,     0,   317,     0,
    1110,     0,     0,   583,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,   140,     2,     3,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   502,     0,     0,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   290,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     291,     0,     0,     0,     0,   288,   292,     0,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   289,     2,     3,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
     502,     0,     0,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   503,   130,   131,     0,    37,    38,    39,    40,
      41,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   135,   136,   137,   138,   139,   140,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,     0,     0,     0,     0,     0,     0,
    1112,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,     0,     0,
       0,     0,     0,     0,  1114,     0,     0,   583,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
     503,     0,     0,   290,   150,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   291,   504,     0,     0,     0,
       0,   292,     0,     0,     0,   293,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
       0,     0,     0,     0,     0,     0,  1116,     0,     0,   583,
       0,     0,     0,     0,     0,     0,     0,   130,   131,   568,
     569,   570,   571,   572,   573,   574,   575,   695,   696,   697,
     698,   580,   699,     0,     0,     0,     0,     0,     0,   900,
       0,     0,   583,     0,     0,     0,     0,   134,   135,   136,
     137,   138,   139,   140,     0,     0,     0,   288,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,   608,  1225,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,  1226,
       0,     0,     0,     0,     0,   583,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   130,   131,   505,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,   152,     0,     0,     0,   153,
       0,     0,     0,     0,     0,   134,   135,   136,   137,   138,
     139,   140,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,  1230,
       0,     0,     0,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1235,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,   505,   150,  1247,     0,     0,
       0,     0,     0,   583,     0,     0,     0,   151,     0,     0,
       0,     0,     0,   152,     0,     0,     0,   153,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1351,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1376,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,     0,     0,     0,  1066,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,     0,     0,     0,
    1068,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,     0,     0,     0,  1070,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1072,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1074,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,     0,     0,     0,  1076,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,     0,     0,     0,
    1078,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,     0,     0,     0,  1080,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,  1082,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1084,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1377,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,     0,     0,     0,
    1089,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,     0,     0,     0,  1092,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,  1094,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1096,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1098,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,  1100,     0,     0,
       0,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,  1102,     0,     0,     0,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1104,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1106,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1379,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,     0,     0,     0,
    1110,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,     0,     0,     0,  1112,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,  1114,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1116,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,     0,     0,     0,     0,     0,  1382,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,     0,     0,     0,
       0,     0,  1383,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,  1384,     0,     0,     0,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1394,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,  1411,
       0,     0,     0,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1434,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,  1436,     0,     0,
       0,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,  1437,     0,     0,     0,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,  1471,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,     0,     0,     0,     0,
       0,     0,  1473,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
       0,     0,     0,     0,     0,     0,  1475,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,  1476,     0,     0,
       0,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,  1477,     0,     0,     0,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,  1479,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1481,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,     0,     0,     0,  1483,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,     0,     0,     0,     0,     0,     0,
    1485,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,     0,     0,
       0,     0,     0,     0,  1487,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1505,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,  1509,
       0,     0,     0,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1513,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,  1518,     0,     0,
       0,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,     0,     0,     0,     0,     0,  1519,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1520,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,  1526,
       0,     0,     0,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1527,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,     0,     0,     0,
    1536,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,     0,     0,     0,  1537,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,     0,     0,
    1539,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,  1540,
       0,     0,     0,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,  1554,     0,     0,     0,     0,     0,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,  1562,     0,     0,
       0,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,  1563,     0,     0,     0,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,  1566,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,     0,
       0,     0,  1567,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,     0,     0,     0,     0,     0,  1576,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,  1577,     0,     0,
       0,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,  1583,     0,     0,     0,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1585,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     695,   696,   697,   698,   580,   699,     0,     0,     0,  1588,
       0,     0,     0,     0,     0,   583,   568,   569,   570,   571,
     572,   573,   574,   575,   695,   696,   697,   698,   580,   699,
       0,     0,     0,     0,     0,     0,     0,     0,  1589,   583,
     568,   569,   570,   571,   572,   573,   574,   575,   695,   696,
     697,   698,   580,   699,     0,     0,     0,  1624,     0,     0,
       0,     0,     0,   583,   568,   569,   570,   571,   572,   573,
     574,   575,   695,   696,   697,   698,   580,   699,     0,     0,
       0,  1633,     0,     0,     0,     0,     0,   583,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,  1640,     0,     0,     0,     0,
       0,   583,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,     0,   565,     0,     0,     0,     0,
       0,     0,  1065,     0,     0,   567,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,     0,   565,
       0,     0,     0,     0,     0,     0,  1067,     0,     0,   567,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,     0,   565,     0,     0,     0,     0,     0,     0,
    1069,     0,     0,   567,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,     0,   565,     0,     0,
       0,     0,     0,     0,  1073,     0,     0,   567,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
       0,   565,     0,     0,     0,     0,     0,     0,  1075,     0,
       0,   567,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,     0,   565,     0,     0,     0,     0,
       0,     0,  1077,     0,     0,   567,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,     0,   565,
       0,     0,     0,     0,     0,     0,  1079,     0,     0,   567,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,     0,   565,     0,     0,     0,     0,     0,     0,
    1081,     0,     0,   567,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,     0,   565,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,   567,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
       0,   565,     0,     0,     0,  1085,     0,     0,     0,     0,
       0,   567,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,     0,   565,     0,     0,     0,     0,
       0,     0,  1088,     0,     0,   567,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,     0,   565,
       0,     0,     0,     0,     0,     0,  1091,     0,     0,   567,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,     0,   565,     0,     0,     0,     0,     0,     0,
    1093,     0,     0,   567,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,     0,   565,     0,     0,
       0,     0,     0,     0,  1095,     0,     0,   567,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
       0,   565,     0,     0,     0,  1097,     0,     0,     0,     0,
       0,   567,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,     0,   565,     0,     0,     0,  1099,
       0,     0,     0,     0,     0,   567,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,     0,   565,
       0,     0,     0,  1101,     0,     0,     0,     0,     0,   567,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,     0,   565,     0,     0,     0,  1103,     0,     0,
       0,     0,     0,   567,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,     0,   565,     0,     0,
       0,     0,     0,     0,  1105,     0,     0,   567,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
       0,   565,     0,     0,     0,  1107,     0,     0,     0,     0,
       0,   567,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,     0,   565,     0,     0,     0,     0,
       0,     0,  1109,     0,     0,   567,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,     0,   565,
       0,     0,     0,     0,     0,     0,  1111,     0,     0,   567,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,     0,   565,     0,     0,     0,     0,     0,     0,
    1113,     0,     0,   567,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,     0,   565,     0,     0,
       0,     0,     0,     0,  1115,     0,     0,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   695,   696,   697,   698,
     580,   699,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   583,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   583,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,     0,   565,
       0,     0,     0,     0,     0,     0,  1470,     0,     0,   567,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,     0,   565,     0,     0,     0,     0,     0,     0,
    1472,     0,     0,   567,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,     0,   565,     0,     0,
       0,     0,     0,     0,  1474,     0,     0,   567,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
       0,   565,     0,     0,     0,     0,     0,     0,  1478,     0,
       0,   567,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,     0,   565,     0,     0,     0,     0,
       0,     0,  1480,     0,     0,   567,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,     0,   565,
       0,     0,     0,     0,     0,     0,  1482,     0,     0,   567,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,     0,   565,     0,     0,     0,     0,     0,     0,
    1484,     0,     0,   567,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,     0,   565,     0,     0,
       0,     0,     0,     0,  1486,     0,     0,   567
};

static const yytype_int16 yycheck[] =
{
       0,   421,   104,    57,    91,   425,   726,   775,    47,    70,
      95,   110,    95,   110,    70,    54,    57,   437,   372,   147,
     149,    75,   124,    77,    63,    79,   177,   261,   179,   172,
      70,   385,   257,    28,   140,    89,    90,    76,    95,   167,
     168,    95,    91,    91,   122,    95,    91,   122,    28,   133,
     140,   414,     0,   107,   293,   183,    44,    57,   208,   108,
     108,   286,   254,   397,    70,   119,   397,   948,    63,    64,
      70,    70,   416,   201,   411,   419,   204,   291,    70,   293,
      75,   180,   416,   180,   421,   419,   967,   237,   419,    89,
      90,    71,   146,   147,   148,   140,   397,    97,    78,   453,
      28,    29,   397,    91,   124,   207,   298,   411,   162,   201,
     164,   140,   204,   133,   410,   416,    84,   421,   419,   119,
     474,   220,   122,   220,   419,   421,   126,   270,   128,   257,
     213,    46,    47,    48,    49,    50,    51,    52,    53,   223,
     332,   198,   417,   286,   149,    73,   417,   127,   254,    95,
     417,   151,   152,   153,   208,   196,   213,   396,   199,   140,
     289,   215,   396,   213,   254,    82,    83,    56,   148,   218,
     218,   396,    78,   257,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   167,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   262,   970,   151,   152,   153,   262,   285,   176,   292,
     285,   286,     0,    46,    47,    48,    49,    50,    51,    52,
      53,   201,   262,   943,   204,   254,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    95,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   396,   171,   201,   262,   262,   204,   254,
     255,   167,   108,   262,   415,   417,   155,   213,   396,   158,
     262,    90,    89,   254,   328,   255,    95,    84,   177,   168,
     179,   417,   171,   337,   289,   339,   266,   408,   409,   410,
     411,   291,   292,   293,   348,   201,   335,   265,   204,   338,
     421,   355,   201,   298,   299,   204,   286,   275,   209,   363,
     417,   396,   131,   396,   215,    28,    29,   416,   207,   416,
     176,   177,   132,   179,   241,   154,   140,   141,    91,   416,
      91,   141,    95,   140,    95,   396,   390,   332,   333,   254,
      69,   417,   337,   338,   416,   201,   292,   419,   204,   171,
     410,    95,   241,   417,   171,    78,   356,   416,   177,   418,
     179,   421,    85,   151,   152,   153,    95,   284,   131,   176,
     131,   417,   218,   279,   280,   375,   376,   381,   382,   383,
     384,    77,   410,   437,   392,   393,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   287,    95,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   410,   768,   417,   179,   471,   179,   241,
     108,   254,   145,   146,   241,   254,   410,   411,   428,   125,
     286,   133,   432,   177,  1202,   179,   416,   421,   438,   541,
     254,   255,   417,   172,   444,   417,   275,   254,   177,   305,
     179,   417,   408,   409,   183,   411,  1176,   201,   417,   278,
     204,   184,   185,   186,   417,   421,   417,   521,   275,   523,
     524,   410,  1192,    46,    47,    48,    49,    50,    51,    52,
      53,   177,   417,   179,   417,   433,   486,   487,   488,   489,
     124,   439,   417,   493,   257,   417,   257,   417,   221,   201,
     500,   501,   204,   137,   138,   201,   417,   396,   204,   417,
     144,   396,   410,   201,   410,    95,   204,   339,   340,   341,
     342,   223,   251,   173,   410,   411,   410,   177,   235,   179,
     218,   389,   390,   391,   417,   421,   536,   417,   417,   417,
     540,    95,   542,   266,   267,   125,    91,   396,   548,   549,
     417,   167,   500,   396,   188,   189,   396,   173,    91,    91,
     416,   561,   562,   563,   564,   565,   105,   417,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   305,   583,   286,   201,   309,   305,   204,   395,
     286,    81,   242,    90,   228,    93,   230,   177,    95,   179,
     548,   396,   396,   305,   179,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,    91,   567,
     417,   201,    91,   396,   204,   417,   410,   411,   576,   577,
     578,   579,   130,   581,   131,     0,   286,   421,   414,   414,
     414,   396,   140,   414,   414,   414,   143,   414,   414,   283,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   417,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   410,   411,   417,
     177,   254,   179,   414,   414,   173,   257,   396,   421,   305,
     690,   416,   295,   296,   694,   695,   696,   697,   698,   699,
     700,    43,   396,   201,   201,    91,   204,   204,   416,   396,
     200,   396,   500,   396,   417,   715,   417,   408,   409,   410,
     411,   775,   325,   326,   327,   328,   329,   330,   331,   729,
     421,   417,   283,   417,   396,   417,   417,    79,    80,    81,
     688,   689,   417,   417,   417,   173,   417,   417,   417,    91,
     417,   417,   417,   417,   417,   253,   417,   417,   417,   417,
     548,   417,  1182,    81,   764,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   417,   567,
     417,   417,   417,   396,   124,   417,   396,   416,   576,   577,
     578,   579,   792,   581,    90,    91,   416,   137,   138,    95,
     800,   419,   419,   273,   144,   416,   806,   295,   296,   415,
     415,   257,   154,   303,   304,   305,   306,   307,   308,   396,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   131,   396,   325,   326,   327,
     328,   329,   330,   331,   396,   257,   254,    95,   188,   189,
     278,   255,   396,   396,   396,   855,   396,   257,   200,   257,
     860,   915,   255,   254,   918,   396,   396,   295,   296,   165,
     924,   925,   168,   396,   396,   257,   396,   396,   396,   879,
     934,   396,   200,   179,   396,   396,   396,   887,   228,   396,
     230,   396,   396,   396,   396,   283,   896,   325,   326,   327,
     328,   329,   330,   331,   396,   959,   396,   416,   283,   396,
      91,   396,   966,     5,    91,    91,   916,   917,   254,   396,
     396,   396,   396,   219,   924,   925,   926,   927,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   257,   396,    91,   396,   396,   396,   896,   396,
     898,   421,   396,   396,   954,   955,   396,   396,   396,   396,
     396,   303,   304,   305,   306,   307,   308,  1006,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   396,   286,   303,   304,   305,   306,   307,
     308,   396,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   396,  1008,   396,
      91,   396,  1012,   396,   254,  1117,   396,     3,     4,   396,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   396,   396,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   388,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    91,   396,   396,   417,
      46,    47,    48,    49,    50,    51,    52,    53,   416,   416,
     421,   396,  1072,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,  1085,  1086,   396,   396,   254,
     254,   254,   418,   396,   421,   396,   396,  1097,  1098,   396,
    1100,   396,  1102,   396,  1104,   421,   254,  1107,  1108,    95,
     254,    91,   254,   396,   396,   396,   102,   415,   396,   396,
     396,   415,   396,  1071,   396,   396,   396,   415,  1182,   415,
     396,   396,   396,   279,   396,   415,   396,  1085,  1086,   125,
     396,   396,   396,    91,   396,   396,   140,   415,   254,   254,
      91,  1099,    91,  1101,   140,  1103,    91,   416,    91,  1107,
    1108,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,    91,   415,   397,    91,   415,
     397,   396,   396,  1183,   421,   422,  1186,    91,   396,   396,
      91,   177,    91,   179,   415,   396,   396,   183,   257,  1199,
    1200,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,  1214,   201,   396,   396,   204,   415,
      91,   396,  1276,   421,   396,  1225,  1226,  1227,   396,  1283,
    1230,  1231,  1232,   257,  1234,  1235,  1184,    26,   396,    28,
      29,   396,   396,   396,   396,   396,   396,  1247,  1248,    91,
     410,   237,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   396,   396,   254,   396,
     396,   396,    61,   396,   415,   421,   396,   396,   396,   396,
     396,   396,   396,  1071,  1232,   396,   396,   415,   410,    91,
     283,   415,   396,    82,   396,   416,   396,  1085,  1086,   396,
     396,  1301,   396,   415,   283,   418,    95,   415,   415,   295,
     296,  1099,   415,  1101,   103,  1103,   415,   254,   396,  1107,
    1108,   133,   396,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   415,   411,   397,   396,   325,
     326,   327,   328,   329,   330,   331,   421,   422,   416,   415,
     396,  1351,   396,   396,   396,   396,  1356,   396,   396,   396,
     396,    91,   396,   140,   396,   396,   155,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,  1377,   411,  1379,
     396,  1381,   397,   396,  1384,   396,    91,   415,   421,    91,
     179,   418,   415,   396,  1394,   415,    91,   396,   187,   396,
     140,   190,    91,   392,   418,   396,   396,  1355,    91,   395,
     396,  1411,   201,   202,   203,   204,   205,   418,   207,   396,
     418,   407,   410,   410,   416,    91,    91,   413,   396,    91,
     415,   417,  1380,   415,   415,   397,  1436,  1437,   416,   415,
     396,  1441,    91,   254,  1232,   415,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      91,   415,   414,   254,   396,   415,    91,  1467,   257,   421,
     415,    91,   397,   262,   396,   396,  1476,  1477,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   415,   396,  1442,   415,   396,   286,   415,    91,
     415,   421,   396,   415,   418,  1505,  1506,   418,  1508,  1509,
     415,   396,    91,  1513,   396,   191,   396,   415,  1518,   415,
    1520,    91,   415,   415,   396,   415,   396,  1527,   396,   396,
     396,   415,   415,   396,   415,   396,   396,   415,  1538,   415,
    1540,   396,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,  1554,   411,   396,   191,  1506,   415,
    1560,   396,  1562,  1563,   415,   421,  1515,  1355,    80,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,  1583,    80,  1585,   415,   348,   934,   959,
     945,  1507,   421,    -1,  1594,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   396,   411,  1609,
      -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
      -1,    -1,    -1,    -1,  1624,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1633,    -1,     0,     1,    -1,     3,     4,
    1640,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    -1,    58,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    80,    -1,    -1,  1506,    84,
      -1,    -1,    87,    -1,    95,    96,    -1,    92,    -1,    94,
      95,    -1,    97,    98,    99,   100,    -1,   101,   103,    -1,
     105,   106,   107,    -1,   109,    -1,    -1,    -1,   119,    -1,
     115,    -1,    -1,    -1,   125,   120,    -1,   121,   123,    -1,
     131,    -1,   133,   128,   129,    -1,    -1,    -1,    -1,   134,
     135,   136,    -1,    -1,    -1,   140,   141,    -1,    -1,   144,
      -1,   152,    -1,    -1,    -1,   150,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,   161,   162,   163,   164,
      -1,   166,    -1,    -1,    -1,    -1,   177,   172,   179,    -1,
      -1,   176,   177,    -1,   179,   180,   181,   182,    -1,    -1,
     191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,
     201,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,   222,    -1,
     225,   226,    -1,    -1,    -1,    -1,   231,   232,   233,   234,
     235,   236,   237,    -1,    -1,    -1,    -1,    -1,    -1,   244,
     245,   246,   247,   248,    -1,   250,   257,   258,    -1,   254,
     255,    -1,    -1,    -1,   259,    -1,   261,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,
     275,   276,   277,   278,    -1,   286,    -1,   282,    -1,    -1,
      -1,   286,    -1,   288,    -1,    -1,   291,   292,   293,   294,
     295,   296,    -1,   298,   299,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,    -1,
      -1,   322,   415,    -1,    -1,    -1,    -1,    -1,   421,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
      -1,    -1,   337,   338,    -1,    -1,    -1,    -1,    -1,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   380,   411,    -1,    -1,    -1,
     385,   386,   387,    -1,    -1,    -1,   421,    -1,    -1,    -1,
     395,   396,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,   413,    -1,
       3,     4,   417,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    65,    -1,    67,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,    -1,
      -1,    -1,   415,    -1,    -1,    -1,    -1,    90,   421,    -1,
      -1,    84,    95,    -1,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    95,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,    -1,    -1,    -1,
     415,    -1,    -1,    -1,    -1,    -1,   421,    -1,   131,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,   179,    -1,    -1,    -1,
     173,    -1,    -1,    -1,   177,    -1,   179,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,   101,   201,    -1,
      -1,   204,   205,    -1,    -1,    -1,    -1,    -1,   201,    -1,
      -1,   204,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,
     223,   224,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,   237,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   256,    -1,   258,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,   269,   270,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,   286,    -1,    -1,    -1,   290,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,
      -1,    -1,   295,   296,   297,    -1,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   222,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,
     413,    -1,    -1,    -1,   417,    -1,    90,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,   102,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,    -1,    -1,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,
     421,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,   183,
      -1,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,    -1,    -1,   201,   415,    -1,
     204,    -1,    -1,    -1,   421,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,    -1,
      -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,    -1,
      -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     254,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,   295,   296,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    95,    -1,    -1,    -1,    -1,   418,    -1,
     102,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   140,   411,
      -1,   395,   396,    -1,    -1,    -1,   418,    -1,    -1,   421,
      -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,   179,    -1,    -1,
      -1,   183,    -1,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,    -1,    -1,   201,
      -1,    -1,   204,   418,    -1,    -1,   421,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,
     421,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   254,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,   295,   296,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,   325,   326,   327,   328,   329,   330,   331,
     420,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    -1,    -1,    -1,    -1,    95,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,   125,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     140,    -1,    -1,   395,   396,    -1,   418,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,
      -1,   413,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,   179,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,   237,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,   254,   415,    -1,   257,   258,    -1,
      -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,   295,   296,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,   140,   418,    -1,
     143,   421,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,   177,   421,   179,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,    -1,    -1,    -1,    -1,    -1,    -1,   418,   201,    -1,
     421,   204,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,    -1,   411,   395,   396,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,   407,    -1,    -1,
      -1,    -1,    -1,   413,   237,    -1,    -1,   417,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   254,    -1,    -1,   257,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,    -1,
      -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   295,   296,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   395,   396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,
     413,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   140,    -1,    -1,   143,
      46,    47,    48,    49,    50,    51,    52,    53,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,    -1,   177,    -1,   179,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,   201,    -1,   421,
     204,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,
      -1,   418,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     254,     3,     4,   257,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,   295,   296,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,   325,   326,   327,   328,   329,   330,   331,   420,   421,
      -1,   237,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,   254,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   295,
     296,   395,   396,    -1,    -1,   301,   302,    -1,    -1,    -1,
      -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,    -1,   335,
     336,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,   237,    -1,    -1,    -1,   395,
     396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   407,   254,    -1,    -1,    -1,    -1,   413,    -1,    -1,
      -1,   417,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,   296,    -1,    -1,    -1,    -1,   301,
     302,    -1,    -1,    -1,    -1,    -1,    -1,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   140,
     411,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     421,    -1,    -1,   335,   336,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,   395,   396,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,
      -1,   413,    -1,    -1,    -1,   417,   237,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,    -1,    -1,   254,   415,    -1,    -1,    -1,    -1,    -1,
     421,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,
      -1,    -1,    -1,    -1,   421,   286,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   295,   296,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,    -1,    -1,    -1,   395,   396,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   407,   254,    -1,    -1,
      -1,    -1,   413,    -1,    -1,    -1,   417,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,   286,
     421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,   296,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,   140,    -1,
     418,    -1,    -1,   421,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,   396,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     407,    -1,    -1,    -1,    -1,   237,   413,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   254,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   140,   295,   296,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,
     140,    -1,    -1,   395,   396,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   407,   254,    -1,    -1,    -1,
      -1,   413,    -1,    -1,    -1,   417,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,   296,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,
      -1,    -1,   421,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,    -1,    -1,    -1,   237,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,   254,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   295,   296,   395,   396,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   407,
      -1,    -1,    -1,    -1,    -1,   413,    -1,    -1,    -1,   417,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,   395,   396,   415,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    -1,   407,    -1,    -1,
      -1,    -1,    -1,   413,    -1,    -1,    -1,   417,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   420,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   420,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     420,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,    -1,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
      -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,    -1,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
      -1,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,    -1,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
      -1,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,    -1,   411,    -1,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,    -1,   411,    -1,    -1,    -1,   415,    -1,    -1,
      -1,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
      -1,   411,    -1,    -1,    -1,   415,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,    -1,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
      -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,
      -1,   421,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,    -1,   411,    -1,    -1,    -1,    -1,
      -1,    -1,   418,    -1,    -1,   421,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,   421,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,
     418,    -1,    -1,   421,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,   421
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     1,     3,     4,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    58,    59,    63,
      64,    70,    71,    75,    76,    77,    80,    84,    87,    92,
      94,    95,    97,    98,    99,   100,   103,   105,   106,   107,
     109,   115,   120,   123,   128,   129,   134,   135,   136,   140,
     141,   144,   150,   154,   161,   162,   163,   164,   166,   172,
     176,   177,   179,   180,   181,   182,   193,   194,   208,   225,
     226,   231,   232,   233,   234,   235,   236,   237,   244,   245,
     246,   247,   248,   250,   254,   255,   259,   261,   265,   275,
     276,   277,   278,   282,   286,   288,   291,   292,   293,   294,
     295,   296,   298,   299,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   337,   338,   380,   385,   386,   387,   395,
     396,   407,   413,   417,   424,   425,   427,   428,   429,   430,
     436,   438,   439,   440,   449,   453,   454,   466,   467,   468,
     469,   470,   471,   414,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   396,   122,   285,   460,   460,   140,   254,   235,   254,
     298,   332,    90,    95,   131,   143,   177,   179,   201,   204,
     441,   451,   460,    95,    81,   200,   303,   304,   305,   306,
     307,   308,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   431,     3,     4,
       6,     7,     8,     9,    10,    11,    14,    15,    16,    17,
      18,    19,    20,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    95,   102,   125,   140,   177,   179,   183,   237,   254,
     395,   407,   413,   417,   451,   466,   471,    91,    84,   176,
     265,   275,   396,   396,   140,   254,   460,    91,   140,    90,
      95,   131,   177,   179,   278,   396,   417,   140,   471,    91,
      93,   130,   140,   253,   451,   460,    77,    95,   125,   177,
     179,   286,   451,    91,    28,    71,    78,   127,   148,   167,
     255,   266,   286,   416,   451,    28,   254,   255,   439,   440,
     105,   417,   305,    95,   396,   172,   270,   286,   396,   140,
     141,   254,   255,    84,    90,    95,   131,   147,   168,   173,
     177,   179,   183,   275,   290,   297,   327,   451,   471,    69,
      95,   102,   140,   177,   179,   183,   451,   471,   396,   396,
     208,   237,   395,   451,   140,   254,   471,    56,   155,   158,
     168,   171,   207,   241,   287,   396,   464,   124,   137,   138,
     144,   188,   189,   228,   230,   283,   426,   179,    91,    43,
      79,    80,    91,   154,   388,   431,   417,    95,   176,   177,
     179,   286,   305,   416,   451,    91,   110,   180,   220,   416,
     396,   108,   218,   455,   293,   396,    90,    95,   102,   131,
     140,   165,   179,   183,   243,   451,   471,    91,    95,   131,
     179,   257,   471,    91,    95,   131,   179,   257,   431,    69,
      95,   172,   177,   179,   183,   251,   301,   302,   335,   336,
     471,    84,   140,   176,   254,   275,   301,   302,   335,   336,
     471,   154,   254,   275,   441,   441,   417,   451,   451,   451,
     397,   419,    20,   140,   254,   395,   466,   470,   471,   470,
     471,   470,   471,     0,   414,   414,   414,   414,   414,   414,
     414,    78,   167,   279,   280,   442,   451,    95,    96,   119,
     125,   131,   133,   152,   177,   179,   191,   223,   257,   258,
     278,   286,   322,   437,   450,   451,   417,   417,   397,   419,
     414,   414,   414,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   411,   414,   421,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   414,   421,   470,   471,   470,   471,   470,   471,
     470,   471,   470,   471,   470,   471,   470,   471,   470,   471,
     470,   471,   470,   471,   470,   471,   470,   471,   254,   470,
     471,   396,   470,   471,   470,   471,   470,   471,   470,   471,
     470,   471,   470,   471,   470,   471,   470,   471,   470,   471,
     470,   471,   470,   471,   470,   471,   470,   471,   416,   396,
     431,   451,   257,   396,   396,   451,   396,   396,   396,    91,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   396,    95,   198,
     213,   456,   416,   396,   396,   291,   293,   465,   416,   416,
     419,   471,   471,   471,   419,   406,   407,   408,   409,   411,
     415,   415,   416,   283,   415,    91,   416,   257,   396,   261,
     396,   396,   396,   257,   254,   415,    95,   396,   451,   396,
     396,   396,   255,   286,   460,   257,   133,   223,   286,   305,
     451,   460,   451,   257,    78,    85,   145,   146,   184,   185,
     186,   221,   266,   267,   305,   309,   432,    46,    47,    48,
      49,    50,    51,    52,    53,   254,   255,   442,   396,   254,
     396,   396,   177,   179,   415,   147,   167,   168,   183,   257,
     396,   451,   471,   396,    95,   125,   177,   179,   451,   257,
     396,   396,   396,   396,   396,   396,   396,   465,   396,   396,
     471,   471,   415,   257,   286,   396,   396,   396,   396,   465,
     415,   451,   283,   396,   416,   283,   415,   396,   381,   382,
     383,   384,   433,   426,    91,   396,     5,    91,    91,   455,
      91,   140,   254,    91,   455,   254,   396,   471,   396,   396,
     171,   241,   339,   340,   341,   342,   434,   471,   466,   396,
     451,   455,   471,   173,   278,   466,   471,   257,   396,    91,
     396,   396,   396,   465,   396,   415,   396,   396,   396,   396,
     415,   396,   396,   396,   396,   286,   396,   167,   173,   305,
     451,   396,   396,   465,   396,   396,   396,   396,   396,   415,
     396,   396,   396,   471,   471,   471,   471,   415,    91,   124,
     133,   471,   254,   470,   471,   471,   417,   416,   416,   418,
     418,    95,   177,   179,   448,   451,    90,    91,    95,   131,
     165,   168,   179,   219,   447,    26,    28,    29,    61,    82,
      95,   103,   155,   179,   187,   190,   202,   203,   205,   207,
     257,   262,   286,   396,   443,   444,   451,   461,    65,    67,
      90,    95,   131,   133,   147,   165,   168,   179,   205,   223,
     224,   256,   258,   269,   270,   274,   286,   290,   396,   445,
     446,   451,    91,   173,   177,   179,   242,   286,    95,   213,
     292,   396,   452,   101,   121,   222,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   462,   471,   396,   396,    89,    90,    95,   125,
     177,   179,   257,   258,   471,   431,   471,   396,   254,   254,
     470,   471,   471,   470,   471,   470,   470,   470,   470,   470,
     470,   470,   470,   471,   470,   471,   470,   471,   470,   471,
     470,   471,   470,   471,   471,   471,   471,   471,   471,   471,
     471,   470,   471,   470,   471,   470,   471,   470,   471,   471,
     470,   471,   471,   418,   418,   418,   418,   418,   418,   418,
     418,   415,   415,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   415,   415,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   415,   415,   415,
     415,   415,   415,   415,   415,   418,   418,   415,   415,   418,
     418,   418,   418,   418,   418,   418,   418,   254,   396,   396,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   396,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   396,   396,   254,
     466,   466,   471,   471,   471,   471,   471,   471,   471,   471,
     396,   254,   254,    91,   415,   254,   396,   396,   396,   415,
     471,   396,   396,    70,   262,   396,   462,   396,   396,   471,
     396,   110,   180,   220,   416,   396,   415,   415,   396,   396,
     471,   396,   133,   223,   257,   149,   289,   465,   396,   415,
     273,   396,   292,   451,   452,   396,   396,   396,    91,   471,
     396,   396,   471,   140,   415,   254,   254,   471,    91,    91,
      91,   416,    91,    91,   415,   415,   415,   397,   415,    91,
     415,   397,   397,   416,   419,   415,   396,   471,   471,   396,
      91,   396,   396,   471,   471,    91,    91,   415,   415,   420,
     254,   466,   396,   396,   396,   257,   396,   396,    89,   171,
     241,   458,   209,   215,   396,    70,   262,   396,   451,   471,
     471,   451,   396,   396,   396,    95,   143,   177,   179,   257,
     451,   471,    95,   143,   177,   179,   257,   451,   471,   471,
     471,    82,    83,   171,   241,   284,   457,   396,   396,    70,
     262,   415,   444,   396,    91,   257,   396,   396,   396,   462,
     396,   458,   149,   262,   289,   396,   457,   396,    91,    57,
     196,   199,   463,   396,   396,   286,   471,   286,   471,    70,
     262,   396,   415,   446,   396,   396,   396,   177,   179,   451,
     457,   452,   396,   460,   396,   471,   396,   396,   396,   471,
     396,   415,   415,   415,   420,   422,   422,   470,   471,   470,
     471,   470,   471,   471,   471,   470,   471,   470,   471,   470,
     471,   470,   471,   470,   471,   431,   418,   415,   418,   415,
     416,   419,   420,   420,   415,   415,   283,   415,    91,    44,
      91,   396,   462,   415,   415,   396,   451,   455,   471,   466,
     471,   396,   415,   462,   396,   396,   415,   471,   471,   452,
     396,   415,   471,   283,   254,   389,   390,   391,   435,   396,
     471,   471,   471,   396,   471,   471,   470,   471,    28,    29,
      73,   459,   471,   471,   415,   415,   415,   415,   133,   471,
     471,   397,   416,   396,   415,   396,   451,   396,   396,   396,
     396,   451,   396,   396,   396,   471,   396,    70,   262,    70,
     262,    91,   396,   396,   471,   396,   396,   397,   470,   471,
     418,   418,   418,   418,   418,   418,   415,   415,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   396,   471,
     471,   466,   471,   471,   396,   140,    91,   415,    91,   415,
     418,   396,   471,   415,    91,   415,   397,   416,   419,   415,
     396,   396,   471,   415,   140,    91,   392,   418,   415,   420,
     415,   396,   396,   471,   471,    91,   415,   415,   471,   466,
     396,   418,   418,   471,   471,   471,   418,   418,   419,   420,
     415,   415,   416,   415,    91,   415,    91,   396,   471,   470,
     471,   459,   471,   471,   415,   471,   416,   435,   415,   471,
     397,   471,   415,   415,    91,   471,   418,   418,   471,   471,
     396,   254,    91,   415,    91,   415,   420,   415,   471,   254,
     392,   393,   396,   415,   471,   415,   471,   471,   415,   420,
     415,    91,   415,    91,   397,   396,   396,   415,   471,   471,
     396,   396,   415,    91,   415,   471,   418,   415,   396,   279,
     418,   415,   396,   415,    91,   396,   191,   471,   396,   415,
      91,   415,   415,   396,   415,   396,   415,   396,   396,   471,
     396,   415,   415,   415,   415,   396,   396,   471,   396,   415,
     415,   415,   396,   471,   396,   191,   396
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   423,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   425,   425,   425,   425,
     425,   425,   425,   426,   426,   426,   426,   426,   426,   426,
     426,   427,   427,   427,   427,   427,   427,   427,   427,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     429,   429,   429,   429,   429,   429,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   433,   433,   433,   433,   434,   434,   434,   434,   434,
     434,   435,   435,   435,   436,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   438,   438,   438,   438,   438,   438,
     439,   439,   439,   439,   439,   439,   440,   440,   440,   441,
     441,   441,   441,   441,   441,   441,   442,   442,   442,   442,
     442,   443,   443,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   445,   445,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   448,   448,   448,
     448,   449,   449,   449,   449,   449,   449,   450,   450,   450,
     450,   450,   451,   451,   452,   452,   453,   453,   453,   453,
     453,   454,   454,   454,   454,   455,   455,   456,   456,   456,
     457,   457,   457,   457,   457,   458,   458,   458,   459,   459,
     460,   460,   461,   461,   461,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   463,   463,   463,   464,   464,   464,
     464,   464,   464,   465,   465,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   467,   467,   467,   467,   467,   468,
     469,   469,   469,   469,   469,   469,   469,   469,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     4,     3,     2,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     9,     5,     4,     1,
       3,     2,     2,     3,     8,     2,     1,     3,     2,     2,
       2,     4,     4,     6,     2,     2,     2,     7,     2,     2,
       3,     3,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     4,     6,     3,     5,     3,     4,     6,
       5,     7,     5,     7,     4,     8,     4,     8,     2,     2,
       2,     2,     1,     7,     6,     6,     6,    10,    10,     6,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     4,     3,     3,     4,
       3,     4,    19,     8,    12,     8,     3,     5,     2,     4,
       4,     6,     2,     1,     1,     1,     2,    17,     2,     2,
       2,     3,     2,     2,     8,     3,     3,     3,     3,     3,
       4,     4,     2,     2,     3,     2,     2,     2,     8,     3,
       3,     3,     3,     3,     4,     4,     2,     2,     2,     3,
       2,     2,     4,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     4,     3,     4,     4,     8,     3,
       3,     3,     3,     8,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     4,     2,
       3,     3,     3,     3,     3,     3,     4,     5,     5,     4,
       4,     4,     4,     3,     3,     4,     3,     3,     3,     3,
       4,     2,     3,     4,     4,     4,     3,     5,     3,     4,
       5,     4,     4,     5,     5,     5,     6,     6,     2,     3,
       3,     3,     3,     3,     4,     2,     3,     4,     4,     3,
       3,     3,     4,     4,     3,     5,     6,     6,     4,     4,
       4,    15,    12,    13,    18,     5,     3,     3,     6,     4,
       4,     3,     3,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     2,     3,     3,     3,     3,     3,
       4,     4,     4,     2,     1,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     2,
       1,     1,     2,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     1,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     2,
       2,     3,     2,     2,     2,     3,     1,     2,     2,     2,
       2,     4,     2,     3,     2,     2,     2,     1,     2,     2,
       2,     3,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     8,     5,    10,     5,
       3,     3,     5,     7,     3,     3,     5,     7,     1,     1,
       3,     5,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     6,     4,
       4,     1,     4,     4,     4,     4,     6,     6,     6,     6,
       1,     1,     4,     4,     4,     4,     4,     8,     6,     6,
       6,     4,     1,     1,     1,     6,     6,     6,     6,     4,
       4,     4,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     2,     1,     4,     3,     4,     6,
       8,     5,     7,     3,     5,     3,     3,     3,     3,     3,
       3,     4,     4,     4,     4,     6,     4,     4,     1,     4,
       4,     4,     4,     6,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     8,
       6,     6,     6,     4,     1,     1,     1,     6,     4,     4,
       4,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     2
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
  case 3: /* list: asgn '\n'  */
#line 532 "pars.y"
                    {}
#line 4783 "y.tab.c"
    break;

  case 4: /* list: vasgn '\n'  */
#line 533 "pars.y"
                     {}
#line 4789 "y.tab.c"
    break;

  case 5: /* list: rasgn '\n'  */
#line 534 "pars.y"
                     {}
#line 4795 "y.tab.c"
    break;

  case 6: /* list: expr '\n'  */
#line 535 "pars.y"
                    {
	    result = (yyvsp[-1].val);
	}
#line 4803 "y.tab.c"
    break;

  case 7: /* list: vexpr '\n'  */
#line 538 "pars.y"
                     {
	    result = *(yyvsp[-1].ptr);
	}
#line 4811 "y.tab.c"
    break;

  case 8: /* list: parmset '\n'  */
#line 541 "pars.y"
                       {}
#line 4817 "y.tab.c"
    break;

  case 9: /* list: regionset '\n'  */
#line 542 "pars.y"
                         {}
#line 4823 "y.tab.c"
    break;

  case 10: /* list: setaxis '\n'  */
#line 543 "pars.y"
                       {}
#line 4829 "y.tab.c"
    break;

  case 11: /* list: setvelocity '\n'  */
#line 544 "pars.y"
                           {}
#line 4835 "y.tab.c"
    break;

  case 12: /* list: db '\n'  */
#line 545 "pars.y"
                  {}
#line 4841 "y.tab.c"
    break;

  case 13: /* list: set_setprop '\n'  */
#line 546 "pars.y"
                           {}
#line 4847 "y.tab.c"
    break;

  case 14: /* list: setprint '\n'  */
#line 547 "pars.y"
                        {}
#line 4853 "y.tab.c"
    break;

  case 15: /* list: error '\n'  */
#line 548 "pars.y"
                     {
	    return 1;
	}
#line 4861 "y.tab.c"
    break;

  case 16: /* setprint: PRINT printer CHRSTR  */
#line 554 "pars.y"
                             {
	    if ((yyvsp[-1].pset) == FILEP) {
		set_printer(FILEP, (yyvsp[0].pset));
	    }
	    else {
		set_printer((yyvsp[-1].pset), (yyvsp[0].pset));
	    }
	    free((char *) (yyvsp[0].pset));
	}
#line 4875 "y.tab.c"
    break;

  case 17: /* setprint: PRINT TO printer CHRSTR  */
#line 563 "pars.y"
                                  {
	    if ((yyvsp[-1].pset) == FILEP) {
		set_printer(FILEP, (yyvsp[0].pset));
	    }
	    else {
		set_printer((yyvsp[-1].pset), (yyvsp[0].pset));
	    }
	    free((char *) (yyvsp[0].pset));
	}
#line 4889 "y.tab.c"
    break;

  case 18: /* setprint: PRINT TO printer  */
#line 572 "pars.y"
                           {
	    if ((yyvsp[0].pset) == FILEP) {
		set_printer(FILEP, NULL);
	    }
	    else {
		set_printer((yyvsp[0].pset), NULL);
	    }
	}
#line 4902 "y.tab.c"
    break;

  case 19: /* setprint: DEVICE NUMBER  */
#line 580 "pars.y"
                        {
	    tdevice = (int) (yyvsp[0].val);
	}
#line 4910 "y.tab.c"
    break;

  case 20: /* setprint: HARDCOPY DEVICE NUMBER  */
#line 583 "pars.y"
                                 {
	    hdevice = (int) (yyvsp[0].val);
	}
#line 4918 "y.tab.c"
    break;

  case 21: /* setprint: HARDCOPY  */
#line 586 "pars.y"
                   {
	    do_hardcopy();
	}
#line 4926 "y.tab.c"
    break;

  case 22: /* setprint: PS LINEWIDTH NUMBER  */
#line 590 "pars.y"
        { 
	    extern int pslwfactor; /* fudge factor for linewidths in the PS driver */
	    pslwfactor = (yyvsp[0].val); 
	}
#line 4935 "y.tab.c"
    break;

  case 23: /* printer: PSMONOP  */
#line 597 "pars.y"
                { (yyval.pset) = GR_PS_P; }
#line 4941 "y.tab.c"
    break;

  case 24: /* printer: PSMONOL  */
#line 598 "pars.y"
                  { (yyval.pset) = GR_PS_L; }
#line 4947 "y.tab.c"
    break;

  case 25: /* printer: MIFP  */
#line 599 "pars.y"
               { (yyval.pset) = GR_MIF_P; }
#line 4953 "y.tab.c"
    break;

  case 26: /* printer: MIFL  */
#line 600 "pars.y"
               { (yyval.pset) = GR_MIF_L; }
#line 4959 "y.tab.c"
    break;

  case 27: /* printer: GIFP  */
#line 601 "pars.y"
               { (yyval.pset) = GR_GIFP; }
#line 4965 "y.tab.c"
    break;

  case 28: /* printer: GIFL  */
#line 602 "pars.y"
               { (yyval.pset) = GR_GIFL; }
#line 4971 "y.tab.c"
    break;

  case 29: /* printer: HARDCOPY  */
#line 603 "pars.y"
                   { (yyval.pset) = hdevice; }
#line 4977 "y.tab.c"
    break;

  case 30: /* printer: FILEP  */
#line 604 "pars.y"
                { (yyval.pset) = FILEP; }
#line 4983 "y.tab.c"
    break;

  case 31: /* regionset: REGNUM onoff  */
#line 608 "pars.y"
                     {
	    rg[(yyvsp[-1].pset)].active = (yyvsp[0].pset);
	}
#line 4991 "y.tab.c"
    break;

  case 32: /* regionset: REGNUM TYPE regiontype  */
#line 611 "pars.y"
                                 {
	    rg[(yyvsp[-2].pset)].type = (yyvsp[0].pset);
	}
#line 4999 "y.tab.c"
    break;

  case 33: /* regionset: REGNUM COLOR NUMBER  */
#line 614 "pars.y"
                              {
	    rg[(yyvsp[-2].pset)].color = checkon(COLOR, rg[(yyvsp[-2].pset)].color, (int) (yyvsp[0].val));
	}
#line 5007 "y.tab.c"
    break;

  case 34: /* regionset: REGNUM LINESTYLE NUMBER  */
#line 617 "pars.y"
                                  {
	    rg[(yyvsp[-2].pset)].lines = checkon(LINESTYLE, rg[(yyvsp[-2].pset)].lines, (int) (yyvsp[0].val));
	}
#line 5015 "y.tab.c"
    break;

  case 35: /* regionset: REGNUM LINEWIDTH NUMBER  */
#line 620 "pars.y"
                                  {
	    rg[(yyvsp[-2].pset)].linew = checkon(LINEWIDTH, rg[(yyvsp[-2].pset)].linew, (int) (yyvsp[0].val));
	}
#line 5023 "y.tab.c"
    break;

  case 36: /* regionset: REGNUM LINE expr ',' expr ',' expr ',' expr  */
#line 624 "pars.y"
        {
	    rg[(yyvsp[-8].pset)].x1 = (yyvsp[-6].val);
	    rg[(yyvsp[-8].pset)].y1 = (yyvsp[-4].val);
	    rg[(yyvsp[-8].pset)].x2 = (yyvsp[-2].val);
	    rg[(yyvsp[-8].pset)].y2 = (yyvsp[0].val);
	}
#line 5034 "y.tab.c"
    break;

  case 37: /* regionset: REGNUM XY expr ',' expr  */
#line 631 "pars.y"
        {
	    if (rg[(yyvsp[-4].pset)].x == NULL || rg[(yyvsp[-4].pset)].n == 0) {
		rg[(yyvsp[-4].pset)].n = 0;
		rg[(yyvsp[-4].pset)].x = (double *) calloc(1, sizeof(double));
		rg[(yyvsp[-4].pset)].y = (double *) calloc(1, sizeof(double));
	    } else {
		rg[(yyvsp[-4].pset)].x = (double *) realloc(rg[(yyvsp[-4].pset)].x, (rg[(yyvsp[-4].pset)].n + 1) * sizeof(double));
		rg[(yyvsp[-4].pset)].y = (double *) realloc(rg[(yyvsp[-4].pset)].y, (rg[(yyvsp[-4].pset)].n + 1) * sizeof(double));
	    }
	    rg[(yyvsp[-4].pset)].x[rg[(yyvsp[-4].pset)].n] = (yyvsp[-2].val);
	    rg[(yyvsp[-4].pset)].y[rg[(yyvsp[-4].pset)].n] = (yyvsp[0].val);
	    rg[(yyvsp[-4].pset)].n++;
	}
#line 5052 "y.tab.c"
    break;

  case 38: /* regionset: LINK REGNUM TO GRAPHNO  */
#line 644 "pars.y"
                                 {
	    rg[(yyvsp[-2].pset)].linkto[(yyvsp[0].pset)] = TRUE;
	}
#line 5060 "y.tab.c"
    break;

  case 39: /* parmset: REDRAW  */
#line 650 "pars.y"
               {
	    drawgraph();
	}
#line 5068 "y.tab.c"
    break;

  case 40: /* parmset: AUTO REDRAW onoff  */
#line 653 "pars.y"
                            {
	    auto_redraw = ((yyvsp[0].pset) == ON);
	}
#line 5076 "y.tab.c"
    break;

  case 41: /* parmset: CD CHRSTR  */
#line 656 "pars.y"
                    {
	    char buf[MAXPATHLEN];
	    strcpy(buf, (char *) (yyvsp[0].pset));
	    expand_tilde(buf); 
	    if (chdir(buf) >= 0) {
		strcpy(workingdir, buf);
	    	if (inwin) {
		    set_title(workingdir);
	        }
	    }
	    free((char *) (yyvsp[0].pset));
	}
#line 5093 "y.tab.c"
    break;

  case 42: /* parmset: ECHO CHRSTR  */
#line 668 "pars.y"
                      {
	    if (inwin) {
		set_left_footer((yyvsp[0].pset));
	    }
	    else {
		printf("%s\n", (yyvsp[0].pset));
	    }
	    free((char *) (yyvsp[0].pset));
	}
#line 5107 "y.tab.c"
    break;

  case 43: /* parmset: BACKGROUND COLOR NUMBER  */
#line 677 "pars.y"
                                  {
	    setbgcolor((int) (yyvsp[0].val));
	}
#line 5115 "y.tab.c"
    break;

  case 44: /* parmset: CMAP NUMBER ',' NUMBER ',' NUMBER ',' NUMBER  */
#line 680 "pars.y"
                                                       {
	    xlibsetcmap((int) (yyvsp[-6].val), (int) (yyvsp[-4].val), (int) (yyvsp[-2].val), (int) (yyvsp[0].val));
	}
#line 5123 "y.tab.c"
    break;

  case 45: /* parmset: CORIE torf  */
#line 683 "pars.y"
                     {
	    SetCorieTime((int) (yyvsp[0].pset) == TRUEP);
	}
#line 5131 "y.tab.c"
    break;

  case 46: /* parmset: EXIT  */
#line 686 "pars.y"
               {
	    exit(0);
	}
#line 5139 "y.tab.c"
    break;

  case 47: /* parmset: PAGE LAYOUT pagelayout  */
#line 690 "pars.y"
        {
            set_pagelayout((yyvsp[0].pset));
        }
#line 5147 "y.tab.c"
    break;

  case 48: /* parmset: STATUSBAR onoff  */
#line 694 "pars.y"
        {
            set_toolbars((yyvsp[-1].pset), (yyvsp[0].pset) == ON);
        }
#line 5155 "y.tab.c"
    break;

  case 49: /* parmset: TOOLBAR onoff  */
#line 698 "pars.y"
        {
            set_toolbars((yyvsp[-1].pset), (yyvsp[0].pset) == ON);
        }
#line 5163 "y.tab.c"
    break;

  case 50: /* parmset: LOCATORBAR onoff  */
#line 702 "pars.y"
        {
            set_toolbars((yyvsp[-1].pset), (yyvsp[0].pset) == ON);
        }
#line 5171 "y.tab.c"
    break;

  case 51: /* parmset: DRAW2 expr ',' expr  */
#line 706 "pars.y"
                              {
	    if (inwin) {
		my_draw2((double) (yyvsp[-2].val), (double) (yyvsp[0].val));
		flush_pending();
	    }
	}
#line 5182 "y.tab.c"
    break;

  case 52: /* parmset: MOVE2 expr ',' expr  */
#line 712 "pars.y"
                              {
	    if (inwin) {
		my_move2((double) (yyvsp[-2].val), (double) (yyvsp[0].val));
	    }
	}
#line 5192 "y.tab.c"
    break;

  case 53: /* parmset: SYMBOL expr ',' expr ',' NUMBER  */
#line 717 "pars.y"
                                          {
	    if (inwin) {
		double x = (double) (yyvsp[-4].val);
		double y = (double) (yyvsp[-2].val);
		drawpolysym(&x, &y, 1, (int) (yyvsp[0].val), 0, 0, 1.0);
		flush_pending();
	    }
	}
#line 5205 "y.tab.c"
    break;

  case 54: /* parmset: COLOR NUMBER  */
#line 725 "pars.y"
                       {
	    if (inwin) {
		setcolor((int) (yyvsp[0].val));
	    }
	}
#line 5215 "y.tab.c"
    break;

  case 55: /* parmset: LINEWIDTH NUMBER  */
#line 730 "pars.y"
                           {
	    if (inwin) {
		setlinewidth((int) (yyvsp[0].val));
	    }
	}
#line 5225 "y.tab.c"
    break;

  case 56: /* parmset: LINESTYLE NUMBER  */
#line 735 "pars.y"
                           {
	    if (inwin) {
		setlinestyle((int) (yyvsp[0].val));
	    }
	}
#line 5235 "y.tab.c"
    break;

  case 57: /* parmset: WRITE STRING expr ',' expr ',' CHRSTR  */
#line 740 "pars.y"
                                                {
	}
#line 5242 "y.tab.c"
    break;

  case 58: /* parmset: PAGE direction  */
#line 744 "pars.y"
        {
	    switch ((yyvsp[0].pset)) {
	    case UP:
		gwindup_proc();
		break;
	    case DOWN:
		gwinddown_proc();
		break;
	    case RIGHT:
		gwindright_proc();
		break;
	    case LEFT:
		gwindleft_proc();
		break;
	    case IN:
		gwindshrink_proc();
		break;
	    case OUT:
		gwindexpand_proc();
		break;
	    }
	}
#line 5269 "y.tab.c"
    break;

  case 59: /* parmset: PAGE NUMBER  */
#line 766 "pars.y"
                      {
	    scroll_proc((int) (yyvsp[0].val));
	}
#line 5277 "y.tab.c"
    break;

  case 60: /* parmset: PAGE INOUT NUMBER  */
#line 769 "pars.y"
                            {
	    scrollinout_proc((int) (yyvsp[0].val));
	}
#line 5285 "y.tab.c"
    break;

  case 61: /* parmset: LINK PAGE onoff  */
#line 772 "pars.y"
                          {
	    scrolling_islinked = (yyvsp[0].pset) == ON;
	}
#line 5293 "y.tab.c"
    break;

  case 62: /* parmset: DOUBLEBUFFER torf  */
#line 775 "pars.y"
                            {
	    my_doublebuffer((yyvsp[0].pset) == TRUEP);
	}
#line 5301 "y.tab.c"
    break;

  case 63: /* parmset: FRONTBUFFER torf  */
#line 778 "pars.y"
                           {
	    my_frontbuffer((yyvsp[0].pset) == TRUEP);
	}
#line 5309 "y.tab.c"
    break;

  case 64: /* parmset: BACKBUFFER torf  */
#line 781 "pars.y"
                          {
	    my_backbuffer((yyvsp[0].pset) == TRUEP);
	}
#line 5317 "y.tab.c"
    break;

  case 65: /* parmset: SWAPBUFFER  */
#line 784 "pars.y"
                     {
	    my_swapbuffer();
	}
#line 5325 "y.tab.c"
    break;

  case 66: /* parmset: SLEEP NUMBER  */
#line 787 "pars.y"
                       {
	    sleep((int) (yyvsp[0].val));
	}
#line 5333 "y.tab.c"
    break;

  case 67: /* parmset: DELAYP NUMBER  */
#line 790 "pars.y"
                        {	/* TODO add delay function */
	}
#line 5340 "y.tab.c"
    break;

  case 68: /* parmset: ABORT torf  */
#line 792 "pars.y"
                     {		/* TODO add abort flag and function */
	}
#line 5347 "y.tab.c"
    break;

  case 69: /* parmset: GETP CHRSTR  */
#line 795 "pars.y"
        {
	    gotparams = TRUE;
	    strcpy(paramfile, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5357 "y.tab.c"
    break;

  case 70: /* parmset: PUTP CHRSTR  */
#line 801 "pars.y"
        {
	    if (!fexists((char *) (yyvsp[0].pset))) {
		FILE *pp = fopen((char *) (yyvsp[0].pset), "w");
		if (pp != NULL) {
		    putparms(cg, pp, 0);
		    fclose(pp);
		} else {
		    errwin("Unable to write parameter file");
		}
	    }
	    free((char *) (yyvsp[0].pset));
	}
#line 5374 "y.tab.c"
    break;

  case 71: /* parmset: WITH GRAPHNO  */
#line 813 "pars.y"
                       {
	    cg = (int) (yyvsp[0].pset);
	    g[cg].parmsread = TRUE;
	    change_gno = cg;
	}
#line 5384 "y.tab.c"
    break;

  case 72: /* parmset: WITH SETNUM  */
#line 818 "pars.y"
                      {
	    curset = (int) (yyvsp[0].pset);
	}
#line 5392 "y.tab.c"
    break;

  case 73: /* parmset: SETNUM LINK sourcetype CHRSTR  */
#line 823 "pars.y"
                                        {
	    set_hotlink(cg, (yyvsp[-3].pset), 1, (char *) (yyvsp[0].pset), (yyvsp[-1].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5401 "y.tab.c"
    break;

  case 74: /* parmset: GRAPHNO '.' SETNUM LINK sourcetype CHRSTR  */
#line 827 "pars.y"
                                                    {
	    set_hotlink((yyvsp[-5].pset), (yyvsp[-3].pset), 1, (char *) (yyvsp[0].pset), (yyvsp[-1].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5410 "y.tab.c"
    break;

  case 75: /* parmset: SETNUM LINK onoff  */
#line 831 "pars.y"
                            {
	    set_hotlink(cg, (yyvsp[-2].pset), (yyvsp[0].pset) == ON, NULL, 0);
	}
#line 5418 "y.tab.c"
    break;

  case 76: /* parmset: GRAPHNO '.' SETNUM LINK onoff  */
#line 834 "pars.y"
                                        {
	    set_hotlink((yyvsp[-4].pset), (yyvsp[-2].pset), (yyvsp[0].pset) == ON, NULL, 0);
	}
#line 5426 "y.tab.c"
    break;

  case 77: /* parmset: ACTIVATE SETNUM NUMBER  */
#line 838 "pars.y"
                                 {
	    do_activateset(cg, (yyvsp[-1].pset), (int) (yyvsp[0].val));
	}
#line 5434 "y.tab.c"
    break;

  case 78: /* parmset: ACTIVATE SETNUM xytype NUMBER  */
#line 841 "pars.y"
                                        {
            activateset(cg, (yyvsp[-2].pset));
            settype(cg, (yyvsp[-2].pset), (yyvsp[-1].pset));
            setlength(cg, (yyvsp[-2].pset), (yyvsp[0].val));
            setcomment(cg, (yyvsp[-2].pset), "Generated set");
            updatesetminmax(cg, (yyvsp[-2].pset));
	}
#line 5446 "y.tab.c"
    break;

  case 79: /* parmset: ACTIVATE GRAPHNO '.' SETNUM xytype NUMBER  */
#line 848 "pars.y"
                                                    {
            activateset((yyvsp[-4].pset), (yyvsp[-2].pset));
            settype((yyvsp[-4].pset), (yyvsp[-2].pset), (yyvsp[-1].pset));
            setlength((yyvsp[-4].pset), (yyvsp[-2].pset), (yyvsp[0].val));
            setcomment((yyvsp[-4].pset), (yyvsp[-2].pset), "Generated set");
            updatesetminmax((yyvsp[-4].pset), (yyvsp[-2].pset));
	}
#line 5458 "y.tab.c"
    break;

  case 80: /* parmset: SETNUM POINT expr ',' expr  */
#line 855 "pars.y"
                                     {
	    add_point(cg, (yyvsp[-4].pset), (yyvsp[-2].val), (yyvsp[0].val), 0.0, 0.0, XY);
	}
#line 5466 "y.tab.c"
    break;

  case 81: /* parmset: GRAPHNO '.' SETNUM POINT expr ',' expr  */
#line 858 "pars.y"
                                                 {
	    add_point((yyvsp[-6].pset), (yyvsp[-4].pset), (yyvsp[-2].val), (yyvsp[0].val), 0.0, 0.0, XY);
	}
#line 5474 "y.tab.c"
    break;

  case 82: /* parmset: SETNUM DROP NUMBER ',' NUMBER  */
#line 862 "pars.y"
                                        {
	    int start = (int) (yyvsp[-2].val) - 1;
	    int stop = (int) (yyvsp[0].val) - 1;
	    int dist = stop - start + 1;
	    if (dist > 0 && start >= 0) {
	        droppoints(cg, (yyvsp[-4].pset), start, stop, dist);
	    }
	}
#line 5487 "y.tab.c"
    break;

  case 83: /* parmset: GRAPHNO '.' SETNUM DROP NUMBER ',' NUMBER  */
#line 870 "pars.y"
                                                    {
	    int start = (int) (yyvsp[-2].val) - 1;
	    int stop = (int) (yyvsp[0].val) - 1;
	    int dist = stop - start + 1;
	    if (dist > 0 && start >= 0) {
	        droppoints((yyvsp[-6].pset), (yyvsp[-4].pset), start, stop, dist);
	    }
	}
#line 5500 "y.tab.c"
    break;

  case 84: /* parmset: COPY SETNUM TO SETNUM  */
#line 878 "pars.y"
                                {
	    do_copyset(cg, (yyvsp[-2].pset), cg, (yyvsp[0].pset));
	}
#line 5508 "y.tab.c"
    break;

  case 85: /* parmset: COPY GRAPHNO '.' SETNUM TO GRAPHNO '.' SETNUM  */
#line 881 "pars.y"
                                                        {
	    do_copyset((yyvsp[-6].pset), (yyvsp[-4].pset), (yyvsp[-2].pset), (yyvsp[0].pset));
	}
#line 5516 "y.tab.c"
    break;

  case 86: /* parmset: MOVE SETNUM TO SETNUM  */
#line 884 "pars.y"
                                {
	    do_moveset(cg, (yyvsp[-2].pset), cg, (yyvsp[0].pset));
	}
#line 5524 "y.tab.c"
    break;

  case 87: /* parmset: MOVE GRAPHNO '.' SETNUM TO GRAPHNO '.' SETNUM  */
#line 887 "pars.y"
                                                        {
	    do_moveset((yyvsp[-6].pset), (yyvsp[-4].pset), (yyvsp[-2].pset), (yyvsp[0].pset));
	}
#line 5532 "y.tab.c"
    break;

  case 88: /* parmset: KILL SETNUM  */
#line 891 "pars.y"
        {
	    killset(cg, (yyvsp[0].pset));
	}
#line 5540 "y.tab.c"
    break;

  case 89: /* parmset: KILL SETS  */
#line 895 "pars.y"
        {
	    int i;
	    for (i = 0; i < g[cg].maxplot; i++) {
		killset(cg, i);
	    }
	}
#line 5551 "y.tab.c"
    break;

  case 90: /* parmset: KILL GRAPHNO  */
#line 902 "pars.y"
        {
	    kill_graph((yyvsp[0].pset));
	}
#line 5559 "y.tab.c"
    break;

  case 91: /* parmset: KILL GRAPHS  */
#line 906 "pars.y"
        {
	    kill_graph(maxgraph);
	}
#line 5567 "y.tab.c"
    break;

  case 92: /* parmset: FLUSH  */
#line 910 "pars.y"
        {
	    wipeout(0);
	}
#line 5575 "y.tab.c"
    break;

  case 93: /* parmset: LOAD VAR NUMBER ',' expr ',' expr  */
#line 914 "pars.y"
        {
	    int i;
	    for (i = 0; i < (int) (yyvsp[-4].val); i++) {
		(yyvsp[-5].ptr)[i] = (yyvsp[-2].val) + (yyvsp[0].val) * i;
	    }
	}
#line 5586 "y.tab.c"
    break;

  case 94: /* parmset: REGRESS '(' SETNUM ',' NUMBER ')'  */
#line 921 "pars.y"
        {
	    int setno = (yyvsp[-3].pset), ideg = (int) (yyvsp[-1].val);
	    do_regress(setno, ideg, 0, -1, 0);
	}
#line 5595 "y.tab.c"
    break;

  case 95: /* parmset: runtype '(' SETNUM ',' NUMBER ')'  */
#line 926 "pars.y"
        {
	    do_running_command((yyvsp[-5].pset), (yyvsp[-3].pset), (int) (yyvsp[-1].val));
	}
#line 5603 "y.tab.c"
    break;

  case 96: /* parmset: ffttype '(' SETNUM ',' NUMBER ')'  */
#line 930 "pars.y"
        {
	    do_fourier_command((yyvsp[-5].pset), (yyvsp[-3].pset), (int) (yyvsp[-1].val));
	}
#line 5611 "y.tab.c"
    break;

  case 97: /* parmset: SPLINE '(' SETNUM ',' expr ',' expr ',' NUMBER ')'  */
#line 934 "pars.y"
        {
	    do_spline((yyvsp[-7].pset), (yyvsp[-5].val), (yyvsp[-3].val), (int) (yyvsp[-1].val));
	}
#line 5619 "y.tab.c"
    break;

  case 98: /* parmset: HISTO '(' SETNUM ',' expr ',' expr ',' NUMBER ')'  */
#line 938 "pars.y"
        {
	    do_histo_command((yyvsp[-7].pset), -1, -1, (yyvsp[-5].val), (yyvsp[-3].val), (int) (yyvsp[-1].val));
	}
#line 5627 "y.tab.c"
    break;

  case 99: /* parmset: DIFFERENCE '(' SETNUM ',' NUMBER ')'  */
#line 942 "pars.y"
        {
	    do_differ((yyvsp[-3].pset), (int) (yyvsp[-1].val));
	}
#line 5635 "y.tab.c"
    break;

  case 100: /* parmset: INT '(' SETNUM ')'  */
#line 946 "pars.y"
        {
	    do_int((yyvsp[-1].pset), 0);
	}
#line 5643 "y.tab.c"
    break;

  case 101: /* parmset: AUTOSCALE  */
#line 950 "pars.y"
        {
	    if (activeset(cg)) {
		defaultgraph(cg);
		default_axis(cg, g[cg].auto_type, X_AXIS);
		default_axis(cg, g[cg].auto_type, ZX_AXIS);
		default_axis(cg, g[cg].auto_type, Y_AXIS);
		default_axis(cg, g[cg].auto_type, ZY_AXIS);
		update_world(cg);
		drawgraph();
	    } else {
		errwin("No active sets!");
	    }
	}
#line 5661 "y.tab.c"
    break;

  case 102: /* parmset: AUTOSCALE XAXES  */
#line 964 "pars.y"
        {
	    if (activeset(cg)) {
		defaultx(cg, -1);
		default_axis(cg, g[cg].auto_type, X_AXIS);
		default_axis(cg, g[cg].auto_type, ZX_AXIS);
		update_world(cg);
		drawgraph();
	    } else {
		errwin("No active sets!");
	    }
	}
#line 5677 "y.tab.c"
    break;

  case 103: /* parmset: AUTOSCALE YAXES  */
#line 976 "pars.y"
        {
	    if (activeset(cg)) {
		defaulty(cg, -1);
		default_axis(cg, g[cg].auto_type, Y_AXIS);
		default_axis(cg, g[cg].auto_type, ZY_AXIS);
		update_world(cg);
		drawgraph();
	    } else {
		errwin("No active sets!");
	    }
	}
#line 5693 "y.tab.c"
    break;

  case 104: /* parmset: AUTOSCALE SETNUM  */
#line 988 "pars.y"
        {
	    if (isactive_set(cg, (yyvsp[0].pset))) {
		defaultsetgraph(cg, (yyvsp[0].pset));
		default_axis(cg, g[cg].auto_type, X_AXIS);
		default_axis(cg, g[cg].auto_type, ZX_AXIS);
		default_axis(cg, g[cg].auto_type, Y_AXIS);
		default_axis(cg, g[cg].auto_type, ZY_AXIS);
		update_world(cg);
		drawgraph();
	    } else {
		errwin("Set not active");
	    }
	}
#line 5711 "y.tab.c"
    break;

  case 105: /* parmset: LOCATOR onoff  */
#line 1002 "pars.y"
        {
	    extern int go_locateflag;
	    go_locateflag = ((yyvsp[0].pset) == ON);
	}
#line 5720 "y.tab.c"
    break;

  case 106: /* parmset: FOCUS GRAPHNO  */
#line 1007 "pars.y"
        {
	    draw_focus(cg);
	    cg = (int) (yyvsp[0].pset);
	    defineworld(g[cg].w.xg1, g[cg].w.yg1, g[cg].w.xg2, g[cg].w.yg2, 
			islogx(cg), islogy(cg));
	    viewport(g[cg].v.xv1, g[cg].v.yv1, g[cg].v.xv2, g[cg].v.yv2);
	    draw_focus(cg);
	    update_all(cg);
	}
#line 5734 "y.tab.c"
    break;

  case 107: /* parmset: FOCUS onoff  */
#line 1016 "pars.y"
                      {
	    draw_focus_flag = (yyvsp[0].pset);
	}
#line 5742 "y.tab.c"
    break;

  case 108: /* parmset: FOCUS SET  */
#line 1019 "pars.y"
                    {
	    focus_policy = (yyvsp[0].pset);
	}
#line 5750 "y.tab.c"
    break;

  case 109: /* parmset: FOCUS FOLLOWS  */
#line 1022 "pars.y"
                        {
	    focus_policy = (yyvsp[0].pset);
	}
#line 5758 "y.tab.c"
    break;

  case 110: /* parmset: FOCUS CLICK  */
#line 1025 "pars.y"
                      {
	    focus_policy = (yyvsp[0].pset);
	}
#line 5766 "y.tab.c"
    break;

  case 111: /* parmset: SOURCE sourcetype  */
#line 1028 "pars.y"
                            {
	    cursource = (yyvsp[0].pset);
	}
#line 5774 "y.tab.c"
    break;

  case 112: /* parmset: TYPE xytype  */
#line 1031 "pars.y"
                      {
	    curtype = (yyvsp[0].pset);
	    change_type = curtype;
	}
#line 5783 "y.tab.c"
    break;

  case 113: /* parmset: READ CHRSTR  */
#line 1036 "pars.y"
        {
	    gotread = TRUE;
	    readtype = curtype;
	    readsrc = cursource;
	    strcpy(readfile, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5795 "y.tab.c"
    break;

  case 114: /* parmset: READ BATCH CHRSTR  */
#line 1044 "pars.y"
        {
	    gotbatch = TRUE;
	    strcpy(batchfile, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5805 "y.tab.c"
    break;

  case 115: /* parmset: READ BLOCK CHRSTR  */
#line 1050 "pars.y"
        {
	    getdata(cg, (char *) (yyvsp[0].pset), DISK, BLOCK);
	    free((char *) (yyvsp[0].pset));
	}
#line 5814 "y.tab.c"
    break;

  case 116: /* parmset: READ BLOCK sourcetype CHRSTR  */
#line 1055 "pars.y"
        {
	    getdata(cg, (char *) (yyvsp[0].pset), (yyvsp[-1].pset), BLOCK);
	    free((char *) (yyvsp[0].pset));
	}
#line 5823 "y.tab.c"
    break;

  case 117: /* parmset: BLOCK xytype CHRSTR  */
#line 1060 "pars.y"
        {
	    create_set_fromblock(cg, (yyvsp[-1].pset), (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5832 "y.tab.c"
    break;

  case 118: /* parmset: READ xytype CHRSTR  */
#line 1065 "pars.y"
        {
	    gotread = TRUE;
	    readtype = (yyvsp[-1].pset);
	    readsrc = cursource;
	    strcpy(readfile, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5844 "y.tab.c"
    break;

  case 119: /* parmset: READ xytype sourcetype CHRSTR  */
#line 1073 "pars.y"
        {
	    gotread = TRUE;
	    strcpy(readfile, (char *) (yyvsp[0].pset));
	    readtype = (yyvsp[-2].pset);
	    readsrc = (yyvsp[-1].pset);
	    free((char *) (yyvsp[0].pset));
	}
#line 5856 "y.tab.c"
    break;

  case 120: /* parmset: READ IMAGE CHRSTR  */
#line 1081 "pars.y"
        {
	    read_image((char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5865 "y.tab.c"
    break;

  case 121: /* parmset: READ CTD ALL CHRSTR  */
#line 1086 "pars.y"
        {
	    getdata(cg, (char  *) (yyvsp[0].pset), DISK, CTD);
	}
#line 5873 "y.tab.c"
    break;

  case 122: /* parmset: READ ELCIRC GRAPHNO '.' SETNUM CHRSTR elcirctype HISTORY NUMBER ',' NUMBER ',' NUMBER ',' NUMBER ',' NUMBER MISSINGP NUMBER  */
#line 1090 "pars.y"
        { /* set, file, type, TIME node, level, start, stop, skip, missing val*/
	}
#line 5880 "y.tab.c"
    break;

  case 123: /* parmset: READ ELCIRC SETNUM CHRSTR elcirctype HISTORY ',' NUMBER  */
#line 1093 "pars.y"
        { /* set, file, type, TIME level, start, stop, skip*/
	}
#line 5887 "y.tab.c"
    break;

  case 124: /* parmset: READ ELCIRC GRAPHNO '.' SETNUM CHRSTR elcirctype PROFILE ',' NUMBER MISSINGP NUMBER  */
#line 1096 "pars.y"
        { /* set, file, type, PROFILE node*/
	}
#line 5894 "y.tab.c"
    break;

  case 125: /* parmset: READ ELCIRC SETNUM CHRSTR elcirctype HISTORY ',' NUMBER  */
#line 1099 "pars.y"
        { /* set, file, type, TIME level, start, stop, skip*/
	}
#line 5901 "y.tab.c"
    break;

  case 126: /* parmset: WRITE IMAGE CHRSTR  */
#line 1102 "pars.y"
        {
	    write_image((char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5910 "y.tab.c"
    break;

  case 127: /* parmset: IMAGE XY NUMBER ',' NUMBER  */
#line 1107 "pars.y"
        {
	    imagex = (int) (yyvsp[-2].val);
	    imagey = (int) (yyvsp[0].val);
	}
#line 5919 "y.tab.c"
    break;

  case 128: /* parmset: WRITE SETNUM  */
#line 1112 "pars.y"
        {
	    outputset(cg, (yyvsp[0].pset), (char *) NULL, (char *) NULL);
	}
#line 5927 "y.tab.c"
    break;

  case 129: /* parmset: WRITE SETNUM FORMAT CHRSTR  */
#line 1116 "pars.y"
        {
	    outputset(cg, (yyvsp[-2].pset), (char *) NULL, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5936 "y.tab.c"
    break;

  case 130: /* parmset: WRITE SETNUM FILEP CHRSTR  */
#line 1121 "pars.y"
        {
	    outputset(cg, (yyvsp[-2].pset), (char *) (yyvsp[0].pset), (char *) NULL);
	    free((char *) (yyvsp[0].pset));
	}
#line 5945 "y.tab.c"
    break;

  case 131: /* parmset: WRITE SETNUM FILEP CHRSTR FORMAT CHRSTR  */
#line 1126 "pars.y"
        {
	    outputset(cg, (yyvsp[-4].pset), (char *) (yyvsp[-2].pset), (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[-2].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 5955 "y.tab.c"
    break;

  case 132: /* parmset: SAVEALL CHRSTR  */
#line 1132 "pars.y"
        {
            extern char sformat[];
            do_writesets(maxgraph, -1, 1, (char *) (yyvsp[0].pset), sformat);
            free((char *) (yyvsp[0].pset));
        }
#line 5965 "y.tab.c"
    break;

  case 133: /* parmset: PUSH  */
#line 1137 "pars.y"
               {
	    push_world();
	}
#line 5973 "y.tab.c"
    break;

  case 134: /* parmset: POP  */
#line 1140 "pars.y"
              {
	    pop_world();
	}
#line 5981 "y.tab.c"
    break;

  case 135: /* parmset: CYCLE  */
#line 1143 "pars.y"
                {
	    cycle_world_stack();
	}
#line 5989 "y.tab.c"
    break;

  case 136: /* parmset: STACK NUMBER  */
#line 1146 "pars.y"
                       {
	    if ((int) (yyvsp[0].val) > 0)
		show_world_stack((int) (yyvsp[0].val) - 1);
	}
#line 5998 "y.tab.c"
    break;

  case 137: /* parmset: STACK WORLD expr ',' expr ',' expr ',' expr TICKP expr ',' expr ',' expr ',' expr  */
#line 1151 "pars.y"
        {
	    add_world(cg, (yyvsp[-14].val), (yyvsp[-12].val), (yyvsp[-10].val), (yyvsp[-8].val), (yyvsp[-6].val), (yyvsp[-4].val), (yyvsp[-2].val), (yyvsp[0].val));
	}
#line 6006 "y.tab.c"
    break;

  case 138: /* parmset: CLEAR STACK  */
#line 1154 "pars.y"
                      {
	    clear_world_stack();
	}
#line 6014 "y.tab.c"
    break;

  case 139: /* parmset: CLEAR BOX  */
#line 1157 "pars.y"
                    {
	    do_clear_boxes();
	}
#line 6022 "y.tab.c"
    break;

  case 140: /* parmset: WITH BOX  */
#line 1160 "pars.y"
                   {
	    curbox = next_box();
	}
#line 6030 "y.tab.c"
    break;

  case 141: /* parmset: WITH BOX NUMBER  */
#line 1163 "pars.y"
                          {
	    curbox = (int) (yyvsp[0].val);
	}
#line 6038 "y.tab.c"
    break;

  case 142: /* parmset: BOX onoff  */
#line 1166 "pars.y"
                    {
	    boxes[curbox].active = (yyvsp[0].pset);
	}
#line 6046 "y.tab.c"
    break;

  case 143: /* parmset: BOX GRAPHNO  */
#line 1169 "pars.y"
                      {
	    boxes[curbox].gno = (yyvsp[0].pset);
	}
#line 6054 "y.tab.c"
    break;

  case 144: /* parmset: BOX expr ',' expr ',' expr ',' expr  */
#line 1173 "pars.y"
        {
	    if (curbox >= 0 && curbox < MAXBOXES) {
		boxes[curbox].x1 = (yyvsp[-6].val);
		boxes[curbox].y1 = (yyvsp[-4].val);
		boxes[curbox].x2 = (yyvsp[-2].val);
		boxes[curbox].y2 = (yyvsp[0].val);
	    }
	}
#line 6067 "y.tab.c"
    break;

  case 145: /* parmset: BOX LOCTYPE worldview  */
#line 1181 "pars.y"
                                {
	    box_loctype = (yyvsp[0].pset);
	}
#line 6075 "y.tab.c"
    break;

  case 146: /* parmset: BOX LINESTYLE NUMBER  */
#line 1184 "pars.y"
                               {
	    box_lines = checkon(LINESTYLE, box_lines, (int) (yyvsp[0].val));
	}
#line 6083 "y.tab.c"
    break;

  case 147: /* parmset: BOX LINEWIDTH NUMBER  */
#line 1187 "pars.y"
                               {
	    box_linew = checkon(LINEWIDTH, box_linew, (int) (yyvsp[0].val));
	}
#line 6091 "y.tab.c"
    break;

  case 148: /* parmset: BOX COLOR NUMBER  */
#line 1190 "pars.y"
                           {
	    box_color = checkon(COLOR, box_color, (int) (yyvsp[0].val));
	}
#line 6099 "y.tab.c"
    break;

  case 149: /* parmset: BOX FILL filltype  */
#line 1193 "pars.y"
                            {
	    box_fill = (yyvsp[0].pset);
	}
#line 6107 "y.tab.c"
    break;

  case 150: /* parmset: BOX FILL COLOR NUMBER  */
#line 1196 "pars.y"
                                {
	    box_fillcolor = checkon(COLOR, box_fillcolor, (int) (yyvsp[0].val));
	}
#line 6115 "y.tab.c"
    break;

  case 151: /* parmset: BOX FILL PATTERN NUMBER  */
#line 1199 "pars.y"
                                  {
	    box_fillpat = checkon(PATTERN, box_fillpat, (int) (yyvsp[0].val));
	}
#line 6123 "y.tab.c"
    break;

  case 152: /* parmset: BOX DEF  */
#line 1203 "pars.y"
        {
	    if (curbox >= 0 && curbox < MAXBOXES) {
		boxes[curbox].lines = box_lines;
		boxes[curbox].linew = box_linew;
		boxes[curbox].color = box_color;
		boxes[curbox].fill = box_fill;
		boxes[curbox].fillcolor = box_fillcolor;
		boxes[curbox].fillpattern = box_fillpat;
		boxes[curbox].loctype = box_loctype;
	    }
	}
#line 6139 "y.tab.c"
    break;

  case 153: /* parmset: WITH LINE  */
#line 1214 "pars.y"
                    {
	    curline = next_line();
	}
#line 6147 "y.tab.c"
    break;

  case 154: /* parmset: WITH LINE NUMBER  */
#line 1217 "pars.y"
                           {
	    curline = (int) (yyvsp[0].val);
	}
#line 6155 "y.tab.c"
    break;

  case 155: /* parmset: CLEAR LINE  */
#line 1220 "pars.y"
                     {
	    do_clear_lines();
	}
#line 6163 "y.tab.c"
    break;

  case 156: /* parmset: LINE onoff  */
#line 1223 "pars.y"
                     {
	    lines[curline].active = (yyvsp[0].pset);
	}
#line 6171 "y.tab.c"
    break;

  case 157: /* parmset: LINE GRAPHNO  */
#line 1226 "pars.y"
                       {
	    lines[curline].gno = (yyvsp[0].pset);
	}
#line 6179 "y.tab.c"
    break;

  case 158: /* parmset: LINE expr ',' expr ',' expr ',' expr  */
#line 1230 "pars.y"
        {
	    lines[curline].x1 = (yyvsp[-6].val);
	    lines[curline].y1 = (yyvsp[-4].val);
	    lines[curline].x2 = (yyvsp[-2].val);
	    lines[curline].y2 = (yyvsp[0].val);
	}
#line 6190 "y.tab.c"
    break;

  case 159: /* parmset: LINE LOCTYPE worldview  */
#line 1236 "pars.y"
                                 {
	    line_loctype = (yyvsp[0].pset);
	}
#line 6198 "y.tab.c"
    break;

  case 160: /* parmset: LINE LINEWIDTH NUMBER  */
#line 1239 "pars.y"
                                {
	    line_linew = checkon(LINEWIDTH, line_linew, (int) (yyvsp[0].val));
	}
#line 6206 "y.tab.c"
    break;

  case 161: /* parmset: LINE LINESTYLE NUMBER  */
#line 1242 "pars.y"
                                {
	    line_lines = checkon(LINESTYLE, line_lines, (int) (yyvsp[0].val));
	}
#line 6214 "y.tab.c"
    break;

  case 162: /* parmset: LINE COLOR NUMBER  */
#line 1245 "pars.y"
                            {
	    line_color = checkon(COLOR, line_color, (int) (yyvsp[0].val));
	}
#line 6222 "y.tab.c"
    break;

  case 163: /* parmset: LINE ARROW NUMBER  */
#line 1248 "pars.y"
                            {
	    line_arrow = checkon(ARROW, line_arrow, (int) (yyvsp[0].val));
	}
#line 6230 "y.tab.c"
    break;

  case 164: /* parmset: LINE ARROW SIZE NUMBER  */
#line 1251 "pars.y"
                                 {
	    line_asize = (yyvsp[0].val);
	}
#line 6238 "y.tab.c"
    break;

  case 165: /* parmset: LINE ARROW TYPE NUMBER  */
#line 1254 "pars.y"
                                 {
	    line_atype = (int) (yyvsp[0].val);
	}
#line 6246 "y.tab.c"
    break;

  case 166: /* parmset: LINE DEF  */
#line 1258 "pars.y"
        {
	    if (curline >= 0 && curline < MAXLINES) {
		lines[curline].lines = line_lines;
		lines[curline].linew = line_linew;
		lines[curline].color = line_color;
		lines[curline].arrow = line_arrow;
		lines[curline].asize = line_asize;
		lines[curline].atype = line_atype;
		lines[curline].loctype = line_loctype;
	    }
	}
#line 6262 "y.tab.c"
    break;

  case 167: /* parmset: CLEAR STRING  */
#line 1269 "pars.y"
                       {
	    do_clear_text();
	}
#line 6270 "y.tab.c"
    break;

  case 168: /* parmset: WITH STRING  */
#line 1272 "pars.y"
                      {
	    curstring = next_string();
	}
#line 6278 "y.tab.c"
    break;

  case 169: /* parmset: WITH STRING NUMBER  */
#line 1275 "pars.y"
                             {
	    curstring = (int) (yyvsp[0].val);
	}
#line 6286 "y.tab.c"
    break;

  case 170: /* parmset: STRING onoff  */
#line 1278 "pars.y"
                       {
	    pstr[curstring].active = (yyvsp[0].pset);
	}
#line 6294 "y.tab.c"
    break;

  case 171: /* parmset: STRING GRAPHNO  */
#line 1281 "pars.y"
                         {
	    pstr[curstring].gno = (yyvsp[0].pset);
	}
#line 6302 "y.tab.c"
    break;

  case 172: /* parmset: STRING expr ',' expr  */
#line 1285 "pars.y"
        {
	    pstr[curstring].x = (yyvsp[-2].val);
	    pstr[curstring].y = (yyvsp[0].val);
	}
#line 6311 "y.tab.c"
    break;

  case 173: /* parmset: STRING LOCTYPE worldview  */
#line 1289 "pars.y"
                                   {
	    string_loctype = (yyvsp[0].pset);
	}
#line 6319 "y.tab.c"
    break;

  case 174: /* parmset: STRING LINEWIDTH NUMBER  */
#line 1292 "pars.y"
                                  {
	    string_linew = checkon(LINEWIDTH, string_linew, (int) (yyvsp[0].val));
	}
#line 6327 "y.tab.c"
    break;

  case 175: /* parmset: STRING COLOR NUMBER  */
#line 1295 "pars.y"
                              {
	    string_color = checkon(COLOR, string_color, (int) (yyvsp[0].val));
	}
#line 6335 "y.tab.c"
    break;

  case 176: /* parmset: STRING ROT NUMBER  */
#line 1298 "pars.y"
                            {
	    string_rot = (int) (yyvsp[0].val);
	}
#line 6343 "y.tab.c"
    break;

  case 177: /* parmset: STRING FONTP NUMBER  */
#line 1301 "pars.y"
                              {
	    string_font = checkon(FONTP, string_font, (int) (yyvsp[0].val));
	}
#line 6351 "y.tab.c"
    break;

  case 178: /* parmset: STRING JUST NUMBER  */
#line 1304 "pars.y"
                             {
	    string_just = checkon(JUST, string_just, (int) (yyvsp[0].val));
	}
#line 6359 "y.tab.c"
    break;

  case 179: /* parmset: STRING CHAR SIZE NUMBER  */
#line 1307 "pars.y"
                                  {
	    string_size = (yyvsp[0].val);
	}
#line 6367 "y.tab.c"
    break;

  case 180: /* parmset: STRING DEF CHRSTR  */
#line 1311 "pars.y"
        {
	    set_plotstr_string(&pstr[curstring], (char *) (yyvsp[0].pset));
	    pstr[curstring].linew = string_linew;
	    pstr[curstring].color = string_color;
	    pstr[curstring].font = string_font;
	    pstr[curstring].just = string_just;
	    pstr[curstring].loctype = string_loctype;
	    pstr[curstring].rot = string_rot;
	    pstr[curstring].charsize = string_size;
	    free((char *) (yyvsp[0].pset));
	}
#line 6383 "y.tab.c"
    break;

  case 181: /* parmset: DEFAULT LINESTYLE NUMBER  */
#line 1322 "pars.y"
                                   {
	    grdefaults.lines = (int) (yyvsp[0].val);
	}
#line 6391 "y.tab.c"
    break;

  case 182: /* parmset: DEFAULT LINEWIDTH NUMBER  */
#line 1325 "pars.y"
                                   {
	    grdefaults.linew = (int) (yyvsp[0].val);
	}
#line 6399 "y.tab.c"
    break;

  case 183: /* parmset: DEFAULT COLOR NUMBER  */
#line 1328 "pars.y"
                               {
	    grdefaults.color = (int) (yyvsp[0].val);
	}
#line 6407 "y.tab.c"
    break;

  case 184: /* parmset: DEFAULT CHAR SIZE NUMBER  */
#line 1331 "pars.y"
                                   {
	    grdefaults.charsize = (yyvsp[0].val);
	}
#line 6415 "y.tab.c"
    break;

  case 185: /* parmset: DEFAULT FONTP NUMBER  */
#line 1334 "pars.y"
                               {
	    grdefaults.font = (int) (yyvsp[0].val);
	}
#line 6423 "y.tab.c"
    break;

  case 186: /* parmset: DEFAULT FONTP SOURCE NUMBER  */
#line 1337 "pars.y"
                                      {
	    grdefaults.fontsrc = (int) (yyvsp[0].val);
	}
#line 6431 "y.tab.c"
    break;

  case 187: /* parmset: DEFAULT SYMBOL SIZE NUMBER  */
#line 1340 "pars.y"
                                     {
	    grdefaults.symsize = (yyvsp[0].val);
	}
#line 6439 "y.tab.c"
    break;

  case 188: /* parmset: WORLD expr ',' expr ',' expr ',' expr  */
#line 1344 "pars.y"
        {
	    g[cg].w.xg1 = (yyvsp[-6].val);
	    g[cg].w.yg1 = (yyvsp[-4].val);
	    g[cg].w.xg2 = (yyvsp[-2].val);
	    g[cg].w.yg2 = (yyvsp[0].val);
	}
#line 6450 "y.tab.c"
    break;

  case 189: /* parmset: WORLD XMIN expr  */
#line 1350 "pars.y"
                          {
	    g[cg].w.xg1 = (yyvsp[0].val);
	}
#line 6458 "y.tab.c"
    break;

  case 190: /* parmset: WORLD XMAX expr  */
#line 1353 "pars.y"
                          {
	    g[cg].w.xg2 = (yyvsp[0].val);
	}
#line 6466 "y.tab.c"
    break;

  case 191: /* parmset: WORLD YMIN expr  */
#line 1356 "pars.y"
                          {
	    g[cg].w.yg1 = (yyvsp[0].val);
	}
#line 6474 "y.tab.c"
    break;

  case 192: /* parmset: WORLD YMAX expr  */
#line 1359 "pars.y"
                          {
	    g[cg].w.yg2 = (yyvsp[0].val);
	}
#line 6482 "y.tab.c"
    break;

  case 193: /* parmset: VIEW expr ',' expr ',' expr ',' expr  */
#line 1363 "pars.y"
        {
	    g[cg].v.xv1 = (yyvsp[-6].val);
	    g[cg].v.yv1 = (yyvsp[-4].val);
	    g[cg].v.xv2 = (yyvsp[-2].val);
	    g[cg].v.yv2 = (yyvsp[0].val);
	}
#line 6493 "y.tab.c"
    break;

  case 194: /* parmset: VIEW XMIN NUMBER  */
#line 1369 "pars.y"
                           {
	    g[cg].v.xv1 = (yyvsp[0].val);
	}
#line 6501 "y.tab.c"
    break;

  case 195: /* parmset: VIEW XMAX NUMBER  */
#line 1372 "pars.y"
                           {
	    g[cg].v.xv2 = (yyvsp[0].val);
	}
#line 6509 "y.tab.c"
    break;

  case 196: /* parmset: VIEW YMIN NUMBER  */
#line 1375 "pars.y"
                           {
	    g[cg].v.yv1 = (yyvsp[0].val);
	}
#line 6517 "y.tab.c"
    break;

  case 197: /* parmset: VIEW YMAX NUMBER  */
#line 1378 "pars.y"
                           {
	    g[cg].v.yv2 = (yyvsp[0].val);
	}
#line 6525 "y.tab.c"
    break;

  case 198: /* parmset: TITLE CHRSTR  */
#line 1381 "pars.y"
                       {
	    set_plotstr_string(&g[cg].labs.title, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 6534 "y.tab.c"
    break;

  case 199: /* parmset: TITLE FONTP NUMBER  */
#line 1385 "pars.y"
                             {
	    g[cg].labs.title.font = checkon(FONTP, g[cg].labs.title.font, (int) (yyvsp[0].val));
	}
#line 6542 "y.tab.c"
    break;

  case 200: /* parmset: TITLE SIZE NUMBER  */
#line 1388 "pars.y"
                            {
	    g[cg].labs.title.charsize = (yyvsp[0].val);
	}
#line 6550 "y.tab.c"
    break;

  case 201: /* parmset: TITLE COLOR NUMBER  */
#line 1391 "pars.y"
                             {
	    g[cg].labs.title.color = checkon(COLOR, g[cg].labs.title.color, (int) (yyvsp[0].val));
	}
#line 6558 "y.tab.c"
    break;

  case 202: /* parmset: TITLE LINEWIDTH NUMBER  */
#line 1395 "pars.y"
        {
	    g[cg].labs.title.linew = checkon(LINEWIDTH, g[cg].labs.title.linew, (int) (yyvsp[0].val));
	}
#line 6566 "y.tab.c"
    break;

  case 203: /* parmset: SUBTITLE CHRSTR  */
#line 1398 "pars.y"
                          {
	    set_plotstr_string(&g[cg].labs.stitle, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 6575 "y.tab.c"
    break;

  case 204: /* parmset: SUBTITLE FONTP NUMBER  */
#line 1403 "pars.y"
        {
	    g[cg].labs.stitle.font = checkon(FONTP, g[cg].labs.stitle.font, (int) (yyvsp[0].val));
	}
#line 6583 "y.tab.c"
    break;

  case 205: /* parmset: SUBTITLE SIZE NUMBER  */
#line 1406 "pars.y"
                               {
	    g[cg].labs.stitle.charsize = (yyvsp[0].val);
	}
#line 6591 "y.tab.c"
    break;

  case 206: /* parmset: SUBTITLE COLOR NUMBER  */
#line 1410 "pars.y"
        {
	    g[cg].labs.stitle.color = checkon(COLOR, g[cg].labs.stitle.color, (int) (yyvsp[0].val));
	}
#line 6599 "y.tab.c"
    break;

  case 207: /* parmset: SUBTITLE LINEWIDTH NUMBER  */
#line 1414 "pars.y"
        {
	    g[cg].labs.stitle.linew = checkon(LINEWIDTH, g[cg].labs.stitle.color, (int) (yyvsp[0].val));
	}
#line 6607 "y.tab.c"
    break;

  case 208: /* parmset: GRAPHS MAXP SETS NUMBER  */
#line 1417 "pars.y"
                                  {
	    realloc_plots((int) (yyvsp[0].val));
	}
#line 6615 "y.tab.c"
    break;

  case 209: /* parmset: LEGEND onoff  */
#line 1420 "pars.y"
                       {
	    g[cg].l.active = (yyvsp[0].pset);
	}
#line 6623 "y.tab.c"
    break;

  case 210: /* parmset: LEGEND LOCTYPE worldview  */
#line 1423 "pars.y"
                                   {
	    g[cg].l.loctype = (yyvsp[0].pset);
	}
#line 6631 "y.tab.c"
    break;

  case 211: /* parmset: LEGEND LAYOUT NUMBER  */
#line 1426 "pars.y"
                               {
	    g[cg].l.layout = (int) (yyvsp[0].val);
	}
#line 6639 "y.tab.c"
    break;

  case 212: /* parmset: LEGEND VGAP NUMBER  */
#line 1429 "pars.y"
                             {
	    g[cg].l.vgap = (int) (yyvsp[0].val);
	}
#line 6647 "y.tab.c"
    break;

  case 213: /* parmset: LEGEND HGAP NUMBER  */
#line 1432 "pars.y"
                             {
	    g[cg].l.hgap = (int) (yyvsp[0].val);
	}
#line 6655 "y.tab.c"
    break;

  case 214: /* parmset: LEGEND LENGTH NUMBER  */
#line 1435 "pars.y"
                               {
	    g[cg].l.len = (int) (yyvsp[0].val);
	}
#line 6663 "y.tab.c"
    break;

  case 215: /* parmset: LEGEND BOX onoff  */
#line 1438 "pars.y"
                           {
	    g[cg].l.box = (yyvsp[0].pset);
	}
#line 6671 "y.tab.c"
    break;

  case 216: /* parmset: LEGEND BOX FILL onoff  */
#line 1441 "pars.y"
                                {
	    g[cg].l.boxfill = (yyvsp[0].pset);
	}
#line 6679 "y.tab.c"
    break;

  case 217: /* parmset: LEGEND BOX FILL WITH colpat  */
#line 1444 "pars.y"
                                      {
	    g[cg].l.boxfillusing = (yyvsp[0].pset);
	}
#line 6687 "y.tab.c"
    break;

  case 218: /* parmset: LEGEND BOX FILL colpat NUMBER  */
#line 1448 "pars.y"
        {
	    if ((yyvsp[-1].pset) == COLOR) {
		g[cg].l.boxfillcolor = (int) (yyvsp[0].val);
	    } else {
		g[cg].l.boxfillpat = (int) (yyvsp[0].val);
	    }
	}
#line 6699 "y.tab.c"
    break;

  case 219: /* parmset: LEGEND BOX COLOR NUMBER  */
#line 1455 "pars.y"
                                  {
	    g[cg].l.boxlcolor = checkon(COLOR, g[cg].l.boxlcolor, (int) (yyvsp[0].val));
	}
#line 6707 "y.tab.c"
    break;

  case 220: /* parmset: LEGEND BOX LINESTYLE NUMBER  */
#line 1458 "pars.y"
                                      {
	    g[cg].l.boxlines = checkon(LINESTYLE, g[cg].l.boxlines, (int) (yyvsp[0].val));
	}
#line 6715 "y.tab.c"
    break;

  case 221: /* parmset: LEGEND BOX LINEWIDTH NUMBER  */
#line 1461 "pars.y"
                                      {
	    g[cg].l.boxlinew = checkon(LINEWIDTH, g[cg].l.boxlinew, (int) (yyvsp[0].val));
	}
#line 6723 "y.tab.c"
    break;

  case 222: /* parmset: LEGEND expr ',' expr  */
#line 1464 "pars.y"
                               {
	    g[cg].l.legx = (yyvsp[-2].val);
	    g[cg].l.legy = (yyvsp[0].val);
	}
#line 6732 "y.tab.c"
    break;

  case 223: /* parmset: LEGEND X1 expr  */
#line 1468 "pars.y"
                         {
	    g[cg].l.legx = (yyvsp[0].val);
	}
#line 6740 "y.tab.c"
    break;

  case 224: /* parmset: LEGEND Y1 expr  */
#line 1471 "pars.y"
                         {
	    g[cg].l.legy = (yyvsp[0].val);
	}
#line 6748 "y.tab.c"
    break;

  case 225: /* parmset: LEGEND CHAR SIZE NUMBER  */
#line 1474 "pars.y"
                                  {
	    g[cg].l.charsize = (yyvsp[0].val);
	}
#line 6756 "y.tab.c"
    break;

  case 226: /* parmset: LEGEND FONTP NUMBER  */
#line 1477 "pars.y"
                              {
	    g[cg].l.font = checkon(FONTP, g[cg].l.font, (int) (yyvsp[0].val));
	}
#line 6764 "y.tab.c"
    break;

  case 227: /* parmset: LEGEND LINESTYLE NUMBER  */
#line 1480 "pars.y"
                                  {
	    g[cg].l.lines = checkon(LINESTYLE, g[cg].l.lines, (int) (yyvsp[0].val));
	}
#line 6772 "y.tab.c"
    break;

  case 228: /* parmset: LEGEND LINEWIDTH NUMBER  */
#line 1483 "pars.y"
                                  {
	    g[cg].l.linew = checkon(LINEWIDTH, g[cg].l.linew, (int) (yyvsp[0].val));
	}
#line 6780 "y.tab.c"
    break;

  case 229: /* parmset: LEGEND COLOR NUMBER  */
#line 1486 "pars.y"
                              {
	    g[cg].l.color = checkon(COLOR, g[cg].l.color, (int) (yyvsp[0].val));
	}
#line 6788 "y.tab.c"
    break;

  case 230: /* parmset: LEGEND STRING NUMBER CHRSTR  */
#line 1489 "pars.y"
                                      {
	    set_plotstr_string(&g[cg].l.str[(int) (yyvsp[-1].val)], (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 6797 "y.tab.c"
    break;

  case 231: /* parmset: ISOLINES NUMBER  */
#line 1493 "pars.y"
                          {
	    g[cg].isol.nisol = (int) (yyvsp[0].val);
	}
#line 6805 "y.tab.c"
    break;

  case 232: /* parmset: ISOLINES TYPE NUMBER  */
#line 1496 "pars.y"
                               {
	    g[cg].isol.isoltype = (int) (yyvsp[0].val);
	}
#line 6813 "y.tab.c"
    break;

  case 233: /* parmset: ISOLINE NUMBER ',' expr  */
#line 1499 "pars.y"
                                  {
	    g[cg].isol.cis[(int) (yyvsp[-2].val)] = (yyvsp[0].val);
	}
#line 6821 "y.tab.c"
    break;

  case 234: /* parmset: ISOLINE NUMBER LINEWIDTH NUMBER  */
#line 1502 "pars.y"
                                          {
	}
#line 6828 "y.tab.c"
    break;

  case 235: /* parmset: ISOLINE NUMBER LINESTYLE NUMBER  */
#line 1504 "pars.y"
                                          {
	}
#line 6835 "y.tab.c"
    break;

  case 236: /* parmset: ISOLINE COLOR NUMBER  */
#line 1506 "pars.y"
                               {
	}
#line 6842 "y.tab.c"
    break;

  case 237: /* parmset: ISOLINES START expr STEP expr  */
#line 1508 "pars.y"
                                        {
	    g[cg].isol.cis[0] = (double) (yyvsp[-2].val);
	    g[cg].isol.cint = (double) (yyvsp[0].val);
	}
#line 6851 "y.tab.c"
    break;

  case 238: /* parmset: ISOLINES LEGEND onoff  */
#line 1512 "pars.y"
                                {
	    g[cg].isol.lactive = (yyvsp[0].pset);
	}
#line 6859 "y.tab.c"
    break;

  case 239: /* parmset: ISOLINES LEGEND LOCTYPE worldview  */
#line 1515 "pars.y"
                                            {
	    g[cg].isol.loctype = (yyvsp[0].pset);
	}
#line 6867 "y.tab.c"
    break;

  case 240: /* parmset: ISOLINES LEGEND NUMBER ',' expr  */
#line 1518 "pars.y"
                                          {
	    g[cg].isol.x = (double) (yyvsp[-2].val);
	    g[cg].isol.y = (double) (yyvsp[0].val);
	}
#line 6876 "y.tab.c"
    break;

  case 241: /* parmset: ISOLINES LEGEND LAYOUT HORIZONTAL  */
#line 1522 "pars.y"
                                            {
	    g[cg].isol.layout = (yyvsp[0].pset);
	}
#line 6884 "y.tab.c"
    break;

  case 242: /* parmset: ISOLINES LEGEND LAYOUT VERTICAL  */
#line 1525 "pars.y"
                                          {
	    g[cg].isol.layout = (yyvsp[0].pset);
	}
#line 6892 "y.tab.c"
    break;

  case 243: /* parmset: ISOLINES LEGEND LABEL FORMAT formatchoice  */
#line 1528 "pars.y"
                                                    {
	    g[cg].isol.p.format = (yyvsp[0].pset);
	}
#line 6900 "y.tab.c"
    break;

  case 244: /* parmset: ISOLINES LEGEND LABEL PREC NUMBER  */
#line 1531 "pars.y"
                                            {
	    g[cg].isol.p.prec = (int) (yyvsp[0].val);
	}
#line 6908 "y.tab.c"
    break;

  case 245: /* parmset: ISOLINES LEGEND LABEL SIZE NUMBER  */
#line 1534 "pars.y"
                                            {
	    g[cg].isol.p.charsize = (yyvsp[0].val);
	}
#line 6916 "y.tab.c"
    break;

  case 246: /* parmset: ISOLINES LEGEND SIZE NUMBER ',' NUMBER  */
#line 1537 "pars.y"
                                                 {
	    g[cg].isol.xlen = (yyvsp[-2].val);
	    g[cg].isol.ylen = (yyvsp[0].val);
	}
#line 6925 "y.tab.c"
    break;

  case 247: /* parmset: ISOLINES LEGEND HGAP NUMBER ',' NUMBER  */
#line 1541 "pars.y"
                                                 {
	    g[cg].isol.xgap = (yyvsp[-2].val);
	    g[cg].isol.ygap = (yyvsp[0].val);
	}
#line 6934 "y.tab.c"
    break;

  case 248: /* parmset: FRAMEP onoff  */
#line 1545 "pars.y"
                       {
	    g[cg].f.active = (yyvsp[0].pset);
	}
#line 6942 "y.tab.c"
    break;

  case 249: /* parmset: FRAMEP TYPE NUMBER  */
#line 1548 "pars.y"
                             {
	    g[cg].f.type = (int) (yyvsp[0].val);
	}
#line 6950 "y.tab.c"
    break;

  case 250: /* parmset: FRAMEP LINESTYLE NUMBER  */
#line 1551 "pars.y"
                                  {
	    g[cg].f.lines = checkon(LINESTYLE, g[cg].f.lines, (int) (yyvsp[0].val));
	}
#line 6958 "y.tab.c"
    break;

  case 251: /* parmset: FRAMEP LINEWIDTH NUMBER  */
#line 1554 "pars.y"
                                  {
	    g[cg].f.linew = checkon(LINEWIDTH, g[cg].f.linew, (int) (yyvsp[0].val));
	}
#line 6966 "y.tab.c"
    break;

  case 252: /* parmset: FRAMEP COLOR NUMBER  */
#line 1557 "pars.y"
                              {
	    g[cg].f.color = checkon(COLOR, g[cg].f.color, (int) (yyvsp[0].val));
	}
#line 6974 "y.tab.c"
    break;

  case 253: /* parmset: FRAMEP FILL onoff  */
#line 1560 "pars.y"
                            {
	    g[cg].f.fillbg = (yyvsp[0].pset);
	}
#line 6982 "y.tab.c"
    break;

  case 254: /* parmset: FRAMEP BACKGROUND COLOR NUMBER  */
#line 1563 "pars.y"
                                         {
	    g[cg].f.bgcolor = (int) (yyvsp[0].val);
	}
#line 6990 "y.tab.c"
    break;

  case 255: /* parmset: GRAPHNO onoff  */
#line 1566 "pars.y"
                        {
	    g[(yyvsp[-1].pset)].active = (yyvsp[0].pset);
	}
#line 6998 "y.tab.c"
    break;

  case 256: /* parmset: GRAPHNO LABEL onoff  */
#line 1569 "pars.y"
                              {
	    g[(yyvsp[-2].pset)].label = (yyvsp[0].pset);
	}
#line 7006 "y.tab.c"
    break;

  case 257: /* parmset: GRAPHNO AUTOSCALE TYPE AUTO  */
#line 1572 "pars.y"
                                      {
	    g[(yyvsp[-3].pset)].auto_type = (yyvsp[0].pset);
	}
#line 7014 "y.tab.c"
    break;

  case 258: /* parmset: GRAPHNO AUTOSCALE TYPE SPEC  */
#line 1575 "pars.y"
                                      {
	    g[(yyvsp[-3].pset)].auto_type = (yyvsp[0].pset);
	}
#line 7022 "y.tab.c"
    break;

  case 259: /* parmset: GRAPHNO AUTOSCALE torf  */
#line 1578 "pars.y"
                                 {
	    g[(yyvsp[-2].pset)].parmsread = ((yyvsp[0].pset) == FALSEP);
	}
#line 7030 "y.tab.c"
    break;

  case 260: /* parmset: GRAPHNO HIDDEN torf  */
#line 1581 "pars.y"
                              {
	    g[(yyvsp[-2].pset)].hidden = ((yyvsp[0].pset) == TRUEP);
	}
#line 7038 "y.tab.c"
    break;

  case 261: /* parmset: GRAPHNO TYPE graphtype  */
#line 1584 "pars.y"
                                 {
	    g[(yyvsp[-2].pset)].type = (yyvsp[0].pset);
	}
#line 7046 "y.tab.c"
    break;

  case 262: /* parmset: GRAPHNO BAR SIZE NUMBER  */
#line 1587 "pars.y"
                                  {
	    g[(yyvsp[-3].pset)].barwid = (yyvsp[0].val);
	}
#line 7054 "y.tab.c"
    break;

  case 263: /* parmset: GRAPHNO STACKEDBAR SIZE NUMBER  */
#line 1590 "pars.y"
                                         {
	    g[(yyvsp[-3].pset)].sbarwid = (yyvsp[0].val);
	}
#line 7062 "y.tab.c"
    break;

  case 264: /* parmset: GRAPHNO FIXEDPOINT onoff  */
#line 1593 "pars.y"
                                   {
	    g[(yyvsp[-2].pset)].pointset = ((yyvsp[0].pset) == ON);
	}
#line 7070 "y.tab.c"
    break;

  case 265: /* parmset: GRAPHNO FIXEDPOINT FORMAT formatchoice formatchoice  */
#line 1597 "pars.y"
        {
	    g[(yyvsp[-4].pset)].fx = (yyvsp[-1].pset);
	    g[(yyvsp[-4].pset)].fy = (yyvsp[0].pset);
	}
#line 7079 "y.tab.c"
    break;

  case 266: /* parmset: GRAPHNO FIXEDPOINT PREC NUMBER ',' NUMBER  */
#line 1602 "pars.y"
        {
	    g[(yyvsp[-5].pset)].px = (yyvsp[-2].val);
	    g[(yyvsp[-5].pset)].py = (yyvsp[0].val);
	}
#line 7088 "y.tab.c"
    break;

  case 267: /* parmset: GRAPHNO FIXEDPOINT XY expr ',' expr  */
#line 1607 "pars.y"
        {
	    g[(yyvsp[-5].pset)].dsx = (yyvsp[-2].val);
	    g[(yyvsp[-5].pset)].dsy = (yyvsp[0].val);
	}
#line 7097 "y.tab.c"
    break;

  case 268: /* parmset: GRAPHNO FIXEDPOINT TYPE NUMBER  */
#line 1611 "pars.y"
                                         {
	    g[(yyvsp[-3].pset)].pt_type = (int) (yyvsp[0].val);
	}
#line 7105 "y.tab.c"
    break;

  case 269: /* parmset: GRAPHNO MAXP SETS NUMBER  */
#line 1614 "pars.y"
                                   {
	    realloc_graph_plots((yyvsp[-3].pset), (int) (yyvsp[0].val));
	}
#line 7113 "y.tab.c"
    break;

  case 270: /* db: DB CHRSTR ',' CHRSTR  */
#line 1621 "pars.y"
                              { /* set the DB host name, database */
#ifdef PGSQL
		SetDBHost((char *) (yyvsp[-2].pset), (char *) (yyvsp[0].pset));
#endif
	}
#line 7123 "y.tab.c"
    break;

  case 271: /* db: DB GRAPHNO '.' SETNUM CHRSTR ',' CHRSTR ',' CHRSTR ',' CHRSTR ',' NUMBER ',' NUMBER  */
#line 1627 "pars.y"
        { /* graph set site, iid, x, y, cday1, cday2 */
#ifdef PGSQL
		ReadDB((yyvsp[-13].pset), (yyvsp[-11].pset), (char *) (yyvsp[-10].pset), (char *) (yyvsp[-8].pset), (char *) (yyvsp[-6].pset), 
			(char *) (yyvsp[-4].pset), (double) (yyvsp[-2].val), (double) (yyvsp[0].val));
#endif
	}
#line 7134 "y.tab.c"
    break;

  case 272: /* db: DB CHRSTR ',' CHRSTR ',' CHRSTR ',' CHRSTR ',' NUMBER ',' NUMBER  */
#line 1634 "pars.y"
        { /* default graph, next set site, iid, x, y, cday1, cday2 */
#ifdef PGSQL
		ReadDB(cg, -1, (char *) (yyvsp[-10].pset), (char *) (yyvsp[-8].pset), (char *) (yyvsp[-6].pset), 
			(char *) (yyvsp[-4].pset), (double) (yyvsp[-2].val), (double) (yyvsp[0].val));
#endif
	}
#line 7145 "y.tab.c"
    break;

  case 273: /* db: DB GRAPHNO CHRSTR ',' CHRSTR ',' CHRSTR ',' CHRSTR ',' NUMBER ',' NUMBER  */
#line 1641 "pars.y"
        { /* default graph, next set site, iid, x, y, cday1, cday2 */
#ifdef PGSQL
		ReadDB((yyvsp[-11].pset), -1, (char *) (yyvsp[-10].pset), (char *) (yyvsp[-8].pset), (char *) (yyvsp[-6].pset), 
			(char *) (yyvsp[-4].pset), (double) (yyvsp[-2].val), (double) (yyvsp[0].val));
#endif
	}
#line 7156 "y.tab.c"
    break;

  case 274: /* db: DB GRAPHNO '.' SETNUM ADP CHRSTR ',' CHRSTR ',' CHRSTR ',' CHRSTR ',' NUMBER ',' NUMBER ',' NUMBER  */
#line 1648 "pars.y"
        { /* graph set site, iid, x, y, bin#, cday1, cday2 */
#ifdef PGSQL
		ReadDBADP((yyvsp[-16].pset), (yyvsp[-14].pset), (char *) (yyvsp[-12].pset), (char *) (yyvsp[-10].pset), (char *) (yyvsp[-8].pset), 
			(char *) (yyvsp[-6].pset), (int) (yyvsp[-4].val), (double) (yyvsp[-2].val), (double) (yyvsp[0].val));
#endif
	}
#line 7167 "y.tab.c"
    break;

  case 275: /* db: DB GRAPHNO '.' SETNUM CHRSTR  */
#line 1655 "pars.y"
        { /* graph set SQL */
#ifdef PGSQL
		ReadDBSQL((yyvsp[-3].pset), (yyvsp[-1].pset), (char *) (yyvsp[0].pset));
#endif
	}
#line 7177 "y.tab.c"
    break;

  case 276: /* setvelocity: VELOCITY SCALE NUMBER  */
#line 1663 "pars.y"
                              { g[cg].vp.vscale = (yyvsp[0].val); }
#line 7183 "y.tab.c"
    break;

  case 277: /* setvelocity: VELOCITY LEGEND onoff  */
#line 1664 "pars.y"
                                { g[cg].vp.active = (yyvsp[0].pset); }
#line 7189 "y.tab.c"
    break;

  case 278: /* setvelocity: VELOCITY LEGEND XY NUMBER ',' NUMBER  */
#line 1665 "pars.y"
                                               { 
		    g[cg].vp.velx = (yyvsp[-2].val); 
		    g[cg].vp.vely = (yyvsp[0].val); 
	}
#line 7198 "y.tab.c"
    break;

  case 279: /* setvelocity: VELOCITY LEGEND LENGTH NUMBER  */
#line 1669 "pars.y"
                                        { g[cg].vp.userlength = (double) (yyvsp[0].val); }
#line 7204 "y.tab.c"
    break;

  case 280: /* setvelocity: VELOCITY LEGEND LABEL CHRSTR  */
#line 1670 "pars.y"
                                       { set_plotstr_string(&g[cg].vp.vstr, (char *) (yyvsp[0].pset)); }
#line 7210 "y.tab.c"
    break;

  case 281: /* setvelocity: VELOCITY LINEWIDTH NUMBER  */
#line 1671 "pars.y"
                                    { g[cg].vp.linew = (int) (yyvsp[0].val); }
#line 7216 "y.tab.c"
    break;

  case 282: /* setvelocity: VELOCITY LINESTYLE NUMBER  */
#line 1672 "pars.y"
                                    { g[cg].vp.lines = (int) (yyvsp[0].val); }
#line 7222 "y.tab.c"
    break;

  case 283: /* setvelocity: VELOCITY COLOR NUMBER  */
#line 1673 "pars.y"
                                { g[cg].vp.color = (int) (yyvsp[0].val); }
#line 7228 "y.tab.c"
    break;

  case 284: /* setvelocity: VELOCITY LOCTYPE worldview  */
#line 1674 "pars.y"
                                     { g[cg].vp.loctype = (yyvsp[0].pset); }
#line 7234 "y.tab.c"
    break;

  case 285: /* setvelocity: VELOCITY ARROW TYPE NUMBER  */
#line 1675 "pars.y"
                                     { g[cg].vp.arrowtype = (int) (yyvsp[0].val); }
#line 7240 "y.tab.c"
    break;

  case 286: /* xytype: XY  */
#line 1679 "pars.y"
           {
	    (yyval.pset) = XY;
	}
#line 7248 "y.tab.c"
    break;

  case 287: /* xytype: XYARC  */
#line 1682 "pars.y"
                {
	    (yyval.pset) = XYARC;
	}
#line 7256 "y.tab.c"
    break;

  case 288: /* xytype: XYBOX  */
#line 1685 "pars.y"
                {
	    (yyval.pset) = XYBOX;
	}
#line 7264 "y.tab.c"
    break;

  case 289: /* xytype: XYBOXPLOT  */
#line 1688 "pars.y"
                    {
	    (yyval.pset) = XYBOXPLOT;
	}
#line 7272 "y.tab.c"
    break;

  case 290: /* xytype: XYHILO  */
#line 1691 "pars.y"
                 {
	    (yyval.pset) = XYHILO;
	}
#line 7280 "y.tab.c"
    break;

  case 291: /* xytype: XYRT  */
#line 1694 "pars.y"
               {
	    (yyval.pset) = XYRT;
	}
#line 7288 "y.tab.c"
    break;

  case 292: /* xytype: XYSEG  */
#line 1697 "pars.y"
                {
	    (yyval.pset) = XYSEG;
	}
#line 7296 "y.tab.c"
    break;

  case 293: /* xytype: XYSTRING  */
#line 1700 "pars.y"
                   {
	    (yyval.pset) = XYSTRING;
	}
#line 7304 "y.tab.c"
    break;

  case 294: /* xytype: XYDX  */
#line 1703 "pars.y"
               {
	    (yyval.pset) = XYDX;
	}
#line 7312 "y.tab.c"
    break;

  case 295: /* xytype: XYDY  */
#line 1706 "pars.y"
               {
	    (yyval.pset) = XYDY;
	}
#line 7320 "y.tab.c"
    break;

  case 296: /* xytype: XYDXDX  */
#line 1709 "pars.y"
                 {
	    (yyval.pset) = XYDXDX;
	}
#line 7328 "y.tab.c"
    break;

  case 297: /* xytype: XYDYDY  */
#line 1712 "pars.y"
                 {
	    (yyval.pset) = XYDYDY;
	}
#line 7336 "y.tab.c"
    break;

  case 298: /* xytype: XYDXDY  */
#line 1715 "pars.y"
                 {
	    (yyval.pset) = XYDXDY;
	}
#line 7344 "y.tab.c"
    break;

  case 299: /* xytype: XYX2Y2  */
#line 1718 "pars.y"
                 {
	    (yyval.pset) = XYX2Y2;
	}
#line 7352 "y.tab.c"
    break;

  case 300: /* xytype: XYXX  */
#line 1721 "pars.y"
               {
	    (yyval.pset) = XYXX;
	}
#line 7360 "y.tab.c"
    break;

  case 301: /* xytype: XYYY  */
#line 1724 "pars.y"
               {
	    (yyval.pset) = XYYY;
	}
#line 7368 "y.tab.c"
    break;

  case 302: /* xytype: XYZ  */
#line 1727 "pars.y"
              {
	    (yyval.pset) = XYZ;
	}
#line 7376 "y.tab.c"
    break;

  case 303: /* xytype: XYZW  */
#line 1730 "pars.y"
               {
	    (yyval.pset) = XYZW;
	}
#line 7384 "y.tab.c"
    break;

  case 304: /* xytype: XYUV  */
#line 1733 "pars.y"
               {
	    (yyval.pset) = XYUV;
	}
#line 7392 "y.tab.c"
    break;

  case 305: /* xytype: RECTGRID  */
#line 1736 "pars.y"
                   {
	    (yyval.pset) = RECTGRID;
	}
#line 7400 "y.tab.c"
    break;

  case 306: /* xytype: FEGRID  */
#line 1739 "pars.y"
                 {
	    (yyval.pset) = FEGRID;
	}
#line 7408 "y.tab.c"
    break;

  case 307: /* xytype: NXY  */
#line 1742 "pars.y"
              {
	    (yyval.pset) = NXY;
	}
#line 7416 "y.tab.c"
    break;

  case 308: /* xytype: BIN  */
#line 1745 "pars.y"
              {
	    (yyval.pset) = BIN;
	}
#line 7424 "y.tab.c"
    break;

  case 309: /* graphtype: XY  */
#line 1751 "pars.y"
           {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7432 "y.tab.c"
    break;

  case 310: /* graphtype: LOGX  */
#line 1754 "pars.y"
               {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7440 "y.tab.c"
    break;

  case 311: /* graphtype: LOGY  */
#line 1757 "pars.y"
               {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7448 "y.tab.c"
    break;

  case 312: /* graphtype: LOGXY  */
#line 1760 "pars.y"
                {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7456 "y.tab.c"
    break;

  case 313: /* graphtype: BAR  */
#line 1763 "pars.y"
              {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7464 "y.tab.c"
    break;

  case 314: /* graphtype: HBAR  */
#line 1766 "pars.y"
               {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7472 "y.tab.c"
    break;

  case 315: /* graphtype: STACKEDBAR  */
#line 1769 "pars.y"
                     {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7480 "y.tab.c"
    break;

  case 316: /* graphtype: STACKEDHBAR  */
#line 1772 "pars.y"
                      {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7488 "y.tab.c"
    break;

  case 317: /* graphtype: POLAR  */
#line 1775 "pars.y"
                {
	    (yyval.pset) = XY;		/* not active */
	}
#line 7496 "y.tab.c"
    break;

  case 318: /* graphtype: XYFIXED  */
#line 1778 "pars.y"
                  {
	    (yyval.pset) = XY;		/* not active */
	}
#line 7504 "y.tab.c"
    break;

  case 319: /* graphtype: BOXPLOT  */
#line 1781 "pars.y"
                  {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7512 "y.tab.c"
    break;

  case 320: /* graphtype: HBOXPLOT  */
#line 1784 "pars.y"
                   {
	    (yyval.pset) = (yyvsp[0].pset);
	}
#line 7520 "y.tab.c"
    break;

  case 321: /* pagelayout: FREE  */
#line 1790 "pars.y"
             {
            (yyval.pset) = FREE;
        }
#line 7528 "y.tab.c"
    break;

  case 322: /* pagelayout: LANDSCAPE  */
#line 1793 "pars.y"
                    {
            (yyval.pset) = LANDSCAPE;
        }
#line 7536 "y.tab.c"
    break;

  case 323: /* pagelayout: PORTRAIT  */
#line 1796 "pars.y"
                   {
            (yyval.pset) = PORTRAIT;
        }
#line 7544 "y.tab.c"
    break;

  case 324: /* pagelayout: FIXED  */
#line 1799 "pars.y"
                {
            (yyval.pset) = FIXED;
        }
#line 7552 "y.tab.c"
    break;

  case 325: /* regiontype: ABOVE  */
#line 1805 "pars.y"
              {}
#line 7558 "y.tab.c"
    break;

  case 326: /* regiontype: BELOW  */
#line 1806 "pars.y"
                 {}
#line 7564 "y.tab.c"
    break;

  case 327: /* regiontype: LEFT  */
#line 1807 "pars.y"
                {}
#line 7570 "y.tab.c"
    break;

  case 328: /* regiontype: RIGHT  */
#line 1808 "pars.y"
                 {}
#line 7576 "y.tab.c"
    break;

  case 329: /* regiontype: POLYI  */
#line 1809 "pars.y"
                 {}
#line 7582 "y.tab.c"
    break;

  case 330: /* regiontype: POLYO  */
#line 1810 "pars.y"
                 {}
#line 7588 "y.tab.c"
    break;

  case 331: /* elcirctype: SCALAR  */
#line 1814 "pars.y"
               {}
#line 7594 "y.tab.c"
    break;

  case 332: /* elcirctype: VECTOR  */
#line 1815 "pars.y"
                  {}
#line 7600 "y.tab.c"
    break;

  case 333: /* elcirctype: HEAT  */
#line 1816 "pars.y"
                {}
#line 7606 "y.tab.c"
    break;

  case 334: /* set_setprop: selectsets setprop  */
#line 1820 "pars.y"
                           {}
#line 7612 "y.tab.c"
    break;

  case 335: /* setprop: onoff  */
#line 1835 "pars.y"
              {
	    set_prop(whichgraph, SET, SETNUM, whichset, ACTIVE, (yyvsp[0].pset), 0);
	}
#line 7620 "y.tab.c"
    break;

  case 336: /* setprop: IGNORE  */
#line 1838 "pars.y"
                 {
	    set_prop(whichgraph, SET, SETNUM, whichset, ACTIVE, (yyvsp[0].pset), 0);
	}
#line 7628 "y.tab.c"
    break;

  case 337: /* setprop: TYPE xytype  */
#line 1841 "pars.y"
                      {
	    set_prop(whichgraph, SET, SETNUM, whichset, TYPE, (yyvsp[0].pset), 0);
	}
#line 7636 "y.tab.c"
    break;

  case 338: /* setprop: MISSINGP expr  */
#line 1844 "pars.y"
                        {
	    set_prop(whichgraph, SET, SETNUM, whichset, MISSINGP, (yyvsp[0].val), 0);
	}
#line 7644 "y.tab.c"
    break;

  case 339: /* setprop: PREC NUMBER  */
#line 1847 "pars.y"
                      {
	    set_prop(whichgraph, SET, SETNUM, whichset, PREC, (int) (yyvsp[0].val), 0);
	}
#line 7652 "y.tab.c"
    break;

  case 340: /* setprop: FORMAT formatchoice  */
#line 1850 "pars.y"
                              {
	    set_prop(whichgraph, SET, SETNUM, whichset, FORMAT, (yyvsp[0].pset), 0);
	}
#line 7660 "y.tab.c"
    break;

  case 341: /* setprop: SYMBOL expr  */
#line 1853 "pars.y"
                      {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, TYPE, (int) (yyvsp[0].val), 0);
	}
#line 7668 "y.tab.c"
    break;

  case 342: /* setprop: SYMBOL FILL NUMBER  */
#line 1856 "pars.y"
                             {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, FILL, (int) (yyvsp[0].val), 0);
	}
#line 7676 "y.tab.c"
    break;

  case 343: /* setprop: SYMBOL CENTER torf  */
#line 1859 "pars.y"
                             {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, CENTER, ((yyvsp[0].pset) == TRUEP), 0);
	}
#line 7684 "y.tab.c"
    break;

  case 344: /* setprop: SYMBOL SIZE expr  */
#line 1862 "pars.y"
                           {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, SIZE, (yyvsp[0].val), 0);
	}
#line 7692 "y.tab.c"
    break;

  case 345: /* setprop: SYMBOL CHAR NUMBER  */
#line 1865 "pars.y"
                             {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, CHAR, (int) (yyvsp[0].val), 0);
	}
#line 7700 "y.tab.c"
    break;

  case 346: /* setprop: SYMBOL SKIP NUMBER  */
#line 1868 "pars.y"
                             {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, SKIP, (int) (yyvsp[0].val), 0);
	}
#line 7708 "y.tab.c"
    break;

  case 347: /* setprop: SYMBOL COLOR expr  */
#line 1871 "pars.y"
                            {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, COLOR, (int) (yyvsp[0].val), 0);
	}
#line 7716 "y.tab.c"
    break;

  case 348: /* setprop: SYMBOL LINEWIDTH NUMBER  */
#line 1874 "pars.y"
                                  {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, LINEWIDTH, (int) (yyvsp[0].val), 0);
	}
#line 7724 "y.tab.c"
    break;

  case 349: /* setprop: SYMBOL LINESTYLE NUMBER  */
#line 1877 "pars.y"
                                  {
	    set_prop(whichgraph, SET, SETNUM, whichset, SYMBOL, LINESTYLE, (int) (yyvsp[0].val), 0);
	}
#line 7732 "y.tab.c"
    break;

  case 350: /* setprop: prop NUMBER  */
#line 1880 "pars.y"
                      {
	    set_prop(whichgraph, SET, SETNUM, whichset, (yyvsp[-1].pset), (int) (yyvsp[0].val), 0);
	}
#line 7740 "y.tab.c"
    break;

  case 351: /* setprop: FILL NUMBER  */
#line 1883 "pars.y"
                      {
	    set_prop(whichgraph, SET, SETNUM, whichset, FILL, TYPE, (int) (yyvsp[0].val), 0);
	}
#line 7748 "y.tab.c"
    break;

  case 352: /* setprop: FILL WITH colpat  */
#line 1886 "pars.y"
                           {
	    set_prop(whichgraph, SET, SETNUM, whichset, FILL, WITH, (yyvsp[0].pset), 0);
	}
#line 7756 "y.tab.c"
    break;

  case 353: /* setprop: FILL colpat NUMBER  */
#line 1889 "pars.y"
                             {
	    set_prop(whichgraph, SET, SETNUM, whichset, FILL, (yyvsp[-1].pset), (int) (yyvsp[0].val), 0);
	}
#line 7764 "y.tab.c"
    break;

  case 354: /* setprop: SKIP NUMBER  */
#line 1892 "pars.y"
                      {
	    set_prop(whichgraph, SET, SETNUM, whichset, SKIP, (int) (yyvsp[0].val), 0);
	}
#line 7772 "y.tab.c"
    break;

  case 355: /* setprop: ERRORBAR LENGTH NUMBER  */
#line 1895 "pars.y"
                                 {
	    set_prop(whichgraph, SET, SETNUM, whichset, ERRORBAR, LENGTH, (yyvsp[0].val), 0);
	}
#line 7780 "y.tab.c"
    break;

  case 356: /* setprop: ERRORBAR TYPE opchoice  */
#line 1898 "pars.y"
                                 {
	    set_prop(whichgraph, SET, SETNUM, whichset, ERRORBAR, TYPE, (yyvsp[0].pset), 0);
	}
#line 7788 "y.tab.c"
    break;

  case 357: /* setprop: ERRORBAR LINEWIDTH NUMBER  */
#line 1901 "pars.y"
                                    {
	    set_prop(whichgraph, SET, SETNUM, whichset, ERRORBAR, LINEWIDTH, (int) (yyvsp[0].val), 0);
	}
#line 7796 "y.tab.c"
    break;

  case 358: /* setprop: ERRORBAR LINESTYLE NUMBER  */
#line 1904 "pars.y"
                                    {
	    set_prop(whichgraph, SET, SETNUM, whichset, ERRORBAR, LINESTYLE, (int) (yyvsp[0].val), 0);
	}
#line 7804 "y.tab.c"
    break;

  case 359: /* setprop: ERRORBAR RISER onoff  */
#line 1907 "pars.y"
                               {
	    set_prop(whichgraph, SET, SETNUM, whichset, ERRORBAR, RISER, ACTIVE, (yyvsp[0].pset), 0);
	}
#line 7812 "y.tab.c"
    break;

  case 360: /* setprop: ERRORBAR RISER LINEWIDTH NUMBER  */
#line 1910 "pars.y"
                                          {
	    set_prop(whichgraph, SET, SETNUM, whichset, ERRORBAR, RISER, LINEWIDTH, (int) (yyvsp[0].val), 0);
	}
#line 7820 "y.tab.c"
    break;

  case 361: /* setprop: ERRORBAR RISER LINESTYLE NUMBER  */
#line 1913 "pars.y"
                                          {
	    set_prop(whichgraph, SET, SETNUM, whichset, ERRORBAR, RISER, LINESTYLE, (int) (yyvsp[0].val), 0);
	}
#line 7828 "y.tab.c"
    break;

  case 362: /* setprop: XYZ expr ',' expr  */
#line 1916 "pars.y"
                            {
	    set_prop(whichgraph, SET, SETNUM, whichset, XYZ, (yyvsp[-2].val), (yyvsp[0].val), 0);
	}
#line 7836 "y.tab.c"
    break;

  case 363: /* setprop: COMMENT CHRSTR  */
#line 1919 "pars.y"
                         {
	    set_prop(whichgraph, SET, SETNUM, whichset, COMMENT, (char *) (yyvsp[0].pset), 0);
	    free((char *) (yyvsp[0].pset));
	}
#line 7845 "y.tab.c"
    break;

  case 364: /* setaxis: axis  */
#line 1926 "pars.y"
             {}
#line 7851 "y.tab.c"
    break;

  case 365: /* setaxis: axis axisfeature  */
#line 1927 "pars.y"
                            {}
#line 7857 "y.tab.c"
    break;

  case 366: /* setaxis: allaxes  */
#line 1928 "pars.y"
                   {}
#line 7863 "y.tab.c"
    break;

  case 367: /* setaxis: GRAPHS axis  */
#line 1929 "pars.y"
                       {}
#line 7869 "y.tab.c"
    break;

  case 368: /* setaxis: GRAPHS axis axisfeature  */
#line 1930 "pars.y"
                                   {}
#line 7875 "y.tab.c"
    break;

  case 369: /* setaxis: GRAPHS allaxes  */
#line 1931 "pars.y"
                          {}
#line 7881 "y.tab.c"
    break;

  case 370: /* axis: XAXIS  */
#line 1935 "pars.y"
              {}
#line 7887 "y.tab.c"
    break;

  case 371: /* axis: YAXIS  */
#line 1936 "pars.y"
                 {}
#line 7893 "y.tab.c"
    break;

  case 372: /* axis: ALTXAXIS  */
#line 1937 "pars.y"
                    {}
#line 7899 "y.tab.c"
    break;

  case 373: /* axis: ALTYAXIS  */
#line 1938 "pars.y"
                    {}
#line 7905 "y.tab.c"
    break;

  case 374: /* axis: ZEROXAXIS  */
#line 1939 "pars.y"
                     {}
#line 7911 "y.tab.c"
    break;

  case 375: /* axis: ZEROYAXIS  */
#line 1940 "pars.y"
                     {}
#line 7917 "y.tab.c"
    break;

  case 376: /* allaxes: AXES axesprops  */
#line 1944 "pars.y"
                       {}
#line 7923 "y.tab.c"
    break;

  case 377: /* allaxes: XAXES axesprops  */
#line 1945 "pars.y"
                           {}
#line 7929 "y.tab.c"
    break;

  case 378: /* allaxes: YAXES axesprops  */
#line 1946 "pars.y"
                           {}
#line 7935 "y.tab.c"
    break;

  case 379: /* axesprops: onoff  */
#line 1950 "pars.y"
              {
	    set_axis_prop(whichgraph, naxis, (yyvsp[0].pset), 0.0);
	}
#line 7943 "y.tab.c"
    break;

  case 380: /* axesprops: COLOR NUMBER  */
#line 1953 "pars.y"
                       {
	    set_axis_prop(whichgraph, naxis, (yyvsp[-1].pset), (yyvsp[0].val));
	}
#line 7951 "y.tab.c"
    break;

  case 381: /* axesprops: LINEWIDTH NUMBER  */
#line 1956 "pars.y"
                           {
	    set_axis_prop(whichgraph, naxis, (yyvsp[-1].pset), (yyvsp[0].val));
	}
#line 7959 "y.tab.c"
    break;

  case 382: /* axesprops: LINESTYLE NUMBER  */
#line 1959 "pars.y"
                           {
	    set_axis_prop(whichgraph, naxis, (yyvsp[-1].pset), (yyvsp[0].val));
	}
#line 7967 "y.tab.c"
    break;

  case 383: /* axesprops: FONTP NUMBER  */
#line 1962 "pars.y"
                       {
	    set_axis_prop(whichgraph, naxis, (yyvsp[-1].pset), (yyvsp[0].val));
	}
#line 7975 "y.tab.c"
    break;

  case 384: /* axesprops: CHAR SIZE NUMBER  */
#line 1965 "pars.y"
                           {
	    set_axis_prop(whichgraph, naxis, (yyvsp[-2].pset), (yyvsp[0].val));
	}
#line 7983 "y.tab.c"
    break;

  case 385: /* axesprops: GRID onoff  */
#line 1968 "pars.y"
                     {
	    set_axis_prop(whichgraph, naxis, (yyvsp[-1].pset), (yyvsp[0].pset));
	}
#line 7991 "y.tab.c"
    break;

  case 386: /* axisfeature: TICKP tickdesc  */
#line 1974 "pars.y"
                       {}
#line 7997 "y.tab.c"
    break;

  case 387: /* axisfeature: TICKLABEL ticklabeldesc  */
#line 1975 "pars.y"
                                   {}
#line 8003 "y.tab.c"
    break;

  case 388: /* axisfeature: LABEL axislabeldesc  */
#line 1976 "pars.y"
                               {}
#line 8009 "y.tab.c"
    break;

  case 389: /* axisfeature: BAR axisbardesc  */
#line 1977 "pars.y"
                           {}
#line 8015 "y.tab.c"
    break;

  case 390: /* axisfeature: onoff  */
#line 1978 "pars.y"
                 {
	    g[cg].t[naxis].active = (yyvsp[0].pset);
	}
#line 8023 "y.tab.c"
    break;

  case 391: /* tickdesc: tickattr  */
#line 1984 "pars.y"
                 {}
#line 8029 "y.tab.c"
    break;

  case 392: /* tickdesc: tickdesc tickattr  */
#line 1985 "pars.y"
                             {}
#line 8035 "y.tab.c"
    break;

  case 393: /* tickattr: onoff  */
#line 1990 "pars.y"
        {
	    g[cg].t[naxis].t_flag = (yyvsp[0].pset);
	    g[cg].t[naxis].t_mflag = (yyvsp[0].pset);
	}
#line 8044 "y.tab.c"
    break;

  case 394: /* tickattr: MAJOR onoff  */
#line 1994 "pars.y"
                      {
	    g[cg].t[naxis].t_flag = (yyvsp[0].pset);
	}
#line 8052 "y.tab.c"
    break;

  case 395: /* tickattr: MINOR onoff  */
#line 1997 "pars.y"
                      {
	    g[cg].t[naxis].t_mflag = (yyvsp[0].pset);
	}
#line 8060 "y.tab.c"
    break;

  case 396: /* tickattr: MAJOR expr  */
#line 2000 "pars.y"
                     {
	    g[cg].t[naxis].tmajor = (yyvsp[0].val);
	}
#line 8068 "y.tab.c"
    break;

  case 397: /* tickattr: MINOR expr  */
#line 2003 "pars.y"
                     {
	    g[cg].t[naxis].tminor = (yyvsp[0].val);
	}
#line 8076 "y.tab.c"
    break;

  case 398: /* tickattr: OFFSETX expr  */
#line 2006 "pars.y"
                       {
	    g[cg].t[naxis].offsx = (yyvsp[0].val);
	}
#line 8084 "y.tab.c"
    break;

  case 399: /* tickattr: OFFSETY expr  */
#line 2009 "pars.y"
                       {
	    g[cg].t[naxis].offsy = (yyvsp[0].val);
	}
#line 8092 "y.tab.c"
    break;

  case 400: /* tickattr: ALT onoff  */
#line 2012 "pars.y"
                    {
	    g[cg].t[naxis].alt = (yyvsp[0].pset);
	}
#line 8100 "y.tab.c"
    break;

  case 401: /* tickattr: MINP expr  */
#line 2015 "pars.y"
                    {
	    g[cg].t[naxis].tmin = (yyvsp[0].val);
	}
#line 8108 "y.tab.c"
    break;

  case 402: /* tickattr: MAXP expr  */
#line 2018 "pars.y"
                    {
	    g[cg].t[naxis].tmax = (yyvsp[0].val);
	}
#line 8116 "y.tab.c"
    break;

  case 403: /* tickattr: DEFAULT NUMBER  */
#line 2021 "pars.y"
                         {
	    g[cg].t[naxis].t_num = (int) (yyvsp[0].val);
	}
#line 8124 "y.tab.c"
    break;

  case 404: /* tickattr: inoutchoice  */
#line 2024 "pars.y"
                      {
	    g[cg].t[naxis].t_inout = (yyvsp[0].pset);
	}
#line 8132 "y.tab.c"
    break;

  case 405: /* tickattr: LOG onoff  */
#line 2027 "pars.y"
                    {
	    g[cg].t[naxis].t_log = (yyvsp[0].pset);
	}
#line 8140 "y.tab.c"
    break;

  case 406: /* tickattr: SIZE NUMBER  */
#line 2030 "pars.y"
                      {
	    g[cg].t[naxis].t_size = (yyvsp[0].val);
	}
#line 8148 "y.tab.c"
    break;

  case 407: /* tickattr: MAJOR SIZE NUMBER  */
#line 2033 "pars.y"
                            {
	    g[cg].t[naxis].t_size = (yyvsp[0].val);
	}
#line 8156 "y.tab.c"
    break;

  case 408: /* tickattr: MINOR SIZE NUMBER  */
#line 2036 "pars.y"
                            {
	    g[cg].t[naxis].t_msize = (yyvsp[0].val);
	}
#line 8164 "y.tab.c"
    break;

  case 409: /* tickattr: COLOR NUMBER  */
#line 2039 "pars.y"
                       {
	    g[cg].t[naxis].t_color = g[cg].t[naxis].t_mcolor = (int) (yyvsp[0].val);
	}
#line 8172 "y.tab.c"
    break;

  case 410: /* tickattr: LINEWIDTH NUMBER  */
#line 2042 "pars.y"
                           {
	    g[cg].t[naxis].t_linew = g[cg].t[naxis].t_mlinew = (int) (yyvsp[0].val);
	}
#line 8180 "y.tab.c"
    break;

  case 411: /* tickattr: MAJOR COLOR NUMBER  */
#line 2045 "pars.y"
                             {
	    g[cg].t[naxis].t_color = (int) (yyvsp[0].val);
	}
#line 8188 "y.tab.c"
    break;

  case 412: /* tickattr: MINOR COLOR NUMBER  */
#line 2048 "pars.y"
                             {
	    g[cg].t[naxis].t_mcolor = (int) (yyvsp[0].val);
	}
#line 8196 "y.tab.c"
    break;

  case 413: /* tickattr: MAJOR LINEWIDTH NUMBER  */
#line 2051 "pars.y"
                                 {
	    g[cg].t[naxis].t_linew = (int) (yyvsp[0].val);
	}
#line 8204 "y.tab.c"
    break;

  case 414: /* tickattr: MINOR LINEWIDTH NUMBER  */
#line 2054 "pars.y"
                                 {
	    g[cg].t[naxis].t_mlinew = (int) (yyvsp[0].val);
	}
#line 8212 "y.tab.c"
    break;

  case 415: /* tickattr: MAJOR LINESTYLE NUMBER  */
#line 2057 "pars.y"
                                 {
	    g[cg].t[naxis].t_lines = (int) (yyvsp[0].val);
	}
#line 8220 "y.tab.c"
    break;

  case 416: /* tickattr: MINOR LINESTYLE NUMBER  */
#line 2060 "pars.y"
                                 {
	    g[cg].t[naxis].t_mlines = (int) (yyvsp[0].val);
	}
#line 8228 "y.tab.c"
    break;

  case 417: /* tickattr: MAJOR GRID onoff  */
#line 2063 "pars.y"
                           {
	    g[cg].t[naxis].t_gridflag = (yyvsp[0].pset);
	}
#line 8236 "y.tab.c"
    break;

  case 418: /* tickattr: MINOR GRID onoff  */
#line 2066 "pars.y"
                           {
	    g[cg].t[naxis].t_mgridflag = (yyvsp[0].pset);
	}
#line 8244 "y.tab.c"
    break;

  case 419: /* tickattr: OP opchoice  */
#line 2069 "pars.y"
                      {
	    g[cg].t[naxis].t_op = (yyvsp[0].pset);
	}
#line 8252 "y.tab.c"
    break;

  case 420: /* tickattr: TYPE AUTO  */
#line 2072 "pars.y"
                    {
	    g[cg].t[naxis].t_type = AUTO;
	}
#line 8260 "y.tab.c"
    break;

  case 421: /* tickattr: TYPE SPEC  */
#line 2075 "pars.y"
                    {
	    g[cg].t[naxis].t_type = SPEC;
	}
#line 8268 "y.tab.c"
    break;

  case 422: /* tickattr: SPEC NUMBER  */
#line 2078 "pars.y"
                      {
	    g[cg].t[naxis].t_spec = (int) (yyvsp[0].val);
	}
#line 8276 "y.tab.c"
    break;

  case 423: /* tickattr: NUMBER ',' expr  */
#line 2081 "pars.y"
                          {
	    g[cg].t[naxis].t_specloc[(int) (yyvsp[-2].val)] = (yyvsp[0].val);
	}
#line 8284 "y.tab.c"
    break;

  case 426: /* ticklabelattr: onoff  */
#line 2092 "pars.y"
              {
	    g[cg].t[naxis].tl_flag = (yyvsp[0].pset);
	}
#line 8292 "y.tab.c"
    break;

  case 427: /* ticklabelattr: TYPE AUTO  */
#line 2095 "pars.y"
                    {
	    g[cg].t[naxis].tl_type = AUTO;
	}
#line 8300 "y.tab.c"
    break;

  case 428: /* ticklabelattr: TYPE SPEC  */
#line 2098 "pars.y"
                    {
	    g[cg].t[naxis].tl_type = SPEC;
	}
#line 8308 "y.tab.c"
    break;

  case 429: /* ticklabelattr: PREC NUMBER  */
#line 2101 "pars.y"
                      {
	    g[cg].t[naxis].tl_prec = (int) (yyvsp[0].val);
	}
#line 8316 "y.tab.c"
    break;

  case 430: /* ticklabelattr: FORMAT formatchoice  */
#line 2104 "pars.y"
                              {
	    g[cg].t[naxis].tl_format = (yyvsp[0].pset);
	}
#line 8324 "y.tab.c"
    break;

  case 431: /* ticklabelattr: FORMAT NUMBER  */
#line 2107 "pars.y"
                        {
	    g[cg].t[naxis].tl_format = (yyvsp[0].val);
	}
#line 8332 "y.tab.c"
    break;

  case 432: /* ticklabelattr: APPEND CHRSTR  */
#line 2110 "pars.y"
                        {
	    strcpy(g[cg].t[naxis].tl_appstr, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 8341 "y.tab.c"
    break;

  case 433: /* ticklabelattr: PREPEND CHRSTR  */
#line 2114 "pars.y"
                         {
	    strcpy(g[cg].t[naxis].tl_prestr, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 8350 "y.tab.c"
    break;

  case 434: /* ticklabelattr: LAYOUT HORIZONTAL  */
#line 2118 "pars.y"
                            {
	    g[cg].t[naxis].tl_layout = HORIZONTAL;
	}
#line 8358 "y.tab.c"
    break;

  case 435: /* ticklabelattr: LAYOUT VERTICAL  */
#line 2121 "pars.y"
                          {
	    g[cg].t[naxis].tl_layout = VERTICAL;
	}
#line 8366 "y.tab.c"
    break;

  case 436: /* ticklabelattr: LAYOUT SPEC  */
#line 2124 "pars.y"
                      {
	    g[cg].t[naxis].tl_layout = SPEC;
	}
#line 8374 "y.tab.c"
    break;

  case 437: /* ticklabelattr: ANGLE NUMBER  */
#line 2127 "pars.y"
                       {
	    g[cg].t[naxis].tl_angle = (int) (yyvsp[0].val);
	}
#line 8382 "y.tab.c"
    break;

  case 438: /* ticklabelattr: JUST justchoice  */
#line 2130 "pars.y"
                          {
	    g[cg].t[naxis].tl_just = (int) (yyvsp[0].pset);
	}
#line 8390 "y.tab.c"
    break;

  case 439: /* ticklabelattr: SKIP NUMBER  */
#line 2133 "pars.y"
                      {
	    g[cg].t[naxis].tl_skip = (int) (yyvsp[0].val);
	}
#line 8398 "y.tab.c"
    break;

  case 440: /* ticklabelattr: STAGGER NUMBER  */
#line 2136 "pars.y"
                         {
	    g[cg].t[naxis].tl_staggered = (int) (yyvsp[0].val);
	}
#line 8406 "y.tab.c"
    break;

  case 441: /* ticklabelattr: OP opchoice  */
#line 2139 "pars.y"
                      {
	    g[cg].t[naxis].tl_op = (yyvsp[0].pset);
	}
#line 8414 "y.tab.c"
    break;

  case 442: /* ticklabelattr: SIGN signchoice  */
#line 2142 "pars.y"
                          {
	    g[cg].t[naxis].tl_sign = (yyvsp[0].pset);
	}
#line 8422 "y.tab.c"
    break;

  case 443: /* ticklabelattr: START expr  */
#line 2145 "pars.y"
                     {
	    g[cg].t[naxis].tl_start = (yyvsp[0].val);
	}
#line 8430 "y.tab.c"
    break;

  case 444: /* ticklabelattr: STOP expr  */
#line 2148 "pars.y"
                    {
	    g[cg].t[naxis].tl_stop = (yyvsp[0].val);
	}
#line 8438 "y.tab.c"
    break;

  case 445: /* ticklabelattr: START TYPE SPEC  */
#line 2151 "pars.y"
                          {
	    g[cg].t[naxis].tl_starttype = (int) (yyvsp[0].pset);
	}
#line 8446 "y.tab.c"
    break;

  case 446: /* ticklabelattr: START TYPE AUTO  */
#line 2154 "pars.y"
                          {
	    g[cg].t[naxis].tl_starttype = (int) (yyvsp[0].pset);
	}
#line 8454 "y.tab.c"
    break;

  case 447: /* ticklabelattr: STOP TYPE SPEC  */
#line 2157 "pars.y"
                         {
	    g[cg].t[naxis].tl_stoptype = (int) (yyvsp[0].pset);
	}
#line 8462 "y.tab.c"
    break;

  case 448: /* ticklabelattr: STOP TYPE AUTO  */
#line 2160 "pars.y"
                         {
	    g[cg].t[naxis].tl_stoptype = (int) (yyvsp[0].pset);
	}
#line 8470 "y.tab.c"
    break;

  case 449: /* ticklabelattr: VGAP NUMBER  */
#line 2163 "pars.y"
                      {
	    g[cg].t[naxis].tl_vgap = (yyvsp[0].val);
	}
#line 8478 "y.tab.c"
    break;

  case 450: /* ticklabelattr: HGAP NUMBER  */
#line 2166 "pars.y"
                      {
	    g[cg].t[naxis].tl_hgap = (yyvsp[0].val);
	}
#line 8486 "y.tab.c"
    break;

  case 451: /* ticklabelattr: CHAR SIZE NUMBER  */
#line 2169 "pars.y"
                           {
	    g[cg].t[naxis].tl_charsize = (yyvsp[0].val);
	}
#line 8494 "y.tab.c"
    break;

  case 452: /* ticklabelattr: FONTP NUMBER  */
#line 2172 "pars.y"
                       {
	    g[cg].t[naxis].tl_font = (int) (yyvsp[0].val);
	}
#line 8502 "y.tab.c"
    break;

  case 453: /* ticklabelattr: COLOR NUMBER  */
#line 2175 "pars.y"
                       {
	    g[cg].t[naxis].tl_color = (int) (yyvsp[0].val);
	}
#line 8510 "y.tab.c"
    break;

  case 454: /* ticklabelattr: LINEWIDTH NUMBER  */
#line 2178 "pars.y"
                           {
	    g[cg].t[naxis].tl_linew = (int) (yyvsp[0].val);
	}
#line 8518 "y.tab.c"
    break;

  case 455: /* ticklabelattr: NUMBER ',' CHRSTR  */
#line 2181 "pars.y"
                            {
	    set_plotstr_string(&g[cg].t[naxis].t_speclab[(int) (yyvsp[-2].val)], (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 8527 "y.tab.c"
    break;

  case 456: /* axislabeldesc: CHRSTR  */
#line 2188 "pars.y"
               {
	    set_plotstr_string(&g[cg].t[naxis].label, (char *) (yyvsp[0].pset));
	    free((char *) (yyvsp[0].pset));
	}
#line 8536 "y.tab.c"
    break;

  case 457: /* axislabeldesc: LAYOUT PERP  */
#line 2192 "pars.y"
                      {
	    g[cg].t[naxis].label_layout = PERP;
	}
#line 8544 "y.tab.c"
    break;

  case 458: /* axislabeldesc: LAYOUT PARA  */
#line 2195 "pars.y"
                      {
	    g[cg].t[naxis].label_layout = PARA;
	}
#line 8552 "y.tab.c"
    break;

  case 459: /* axislabeldesc: PLACE AUTO  */
#line 2198 "pars.y"
                     {
	    g[cg].t[naxis].label_place = (yyvsp[0].pset);
	}
#line 8560 "y.tab.c"
    break;

  case 460: /* axislabeldesc: PLACE SPEC  */
#line 2201 "pars.y"
                     {
	    g[cg].t[naxis].label_place = (yyvsp[0].pset);
	}
#line 8568 "y.tab.c"
    break;

  case 461: /* axislabeldesc: PLACE NUMBER ',' NUMBER  */
#line 2204 "pars.y"
                                  {
	    g[cg].t[naxis].label.x = (yyvsp[-2].val);
	    g[cg].t[naxis].label.y = (yyvsp[0].val);
	}
#line 8577 "y.tab.c"
    break;

  case 462: /* axislabeldesc: JUST justchoice  */
#line 2208 "pars.y"
                          {
	    g[cg].t[naxis].label.just = (int) (yyvsp[0].pset);
	}
#line 8585 "y.tab.c"
    break;

  case 463: /* axislabeldesc: CHAR SIZE NUMBER  */
#line 2211 "pars.y"
                           {
	    g[cg].t[naxis].label.charsize = (yyvsp[0].val);
	}
#line 8593 "y.tab.c"
    break;

  case 464: /* axislabeldesc: FONTP NUMBER  */
#line 2214 "pars.y"
                       {
	    g[cg].t[naxis].label.font = (int) (yyvsp[0].val);
	}
#line 8601 "y.tab.c"
    break;

  case 465: /* axislabeldesc: COLOR NUMBER  */
#line 2217 "pars.y"
                       {
	    g[cg].t[naxis].label.color = (int) (yyvsp[0].val);
	}
#line 8609 "y.tab.c"
    break;

  case 466: /* axislabeldesc: LINEWIDTH NUMBER  */
#line 2220 "pars.y"
                           {
	    g[cg].t[naxis].label.linew = (int) (yyvsp[0].val);
	}
#line 8617 "y.tab.c"
    break;

  case 467: /* axisbardesc: onoff  */
#line 2226 "pars.y"
              {
	    g[cg].t[naxis].t_drawbar = (yyvsp[0].pset);
	}
#line 8625 "y.tab.c"
    break;

  case 468: /* axisbardesc: COLOR NUMBER  */
#line 2229 "pars.y"
                       {
	    g[cg].t[naxis].t_drawbarcolor = (int) (yyvsp[0].val);
	}
#line 8633 "y.tab.c"
    break;

  case 469: /* axisbardesc: LINESTYLE NUMBER  */
#line 2232 "pars.y"
                           {
	    g[cg].t[naxis].t_drawbarlines = (int) (yyvsp[0].val);
	}
#line 8641 "y.tab.c"
    break;

  case 470: /* axisbardesc: LINEWIDTH NUMBER  */
#line 2235 "pars.y"
                           {
	    g[cg].t[naxis].t_drawbarlinew = (int) (yyvsp[0].val);
	}
#line 8649 "y.tab.c"
    break;

  case 471: /* selectsets: GRAPHNO '.' SETNUM  */
#line 2242 "pars.y"
        {
	    whichgraph = (yyvsp[-2].pset);
	    whichset = (yyvsp[0].pset);
	}
#line 8658 "y.tab.c"
    break;

  case 472: /* selectsets: SETNUM  */
#line 2247 "pars.y"
        {
	    whichgraph = cg;
	    whichset = (yyvsp[0].pset);
	}
#line 8667 "y.tab.c"
    break;

  case 473: /* selectsets: SETS  */
#line 2252 "pars.y"
        {
	    whichgraph = cg;
	    whichset = (yyvsp[0].pset);
	}
#line 8676 "y.tab.c"
    break;

  case 474: /* selectsets: GRAPHNO SETS  */
#line 2257 "pars.y"
        {
	    whichgraph = (yyvsp[-1].pset);
	    whichset = (yyvsp[0].pset);
	}
#line 8685 "y.tab.c"
    break;

  case 475: /* selectsets: GRAPHS SETS  */
#line 2262 "pars.y"
        {
	    whichgraph = (yyvsp[-1].pset);
	    whichset = (yyvsp[0].pset);
	}
#line 8694 "y.tab.c"
    break;

  case 476: /* selectsets: GRAPHS SETNUM  */
#line 2267 "pars.y"
        {
	    whichgraph = (yyvsp[-1].pset);
	    whichset = (yyvsp[0].pset);
	}
#line 8703 "y.tab.c"
    break;

  case 477: /* prop: LINESTYLE  */
#line 2274 "pars.y"
                  {
            (yyval.pset) = (yyvsp[0].pset);
        }
#line 8711 "y.tab.c"
    break;

  case 478: /* prop: LINEWIDTH  */
#line 2277 "pars.y"
                    {
            (yyval.pset) = (yyvsp[0].pset);
        }
#line 8719 "y.tab.c"
    break;

  case 479: /* prop: FONTP  */
#line 2280 "pars.y"
                {
            (yyval.pset) = (yyvsp[0].pset);
        }
#line 8727 "y.tab.c"
    break;

  case 480: /* prop: COLOR  */
#line 2283 "pars.y"
                {
            (yyval.pset) = (yyvsp[0].pset);
        }
#line 8735 "y.tab.c"
    break;

  case 481: /* prop: SIZE  */
#line 2286 "pars.y"
               {
            (yyval.pset) = (yyvsp[0].pset);
        }
#line 8743 "y.tab.c"
    break;

  case 482: /* onoff: ON  */
#line 2292 "pars.y"
           {
	    (yyval.pset) = ON;
	}
#line 8751 "y.tab.c"
    break;

  case 483: /* onoff: OFF  */
#line 2295 "pars.y"
              {
	    (yyval.pset) = OFF;
	}
#line 8759 "y.tab.c"
    break;

  case 484: /* colpat: COLOR  */
#line 2301 "pars.y"
              {
	    (yyval.pset) = COLOR;
	}
#line 8767 "y.tab.c"
    break;

  case 485: /* colpat: PATTERN  */
#line 2304 "pars.y"
                  {
	    (yyval.pset) = PATTERN;
	}
#line 8775 "y.tab.c"
    break;

  case 486: /* runtype: RUNAVG  */
#line 2310 "pars.y"
               {
	    (yyval.pset) = RUNAVG;
	}
#line 8783 "y.tab.c"
    break;

  case 487: /* runtype: RUNSTD  */
#line 2313 "pars.y"
                 {
	    (yyval.pset) = RUNSTD;
	}
#line 8791 "y.tab.c"
    break;

  case 488: /* runtype: RUNMED  */
#line 2316 "pars.y"
                 {
	    (yyval.pset) = RUNMED;
	}
#line 8799 "y.tab.c"
    break;

  case 489: /* runtype: RUNMAX  */
#line 2319 "pars.y"
                 {
	    (yyval.pset) = RUNMAX;
	}
#line 8807 "y.tab.c"
    break;

  case 490: /* runtype: RUNMIN  */
#line 2322 "pars.y"
                 {
	    (yyval.pset) = RUNMIN;
	}
#line 8815 "y.tab.c"
    break;

  case 491: /* ffttype: DFT  */
#line 2328 "pars.y"
            {
	    (yyval.pset) = DFT;
	}
#line 8823 "y.tab.c"
    break;

  case 492: /* ffttype: FFT  */
#line 2331 "pars.y"
              {
	    (yyval.pset) = FFT;
	}
#line 8831 "y.tab.c"
    break;

  case 493: /* ffttype: INVDFT  */
#line 2334 "pars.y"
                 {
	    (yyval.pset) = INVDFT;
	}
#line 8839 "y.tab.c"
    break;

  case 494: /* ffttype: INVFFT  */
#line 2337 "pars.y"
                 {
	    (yyval.pset) = INVFFT;
	}
#line 8847 "y.tab.c"
    break;

  case 495: /* sourcetype: DISK  */
#line 2343 "pars.y"
             {
	    (yyval.pset) = DISK;
	}
#line 8855 "y.tab.c"
    break;

  case 496: /* sourcetype: PIPE  */
#line 2346 "pars.y"
               {
	    (yyval.pset) = PIPE;
	}
#line 8863 "y.tab.c"
    break;

  case 497: /* filltype: PATTERN  */
#line 2352 "pars.y"
                {
	    (yyval.pset) = PATTERN;
	}
#line 8871 "y.tab.c"
    break;

  case 498: /* filltype: COLOR  */
#line 2355 "pars.y"
                {
	    (yyval.pset) = COLOR;
	}
#line 8879 "y.tab.c"
    break;

  case 499: /* filltype: NONE  */
#line 2358 "pars.y"
               {
	    (yyval.pset) = NONE;
	}
#line 8887 "y.tab.c"
    break;

  case 500: /* opchoice: TOP  */
#line 2364 "pars.y"
            {
	    (yyval.pset) = TOP;
	}
#line 8895 "y.tab.c"
    break;

  case 501: /* opchoice: BOTTOM  */
#line 2367 "pars.y"
                 {
	    (yyval.pset) = BOTTOM;
	}
#line 8903 "y.tab.c"
    break;

  case 502: /* opchoice: LEFT  */
#line 2370 "pars.y"
               {
	    (yyval.pset) = LEFT;
	}
#line 8911 "y.tab.c"
    break;

  case 503: /* opchoice: RIGHT  */
#line 2373 "pars.y"
                {
	    (yyval.pset) = RIGHT;
	}
#line 8919 "y.tab.c"
    break;

  case 504: /* opchoice: BOTH  */
#line 2376 "pars.y"
               {
	    (yyval.pset) = BOTH;
	}
#line 8927 "y.tab.c"
    break;

  case 505: /* justchoice: RIGHT  */
#line 2382 "pars.y"
              {
	    (yyval.pset) = RIGHT;
	}
#line 8935 "y.tab.c"
    break;

  case 506: /* justchoice: LEFT  */
#line 2385 "pars.y"
               {
	    (yyval.pset) = LEFT;
	}
#line 8943 "y.tab.c"
    break;

  case 507: /* justchoice: CENTER  */
#line 2388 "pars.y"
                 {
	    (yyval.pset) = CENTER;
	}
#line 8951 "y.tab.c"
    break;

  case 508: /* extremetype: MINP  */
#line 2394 "pars.y"
             {
	    (yyval.pset) = MINP;
	}
#line 8959 "y.tab.c"
    break;

  case 509: /* extremetype: MAXP  */
#line 2397 "pars.y"
               {
	    (yyval.pset) = MAXP;
	}
#line 8967 "y.tab.c"
    break;

  case 510: /* torf: TRUEP  */
#line 2403 "pars.y"
              {
	    (yyval.pset) = TRUEP;
	}
#line 8975 "y.tab.c"
    break;

  case 511: /* torf: FALSEP  */
#line 2406 "pars.y"
                 {
	    (yyval.pset) = FALSEP;
	}
#line 8983 "y.tab.c"
    break;

  case 512: /* inoutchoice: IN  */
#line 2412 "pars.y"
           {
	    (yyval.pset) = IN;
	}
#line 8991 "y.tab.c"
    break;

  case 513: /* inoutchoice: OUT  */
#line 2415 "pars.y"
              {
	    (yyval.pset) = OUT;
	}
#line 8999 "y.tab.c"
    break;

  case 514: /* inoutchoice: BOTH  */
#line 2418 "pars.y"
               {
	    (yyval.pset) = BOTH;
	}
#line 9007 "y.tab.c"
    break;

  case 515: /* formatchoice: DECIMAL  */
#line 2424 "pars.y"
                {
	    (yyval.pset) = DECIMAL;
	}
#line 9015 "y.tab.c"
    break;

  case 516: /* formatchoice: EXPONENTIAL  */
#line 2427 "pars.y"
                      {
	    (yyval.pset) = EXPONENTIAL;
	}
#line 9023 "y.tab.c"
    break;

  case 517: /* formatchoice: POWER  */
#line 2430 "pars.y"
                {
	    (yyval.pset) = POWER;
	}
#line 9031 "y.tab.c"
    break;

  case 518: /* formatchoice: GENERAL  */
#line 2433 "pars.y"
                  {
	    (yyval.pset) = GENERAL;
	}
#line 9039 "y.tab.c"
    break;

  case 519: /* formatchoice: DDMMYY  */
#line 2436 "pars.y"
                 {
	    (yyval.pset) = DDMMYY;
	}
#line 9047 "y.tab.c"
    break;

  case 520: /* formatchoice: MMDDYY  */
#line 2439 "pars.y"
                 {
	    (yyval.pset) = MMDDYY;
	}
#line 9055 "y.tab.c"
    break;

  case 521: /* formatchoice: MMYY  */
#line 2442 "pars.y"
               {
	    (yyval.pset) = MMYY;
	}
#line 9063 "y.tab.c"
    break;

  case 522: /* formatchoice: MMDD  */
#line 2445 "pars.y"
               {
	    (yyval.pset) = MMDD;
	}
#line 9071 "y.tab.c"
    break;

  case 523: /* formatchoice: MONTHDAY  */
#line 2448 "pars.y"
                   {
	    (yyval.pset) = MONTHDAY;
	}
#line 9079 "y.tab.c"
    break;

  case 524: /* formatchoice: DAYMONTH  */
#line 2451 "pars.y"
                   {
	    (yyval.pset) = DAYMONTH;
	}
#line 9087 "y.tab.c"
    break;

  case 525: /* formatchoice: DDMONTHSYYHHMMSS  */
#line 2454 "pars.y"
                           {
	    (yyval.pset) = DDMONTHSYYHHMMSS;
	}
#line 9095 "y.tab.c"
    break;

  case 526: /* formatchoice: DDMONTHSYY  */
#line 2457 "pars.y"
                     {
	    (yyval.pset) = DDMONTHSYY;
	}
#line 9103 "y.tab.c"
    break;

  case 527: /* formatchoice: MONTHS  */
#line 2460 "pars.y"
                 {
	    (yyval.pset) = MONTHS;
	}
#line 9111 "y.tab.c"
    break;

  case 528: /* formatchoice: MONTHL  */
#line 2463 "pars.y"
                 {
	    (yyval.pset) = MONTHL;
	}
#line 9119 "y.tab.c"
    break;

  case 529: /* formatchoice: DAYOFWEEKS  */
#line 2466 "pars.y"
                     {
	    (yyval.pset) = DAYOFWEEKS;
	}
#line 9127 "y.tab.c"
    break;

  case 530: /* formatchoice: DAYOFWEEKL  */
#line 2469 "pars.y"
                     {
	    (yyval.pset) = DAYOFWEEKL;
	}
#line 9135 "y.tab.c"
    break;

  case 531: /* formatchoice: DAYOFYEAR  */
#line 2472 "pars.y"
                    {
	    (yyval.pset) = DAYOFYEAR;
	}
#line 9143 "y.tab.c"
    break;

  case 532: /* formatchoice: HMS  */
#line 2475 "pars.y"
              {
	    (yyval.pset) = HMS;
	}
#line 9151 "y.tab.c"
    break;

  case 533: /* formatchoice: HH  */
#line 2478 "pars.y"
             {
	    (yyval.pset) = HH;
	}
#line 9159 "y.tab.c"
    break;

  case 534: /* formatchoice: MMDDHMS  */
#line 2481 "pars.y"
                  {
	    (yyval.pset) = MMDDHMS;
	}
#line 9167 "y.tab.c"
    break;

  case 535: /* formatchoice: MMDDYYHMS  */
#line 2484 "pars.y"
                    {
	    (yyval.pset) = MMDDYYHMS;
	}
#line 9175 "y.tab.c"
    break;

  case 536: /* formatchoice: DEGREESLON  */
#line 2487 "pars.y"
                     {
	    (yyval.pset) = DEGREESLON;
	}
#line 9183 "y.tab.c"
    break;

  case 537: /* formatchoice: DEGREESMMLON  */
#line 2490 "pars.y"
                       {
	    (yyval.pset) = DEGREESMMLON;
	}
#line 9191 "y.tab.c"
    break;

  case 538: /* formatchoice: DEGREESMMSSLON  */
#line 2493 "pars.y"
                         {
	    (yyval.pset) = DEGREESMMSSLON;
	}
#line 9199 "y.tab.c"
    break;

  case 539: /* formatchoice: MMSSLON  */
#line 2496 "pars.y"
                  {
	    (yyval.pset) = MMSSLON;
	}
#line 9207 "y.tab.c"
    break;

  case 540: /* formatchoice: DEGREESLAT  */
#line 2499 "pars.y"
                     {
	    (yyval.pset) = DEGREESLAT;
	}
#line 9215 "y.tab.c"
    break;

  case 541: /* formatchoice: DEGREESMMLAT  */
#line 2502 "pars.y"
                       {
	    (yyval.pset) = DEGREESMMLAT;
	}
#line 9223 "y.tab.c"
    break;

  case 542: /* formatchoice: DEGREESMMSSLAT  */
#line 2505 "pars.y"
                         {
	    (yyval.pset) = DEGREESMMSSLAT;
	}
#line 9231 "y.tab.c"
    break;

  case 543: /* formatchoice: MMSSLAT  */
#line 2508 "pars.y"
                  {
	    (yyval.pset) = MMSSLAT;
	}
#line 9239 "y.tab.c"
    break;

  case 544: /* signchoice: NORMAL  */
#line 2514 "pars.y"
               {
	    (yyval.pset) = NORMAL;
	}
#line 9247 "y.tab.c"
    break;

  case 545: /* signchoice: ABSOLUTE  */
#line 2517 "pars.y"
                   {
	    (yyval.pset) = ABSOLUTE;
	}
#line 9255 "y.tab.c"
    break;

  case 546: /* signchoice: NEGATE  */
#line 2520 "pars.y"
                 {
	    (yyval.pset) = NEGATE;
	}
#line 9263 "y.tab.c"
    break;

  case 547: /* direction: UP  */
#line 2526 "pars.y"
           {
	    (yyval.pset) = UP;
	}
#line 9271 "y.tab.c"
    break;

  case 548: /* direction: DOWN  */
#line 2529 "pars.y"
               {
	    (yyval.pset) = DOWN;
	}
#line 9279 "y.tab.c"
    break;

  case 549: /* direction: RIGHT  */
#line 2532 "pars.y"
                {
	    (yyval.pset) = RIGHT;
	}
#line 9287 "y.tab.c"
    break;

  case 550: /* direction: LEFT  */
#line 2535 "pars.y"
               {
	    (yyval.pset) = LEFT;
	}
#line 9295 "y.tab.c"
    break;

  case 551: /* direction: IN  */
#line 2538 "pars.y"
             {
	    (yyval.pset) = IN;
	}
#line 9303 "y.tab.c"
    break;

  case 552: /* direction: OUT  */
#line 2541 "pars.y"
              {
	    (yyval.pset) = OUT;
	}
#line 9311 "y.tab.c"
    break;

  case 553: /* worldview: WORLD  */
#line 2547 "pars.y"
              {
	    (yyval.pset) = WORLD;
	}
#line 9319 "y.tab.c"
    break;

  case 554: /* worldview: VIEW  */
#line 2550 "pars.y"
               {
	    (yyval.pset) = VIEW;
	}
#line 9327 "y.tab.c"
    break;

  case 555: /* vector: X  */
#line 2556 "pars.y"
          { (yyval.pset) = X; }
#line 9333 "y.tab.c"
    break;

  case 556: /* vector: Y  */
#line 2557 "pars.y"
            { (yyval.pset) = Y; }
#line 9339 "y.tab.c"
    break;

  case 557: /* vector: X0  */
#line 2558 "pars.y"
             { (yyval.pset) = X0; }
#line 9345 "y.tab.c"
    break;

  case 558: /* vector: Y0  */
#line 2559 "pars.y"
             { (yyval.pset) = Y0; }
#line 9351 "y.tab.c"
    break;

  case 559: /* vector: Y1  */
#line 2560 "pars.y"
             { (yyval.pset) = Y1; }
#line 9357 "y.tab.c"
    break;

  case 560: /* vector: Y2  */
#line 2561 "pars.y"
             { (yyval.pset) = Y2; }
#line 9363 "y.tab.c"
    break;

  case 561: /* vector: Y3  */
#line 2562 "pars.y"
             { (yyval.pset) = Y3; }
#line 9369 "y.tab.c"
    break;

  case 562: /* vector: Y4  */
#line 2563 "pars.y"
             { (yyval.pset) = Y4; }
#line 9375 "y.tab.c"
    break;

  case 563: /* vector: Y5  */
#line 2564 "pars.y"
             { (yyval.pset) = Y5; }
#line 9381 "y.tab.c"
    break;

  case 564: /* asgn: VAR '[' expr ']' '=' expr  */
#line 2569 "pars.y"
        {
	    int itmp = (int) (yyvsp[-3].val) - 1;
	    if (itmp >= ls) {
		yyerror("subscript out of range");
		return 1;
	    } else {
		(yyvsp[-5].ptr)[itmp] = (yyvsp[0].val);
		result = (yyvsp[0].val);
	    }
	}
#line 9396 "y.tab.c"
    break;

  case 565: /* asgn: vector '[' expr ']' '=' expr  */
#line 2580 "pars.y"
        {
	    int itmp = (int) (yyvsp[-3].val) - 1;
	    double *ptr = getvptr(cg, curset, (yyvsp[-3].val));
	    if (ptr != NULL) {
	        ptr[itmp] = (yyvsp[0].val);
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    result = (yyvsp[0].val);
	    updatesetminmax(cg, curset);
	    update_set_status(cg, curset);
	}
#line 9415 "y.tab.c"
    break;

  case 566: /* asgn: SETNUM '.' vector '[' expr ']' '=' expr  */
#line 2595 "pars.y"
        {
	    int itmp = (int) (yyvsp[-3].val) - 1;
	    double *ptr = getvptr(cg, (yyvsp[-7].pset), (yyvsp[-5].pset));
	    if (ptr != NULL) {
	        ptr[itmp] = (yyvsp[0].val);
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    result = (yyvsp[0].val);
	    updatesetminmax(cg, (yyvsp[-7].pset));
	    update_set_status(cg, (yyvsp[-7].pset));
	}
#line 9434 "y.tab.c"
    break;

  case 567: /* asgn: SETNUM '.' SYMBOL '=' expr  */
#line 2610 "pars.y"
        {
	    set_prop(cg, SET, SETNUM, (yyvsp[-4].pset), SYMBOL, TYPE, (int) (yyvsp[0].val), 0);
	    result = 0;
	}
#line 9443 "y.tab.c"
    break;

  case 568: /* asgn: GRAPHNO '.' SETNUM '.' vector '[' expr ']' '=' expr  */
#line 2622 "pars.y"
        {
	    int itmp = (int) (yyvsp[-3].val) - 1;
	    double *ptr = getvptr((yyvsp[-9].pset), (yyvsp[-7].pset), (yyvsp[-5].pset));
	    if (ptr != NULL) {
	        ptr[itmp] = (yyvsp[0].val);
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    result = (yyvsp[0].val);
	    updatesetminmax((yyvsp[-9].pset), (yyvsp[-7].pset));
	    update_set_status((yyvsp[-9].pset), (yyvsp[-7].pset));
	}
#line 9462 "y.tab.c"
    break;

  case 569: /* rasgn: REGNUM '.' vector '=' expr  */
#line 2640 "pars.y"
        {
	    if ((yyvsp[-2].pset) == X) {
		*xx = (yyvsp[0].val);
	    } else {
		*yy = (yyvsp[0].val);
	    }
	}
#line 9474 "y.tab.c"
    break;

  case 570: /* vasgn: VAR '=' vexpr  */
#line 2651 "pars.y"
        {
	    int i;
	    for (i = 0; i < lxy; i++) {
		(yyvsp[-2].ptr)[i] = (yyvsp[0].ptr)[i];
	    }
	    result = (yyvsp[0].ptr)[0];
	}
#line 9486 "y.tab.c"
    break;

  case 571: /* vasgn: vector '=' vexpr  */
#line 2659 "pars.y"
        {
	    int i;
	    double *ptr;
	    if (!isactive_set(cg, curset)) {
		activateset(cg, curset);
		setlength(cg, curset, lxy);
		setcomment(cg, curset, "Created");
	    }
	    ptr = getvptr(cg, curset, (yyvsp[-2].pset));
	    if (ptr != NULL) {
	        for (i = 0; i < lxy; i++) {
		    ptr[i] = (yyvsp[0].ptr)[i];
	        }
	        result = (yyvsp[0].ptr)[0];
	        updatesetminmax(cg, curset);
	        update_set_status(cg, curset);
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 9513 "y.tab.c"
    break;

  case 572: /* vasgn: SETNUM '.' vector '=' vexpr  */
#line 2681 "pars.y"
                                      {
	    int i;
	    double *ptr;
	    if (!isactive_set(cg, (yyvsp[-4].pset))) {
		activateset(cg, (yyvsp[-4].pset));
		setlength(cg, (yyvsp[-4].pset), lxy);
		setcomment(cg, (yyvsp[-4].pset), "Created");
	    }
	    ptr = getvptr(cg, (yyvsp[-4].pset), (yyvsp[-2].pset));
	    if (ptr != NULL) {
	        for (i = 0; i < lxy; i++) {
		    ptr[i] = (yyvsp[0].ptr)[i];
	        }
	        result = (yyvsp[0].ptr)[0];
	        updatesetminmax(cg, (yyvsp[-4].pset));
	        update_set_status(cg, (yyvsp[-4].pset));
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 9540 "y.tab.c"
    break;

  case 573: /* vasgn: GRAPHNO '.' SETNUM '.' vector '=' vexpr  */
#line 2704 "pars.y"
        {
	    int i;
	    double *ptr;
	    if (!isactive_set((yyvsp[-6].pset), (yyvsp[-4].pset))) {
		activateset((yyvsp[-6].pset), (yyvsp[-4].pset));
		setlength((yyvsp[-6].pset), (yyvsp[-4].pset), lxy);
		setcomment((yyvsp[-6].pset), (yyvsp[-4].pset), "Created");
	    }
	    ptr = getvptr((yyvsp[-6].pset), (yyvsp[-4].pset), (yyvsp[-2].pset));
	    if (ptr != NULL) {
	        for (i = 0; i < lxy; i++) {
		    ptr[i] = (yyvsp[0].ptr)[i];
	        }
	        result = (yyvsp[0].ptr)[0];
	        updatesetminmax((yyvsp[-6].pset), (yyvsp[-4].pset));
	        update_set_status((yyvsp[-6].pset), (yyvsp[-4].pset));
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 9567 "y.tab.c"
    break;

  case 574: /* vasgn: VAR '=' expr  */
#line 2727 "pars.y"
        {
	    int i;
	    for (i = 0; i < lxy; i++) {
		(yyvsp[-2].ptr)[i] = (yyvsp[0].val);
	    }
	    result = (yyvsp[0].val);
	}
#line 9579 "y.tab.c"
    break;

  case 575: /* vasgn: vector '=' expr  */
#line 2735 "pars.y"
        {
	    int i;
	    double *ptr;
	    if (!isactive_set(cg, curset)) {
		activateset(cg, curset);
		setlength(cg, curset, lxy);
		setcomment(cg, curset, "Created");
	    }
	    ptr = getvptr(cg, curset, (yyvsp[-2].pset));
	    if (ptr != NULL) {
	        for (i = 0; i < lxy; i++) {
		    ptr[i] = (yyvsp[0].val);
	        }
	        result = (yyvsp[0].val);
	        updatesetminmax(cg, curset);
	        update_set_status(cg, curset);
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 9606 "y.tab.c"
    break;

  case 576: /* vasgn: SETNUM '.' vector '=' expr  */
#line 2758 "pars.y"
        {
	    int i;
	    double *ptr;
	    if (!isactive_set(cg, (yyvsp[-4].pset))) {
		activateset(cg, (yyvsp[-4].pset));
		setlength(cg, (yyvsp[-4].pset), lxy);
		setcomment(cg, (yyvsp[-4].pset), "Created");
	    }
	    ptr = getvptr(cg, (yyvsp[-4].pset), (yyvsp[-2].pset));
	    if (ptr != NULL) {
	        for (i = 0; i < lxy; i++) {
		    ptr[i] = (yyvsp[0].val);
	        }
	        result = (yyvsp[0].val);
	        updatesetminmax(cg, (yyvsp[-4].pset));
	        update_set_status(cg, (yyvsp[-4].pset));
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 9633 "y.tab.c"
    break;

  case 577: /* vasgn: GRAPHNO '.' SETNUM '.' vector '=' expr  */
#line 2781 "pars.y"
        {
	    int i;
	    double *ptr;
	    if (!isactive_set((yyvsp[-6].pset), (yyvsp[-4].pset))) {
		activateset((yyvsp[-6].pset), (yyvsp[-4].pset));
		setlength((yyvsp[-6].pset), (yyvsp[-4].pset), lxy);
		setcomment((yyvsp[-6].pset), (yyvsp[-4].pset), "Created");
	    }
	    ptr = getvptr((yyvsp[-6].pset), (yyvsp[-4].pset), (yyvsp[-2].pset));
	    if (ptr != NULL) {
	        for (i = 0; i < lxy; i++) {
		    ptr[i] = (yyvsp[0].val);
	        }
	        result = (yyvsp[0].val);
	        updatesetminmax((yyvsp[-6].pset), (yyvsp[-4].pset));
	        update_set_status((yyvsp[-6].pset), (yyvsp[-4].pset));
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 9660 "y.tab.c"
    break;

  case 578: /* vexpr: VAR  */
#line 2807 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[0].ptr)[i];
	    }
	}
#line 9673 "y.tab.c"
    break;

  case 579: /* vexpr: vector  */
#line 2816 "pars.y"
        {
	    int i;
	    double *ptr = getvptr(cg, curset, (yyvsp[0].pset));
	    if (ptr == NULL) {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = ptr[i];
	    }
	}
#line 9691 "y.tab.c"
    break;

  case 580: /* vexpr: SETNUM '.' vector  */
#line 2830 "pars.y"
        {
	    int i;
	    double *ptr = getvptr(cg, (yyvsp[-2].pset), (yyvsp[0].pset));
	    if (ptr == NULL) {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = ptr[i];
	    }
	}
#line 9709 "y.tab.c"
    break;

  case 581: /* vexpr: GRAPHNO '.' SETNUM '.' vector  */
#line 2844 "pars.y"
        {
	    int i;
	    double *ptr = getvptr((yyvsp[-4].pset), (yyvsp[-2].pset), (yyvsp[0].pset));
	    if (ptr == NULL) {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = ptr[i];
	    }
	}
#line 9727 "y.tab.c"
    break;

  case 582: /* vexpr: expr  */
#line 2858 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[0].val);
	    }
	}
#line 9740 "y.tab.c"
    break;

  case 583: /* vexpr: expr '+' expr  */
#line 2867 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) + (yyvsp[0].val);
	    }
	}
#line 9753 "y.tab.c"
    break;

  case 584: /* vexpr: vexpr '+' vexpr  */
#line 2876 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] + (yyvsp[0].ptr)[i];
	    }
	}
#line 9766 "y.tab.c"
    break;

  case 585: /* vexpr: expr '+' vexpr  */
#line 2885 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) + (yyvsp[0].ptr)[i];
	    }
	}
#line 9779 "y.tab.c"
    break;

  case 586: /* vexpr: vexpr '+' expr  */
#line 2894 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] + (yyvsp[0].val);
	    }
	}
#line 9792 "y.tab.c"
    break;

  case 587: /* vexpr: expr '-' expr  */
#line 2903 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) - (yyvsp[0].val);
	    }
	}
#line 9805 "y.tab.c"
    break;

  case 588: /* vexpr: vexpr '-' vexpr  */
#line 2912 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] - (yyvsp[0].ptr)[i];
	    }
	}
#line 9818 "y.tab.c"
    break;

  case 589: /* vexpr: expr '-' vexpr  */
#line 2921 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) - (yyvsp[0].ptr)[i];
	    }
	}
#line 9831 "y.tab.c"
    break;

  case 590: /* vexpr: vexpr '-' expr  */
#line 2930 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] - (yyvsp[0].val);
	    }
	}
#line 9844 "y.tab.c"
    break;

  case 591: /* vexpr: expr '*' expr  */
#line 2939 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) * (yyvsp[0].val);
	    }
	}
#line 9857 "y.tab.c"
    break;

  case 592: /* vexpr: vexpr '*' vexpr  */
#line 2948 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] * (yyvsp[0].ptr)[i];
	    }
	}
#line 9870 "y.tab.c"
    break;

  case 593: /* vexpr: expr '*' vexpr  */
#line 2957 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) * (yyvsp[0].ptr)[i];
	    }
	}
#line 9883 "y.tab.c"
    break;

  case 594: /* vexpr: vexpr '*' expr  */
#line 2966 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] * (yyvsp[0].val);
	    }
	}
#line 9896 "y.tab.c"
    break;

  case 595: /* vexpr: expr '/' expr  */
#line 2975 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    if ((yyvsp[0].val) == 0.0) {
		yyerror("Divide by Zero");
		return 1;
	    }
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) / (yyvsp[0].val);
	    }
	}
#line 9913 "y.tab.c"
    break;

  case 596: /* vexpr: vexpr '/' vexpr  */
#line 2988 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		if ((yyvsp[0].ptr)[i] == 0.0) {
		    yyerror("Divide by Zero");
		    return 1;
		}
	    }
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] / (yyvsp[0].ptr)[i];
	    }
	}
#line 9932 "y.tab.c"
    break;

  case 597: /* vexpr: expr '/' vexpr  */
#line 3003 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		if ((yyvsp[0].ptr)[i] == 0.0) {
		    yyerror("Divide by Zero");
		    return 1;
		}
	    }
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].val) / (yyvsp[0].ptr)[i];
	    }
	}
#line 9951 "y.tab.c"
    break;

  case 598: /* vexpr: vexpr '/' expr  */
#line 3018 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    if ((yyvsp[0].val) == 0.0) {
		yyerror("Divide by Zero");
		return 1;
	    }
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] / (yyvsp[0].val);
	    }
	}
#line 9968 "y.tab.c"
    break;

  case 599: /* vexpr: expr '^' expr  */
#line 3031 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = pow((yyvsp[-2].val), (yyvsp[0].val));
	    }
	}
#line 9981 "y.tab.c"
    break;

  case 600: /* vexpr: expr '^' vexpr  */
#line 3040 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = pow((yyvsp[-2].val), (yyvsp[0].ptr)[i]);
	    }
	}
#line 9994 "y.tab.c"
    break;

  case 601: /* vexpr: vexpr '^' expr  */
#line 3049 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = pow((yyvsp[-2].ptr)[i], (yyvsp[0].val));
	    }
	}
#line 10007 "y.tab.c"
    break;

  case 602: /* vexpr: vexpr '^' vexpr  */
#line 3058 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = pow((yyvsp[-2].ptr)[i], (yyvsp[0].ptr)[i]);
	    }
	}
#line 10020 "y.tab.c"
    break;

  case 603: /* vexpr: ABS '(' expr ')'  */
#line 3067 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = fabs((yyvsp[-1].val));
	    }
	}
#line 10033 "y.tab.c"
    break;

  case 604: /* vexpr: ABS '(' vexpr ')'  */
#line 3076 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = fabs((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10046 "y.tab.c"
    break;

  case 605: /* vexpr: ACOS '(' vexpr ')'  */
#line 3085 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = acos((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10059 "y.tab.c"
    break;

  case 606: /* vexpr: ASIN '(' vexpr ')'  */
#line 3094 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = asin((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10072 "y.tab.c"
    break;

  case 607: /* vexpr: ATAN '(' vexpr ')'  */
#line 3103 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = atan((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10085 "y.tab.c"
    break;

  case 608: /* vexpr: ATAN2 '(' vexpr ',' vexpr ')'  */
#line 3112 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = atan2((yyvsp[-3].ptr)[i], (yyvsp[-1].ptr)[i]);
	    }
	}
#line 10098 "y.tab.c"
    break;

  case 609: /* vexpr: CEIL '(' vexpr ')'  */
#line 3121 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = ceil((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10111 "y.tab.c"
    break;

  case 610: /* vexpr: COS '(' vexpr ')'  */
#line 3130 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = cos((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10124 "y.tab.c"
    break;

  case 611: /* vexpr: DEG  */
#line 3139 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] *= M_PI / 180.0;
	    }
	}
#line 10137 "y.tab.c"
    break;

  case 612: /* vexpr: ERF '(' vexpr ')'  */
#line 3148 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = erf((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10150 "y.tab.c"
    break;

  case 613: /* vexpr: ERFC '(' vexpr ')'  */
#line 3157 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = erfc((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10163 "y.tab.c"
    break;

  case 614: /* vexpr: EXP '(' vexpr ')'  */
#line 3166 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = exp((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10176 "y.tab.c"
    break;

  case 615: /* vexpr: FLOOR '(' vexpr ')'  */
#line 3175 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = floor((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10189 "y.tab.c"
    break;

  case 616: /* vexpr: HYPOT '(' vexpr ',' vexpr ')'  */
#line 3184 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = my_hypot((yyvsp[-3].ptr)[i], (yyvsp[-1].ptr)[i]);
	    }
	}
#line 10202 "y.tab.c"
    break;

  case 617: /* vexpr: HYPOT '(' expr ',' vexpr ')'  */
#line 3193 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = my_hypot((yyvsp[-3].val), (yyvsp[-1].ptr)[i]);
	    }
	}
#line 10215 "y.tab.c"
    break;

  case 618: /* vexpr: HYPOT '(' vexpr ',' expr ')'  */
#line 3202 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = my_hypot((yyvsp[-3].ptr)[i], (yyvsp[-1].val));
	    }
	}
#line 10228 "y.tab.c"
    break;

  case 619: /* vexpr: HYPOT '(' expr ',' expr ')'  */
#line 3211 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = my_hypot((yyvsp[-3].val), (yyvsp[-1].val));
	    }
	}
#line 10241 "y.tab.c"
    break;

  case 620: /* vexpr: INDEX  */
#line 3220 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = i + 1;
	    }
	}
#line 10254 "y.tab.c"
    break;

  case 621: /* vexpr: SETNO  */
#line 3229 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[0].func);
	    }
	}
#line 10267 "y.tab.c"
    break;

  case 622: /* vexpr: INT '(' vexpr ')'  */
#line 3238 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (int) (yyvsp[-1].ptr)[i];
	    }
	}
#line 10280 "y.tab.c"
    break;

  case 623: /* vexpr: IRAND '(' NUMBER ')'  */
#line 3247 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = lrand48() % (long) ((yyvsp[-1].val));
	    }
	}
#line 10293 "y.tab.c"
    break;

  case 624: /* vexpr: LGAMMA '(' vexpr ')'  */
#line 3256 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = lgamma((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10306 "y.tab.c"
    break;

  case 625: /* vexpr: LN '(' vexpr ')'  */
#line 3265 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = log((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10319 "y.tab.c"
    break;

  case 626: /* vexpr: LOG '(' vexpr ')'  */
#line 3274 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = log10((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10332 "y.tab.c"
    break;

  case 627: /* vexpr: LOGISTIC '(' vexpr ',' expr ',' expr ')'  */
#line 3283 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = 1.0 / (1.0 + exp(-((yyvsp[-5].ptr)[i] - (yyvsp[-3].val))/ (yyvsp[-1].val)));
	    }
	}
#line 10345 "y.tab.c"
    break;

  case 628: /* vexpr: MAXP '(' vexpr ',' vexpr ')'  */
#line 3292 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-3].ptr)[i] >= (yyvsp[-1].ptr)[i] ? (yyvsp[-3].ptr)[i] : (yyvsp[-1].ptr)[i];
	    }
	}
#line 10358 "y.tab.c"
    break;

  case 629: /* vexpr: MINP '(' vexpr ',' vexpr ')'  */
#line 3301 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-3].ptr)[i] <= (yyvsp[-1].ptr)[i] ? (yyvsp[-3].ptr)[i] : (yyvsp[-1].ptr)[i];
	    }
	}
#line 10371 "y.tab.c"
    break;

  case 630: /* vexpr: MOD '(' vexpr ',' vexpr ')'  */
#line 3310 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = fmod((yyvsp[-3].ptr)[i], (yyvsp[-1].ptr)[i]);
	    }
	}
#line 10384 "y.tab.c"
    break;

  case 631: /* vexpr: NORM '(' vexpr ')'  */
#line 3319 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = fx((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10397 "y.tab.c"
    break;

  case 632: /* vexpr: PI  */
#line 3328 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = M_PI;
	    }
	}
#line 10410 "y.tab.c"
    break;

  case 633: /* vexpr: RAD  */
#line 3337 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = M_PI / 180.0;
	    }
	}
#line 10423 "y.tab.c"
    break;

  case 634: /* vexpr: RAND  */
#line 3346 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (double) drand48();
	    }
	}
#line 10436 "y.tab.c"
    break;

  case 635: /* vexpr: RNORM '(' vexpr ',' vexpr ')'  */
#line 3355 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = rnorm((yyvsp[-3].ptr)[i], (yyvsp[-1].ptr)[i]);
	    }
	}
#line 10449 "y.tab.c"
    break;

  case 636: /* vexpr: RNORM '(' expr ',' vexpr ')'  */
#line 3364 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = rnorm((yyvsp[-3].val), (yyvsp[-1].ptr)[i]);
	    }
	}
#line 10462 "y.tab.c"
    break;

  case 637: /* vexpr: RNORM '(' vexpr ',' expr ')'  */
#line 3373 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = rnorm((yyvsp[-3].ptr)[i], (yyvsp[-1].val));
	    }
	}
#line 10475 "y.tab.c"
    break;

  case 638: /* vexpr: RNORM '(' expr ',' expr ')'  */
#line 3382 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = rnorm((yyvsp[-3].val), (yyvsp[-1].val));
	    }
	}
#line 10488 "y.tab.c"
    break;

  case 639: /* vexpr: SIN '(' vexpr ')'  */
#line 3391 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = sin((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10501 "y.tab.c"
    break;

  case 640: /* vexpr: SQR '(' vexpr ')'  */
#line 3400 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-1].ptr)[i] * (yyvsp[-1].ptr)[i];
	    }
	}
#line 10514 "y.tab.c"
    break;

  case 641: /* vexpr: SQRT '(' vexpr ')'  */
#line 3409 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = sqrt((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10527 "y.tab.c"
    break;

  case 642: /* vexpr: TAN '(' vexpr ')'  */
#line 3418 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = tan((yyvsp[-1].ptr)[i]);
	    }
	}
#line 10540 "y.tab.c"
    break;

  case 643: /* vexpr: vexpr '?' vexpr ':' vexpr  */
#line 3426 "pars.y"
                                    {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
	        if ((int) (yyvsp[-4].ptr)[i]) {
		    (yyval.ptr)[i] = (yyvsp[-2].ptr)[i];
	        } else {
		    (yyval.ptr)[i] = (yyvsp[0].ptr)[i];
	        }
	    }
	}
#line 10557 "y.tab.c"
    break;

  case 644: /* vexpr: vexpr GT vexpr  */
#line 3439 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] > (yyvsp[0].ptr)[i];
	    }
	}
#line 10570 "y.tab.c"
    break;

  case 645: /* vexpr: vexpr LT vexpr  */
#line 3448 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] < (yyvsp[0].ptr)[i];
	    }
	}
#line 10583 "y.tab.c"
    break;

  case 646: /* vexpr: vexpr LE vexpr  */
#line 3457 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] <= (yyvsp[0].ptr)[i];
	    }
	}
#line 10596 "y.tab.c"
    break;

  case 647: /* vexpr: vexpr GE vexpr  */
#line 3466 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] >= (yyvsp[0].ptr)[i];
	    }
	}
#line 10609 "y.tab.c"
    break;

  case 648: /* vexpr: vexpr EQ vexpr  */
#line 3475 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] == (yyvsp[0].ptr)[i];
	    }
	}
#line 10622 "y.tab.c"
    break;

  case 649: /* vexpr: vexpr NE vexpr  */
#line 3484 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] != (yyvsp[0].ptr)[i];
	    }
	}
#line 10635 "y.tab.c"
    break;

  case 650: /* vexpr: vexpr AND vexpr  */
#line 3493 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] && (yyvsp[0].ptr)[i];
	    }
	}
#line 10648 "y.tab.c"
    break;

  case 651: /* vexpr: vexpr OR vexpr  */
#line 3502 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-2].ptr)[i] || (yyvsp[0].ptr)[i];
	    }
	}
#line 10661 "y.tab.c"
    break;

  case 652: /* vexpr: NOT vexpr  */
#line 3511 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = !((yyvsp[0].ptr)[i]);
	    }
	}
#line 10674 "y.tab.c"
    break;

  case 653: /* vexpr: '(' vexpr ')'  */
#line 3520 "pars.y"
        {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = (yyvsp[-1].ptr)[i];
	    }
	}
#line 10687 "y.tab.c"
    break;

  case 654: /* vexpr: '-' vexpr  */
#line 3528 "pars.y"
                                 {
	    int i;
	    (yyval.ptr) = (double *) calloc(lxy, sizeof(double));
	    freelist[fcnt++] = (yyval.ptr);
	    for (i = 0; i < lxy; i++) {
		(yyval.ptr)[i] = -(yyvsp[0].ptr)[i];
	    }
	}
#line 10700 "y.tab.c"
    break;

  case 656: /* expr: VAR '[' expr ']'  */
#line 3539 "pars.y"
                            {
	    (yyval.val) = (yyvsp[-3].ptr)[(int) (yyvsp[-1].val)];
	}
#line 10708 "y.tab.c"
    break;

  case 657: /* expr: REGNUM '.' vector  */
#line 3542 "pars.y"
                            {
	    (yyval.val) = ((yyvsp[0].pset) == X) ? *xx : *yy;
	}
#line 10716 "y.tab.c"
    break;

  case 658: /* expr: vector '[' expr ']'  */
#line 3545 "pars.y"
                              {
	    double *ptr = getvptr(cg, curset, (yyvsp[-3].pset));
	    if (ptr != NULL) {
		(yyval.val) = ptr[(int) (yyvsp[-1].val) - 1];
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 10731 "y.tab.c"
    break;

  case 659: /* expr: SETNUM '.' vector '[' expr ']'  */
#line 3555 "pars.y"
                                         {
	    double *ptr = getvptr(cg, (yyvsp[-5].pset), (yyvsp[-3].pset));
	    if (ptr != NULL) {
		(yyval.val) = ptr[(int) (yyvsp[-1].val) - 1];
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 10746 "y.tab.c"
    break;

  case 660: /* expr: GRAPHNO '.' SETNUM '.' vector '[' expr ']'  */
#line 3565 "pars.y"
                                                     {
	    double *ptr = getvptr((yyvsp[-7].pset), (yyvsp[-5].pset), (yyvsp[-3].pset));
	    if (ptr != NULL) {
		(yyval.val) = ptr[(int) (yyvsp[-1].val) - 1];
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 10761 "y.tab.c"
    break;

  case 661: /* expr: SETNUM '.' vector '.' extremetype  */
#line 3575 "pars.y"
                                            {
	    double *ptr = getvptr(cg, (yyvsp[-4].pset), (yyvsp[-2].pset));
	    if (ptr == NULL) {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    switch ((yyvsp[0].pset)) {
	    case MINP:
		(yyval.val) = vmin(ptr, g[cg].p[(yyvsp[-4].pset)].len);
		break;
	    case MAXP:
		(yyval.val) = vmax(ptr, g[cg].p[(yyvsp[-4].pset)].len);
		break;
	    }
	}
#line 10781 "y.tab.c"
    break;

  case 662: /* expr: GRAPHNO '.' SETNUM '.' vector '.' extremetype  */
#line 3590 "pars.y"
                                                        {
	    double *ptr = getvptr((yyvsp[-6].pset), (yyvsp[-4].pset), (yyvsp[-2].pset));
	    if (ptr == NULL) {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	    switch ((yyvsp[0].pset)) {
	    case MINP:
		(yyval.val) = vmin(ptr, g[(yyvsp[-6].pset)].p[(yyvsp[-4].pset)].len);
		break;
	    case MAXP:
		(yyval.val) = vmax(ptr, g[(yyvsp[-6].pset)].p[(yyvsp[-4].pset)].len);
		break;
	    }
	}
#line 10801 "y.tab.c"
    break;

  case 663: /* expr: SETNUM '.' LENGTH  */
#line 3605 "pars.y"
                            {
	    (yyval.val) = g[cg].p[(yyvsp[-2].pset)].len;
	}
#line 10809 "y.tab.c"
    break;

  case 664: /* expr: SETNUM '.' vector '.' AVG  */
#line 3609 "pars.y"
        {
	    double bar, sd;
	    double *ptr = getvptr(cg, (yyvsp[-4].pset), (yyvsp[-2].pset));
	    if (ptr != NULL) {
		stasum(ptr, getsetlength(cg, (yyvsp[-4].pset)), &bar, &sd, 0);
	        (yyval.val) = bar;
	    }
	    else {
		yyerror("NULL variable, check set type");
		return 1;
	    }
	}
#line 10826 "y.tab.c"
    break;

  case 665: /* expr: expr '+' expr  */
#line 3621 "pars.y"
                        {
	    (yyval.val) = (yyvsp[-2].val) + (yyvsp[0].val);
	}
#line 10834 "y.tab.c"
    break;

  case 666: /* expr: expr '-' expr  */
#line 3624 "pars.y"
                        {
	    (yyval.val) = (yyvsp[-2].val) - (yyvsp[0].val);
	}
#line 10842 "y.tab.c"
    break;

  case 667: /* expr: expr '*' expr  */
#line 3627 "pars.y"
                        {
	    (yyval.val) = (yyvsp[-2].val) * (yyvsp[0].val);
	}
#line 10850 "y.tab.c"
    break;

  case 668: /* expr: expr '/' expr  */
#line 3631 "pars.y"
        {
	    if ((yyvsp[0].val) != 0.0) {
		(yyval.val) = (yyvsp[-2].val) / (yyvsp[0].val);
	    } else {
		yyerror("Divide by Zero");
		return 1;
	    }
	}
#line 10863 "y.tab.c"
    break;

  case 669: /* expr: expr '%' expr  */
#line 3639 "pars.y"
                        {
	    (yyval.val) = fmod((yyvsp[-2].val), (yyvsp[0].val));
	}
#line 10871 "y.tab.c"
    break;

  case 670: /* expr: expr '^' expr  */
#line 3642 "pars.y"
                        {
	    (yyval.val) = pow((yyvsp[-2].val), (yyvsp[0].val));
	}
#line 10879 "y.tab.c"
    break;

  case 671: /* expr: ABS '(' expr ')'  */
#line 3645 "pars.y"
                           {
	    (yyval.val) = fabs((yyvsp[-1].val));
	}
#line 10887 "y.tab.c"
    break;

  case 672: /* expr: ACOS '(' expr ')'  */
#line 3648 "pars.y"
                            {
	    (yyval.val) = acos((yyvsp[-1].val));
	}
#line 10895 "y.tab.c"
    break;

  case 673: /* expr: ASIN '(' expr ')'  */
#line 3651 "pars.y"
                            {
	    (yyval.val) = asin((yyvsp[-1].val));
	}
#line 10903 "y.tab.c"
    break;

  case 674: /* expr: ATAN '(' expr ')'  */
#line 3654 "pars.y"
                            {
	    (yyval.val) = atan((yyvsp[-1].val));
	}
#line 10911 "y.tab.c"
    break;

  case 675: /* expr: ATAN2 '(' expr ',' expr ')'  */
#line 3657 "pars.y"
                                      {
	    (yyval.val) = atan2((yyvsp[-3].val), (yyvsp[-1].val));
	}
#line 10919 "y.tab.c"
    break;

  case 676: /* expr: CEIL '(' expr ')'  */
#line 3660 "pars.y"
                            {
	    (yyval.val) = ceil((yyvsp[-1].val));
	}
#line 10927 "y.tab.c"
    break;

  case 677: /* expr: COS '(' expr ')'  */
#line 3663 "pars.y"
                           {
	    (yyval.val) = cos((yyvsp[-1].val));
	}
#line 10935 "y.tab.c"
    break;

  case 678: /* expr: DEG  */
#line 3666 "pars.y"
              {
	    (yyval.val) = 180.0 / M_PI;
	}
#line 10943 "y.tab.c"
    break;

  case 679: /* expr: ERF '(' expr ')'  */
#line 3669 "pars.y"
                           {
	    (yyval.val) = erf((yyvsp[-1].val));
	}
#line 10951 "y.tab.c"
    break;

  case 680: /* expr: ERFC '(' expr ')'  */
#line 3672 "pars.y"
                            {
	    (yyval.val) = erfc((yyvsp[-1].val));
	}
#line 10959 "y.tab.c"
    break;

  case 681: /* expr: EXP '(' expr ')'  */
#line 3675 "pars.y"
                           {
	    (yyval.val) = exp((yyvsp[-1].val));
	}
#line 10967 "y.tab.c"
    break;

  case 682: /* expr: FLOOR '(' expr ')'  */
#line 3678 "pars.y"
                             {
	    (yyval.val) = floor((yyvsp[-1].val));
	}
#line 10975 "y.tab.c"
    break;

  case 683: /* expr: HYPOT '(' expr ',' expr ')'  */
#line 3681 "pars.y"
                                      {
	    (yyval.val) = my_hypot((yyvsp[-3].val), (yyvsp[-1].val));
	}
#line 10983 "y.tab.c"
    break;

  case 684: /* expr: GRAPHNO '.' VX1  */
#line 3684 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].v.xv1;
	}
#line 10991 "y.tab.c"
    break;

  case 685: /* expr: GRAPHNO '.' VX2  */
#line 3687 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].v.xv2;
	}
#line 10999 "y.tab.c"
    break;

  case 686: /* expr: GRAPHNO '.' VY1  */
#line 3690 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].v.yv1;
	}
#line 11007 "y.tab.c"
    break;

  case 687: /* expr: GRAPHNO '.' VY2  */
#line 3693 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].v.yv2;
	}
#line 11015 "y.tab.c"
    break;

  case 688: /* expr: GRAPHNO '.' WX1  */
#line 3696 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].w.xg1;
	}
#line 11023 "y.tab.c"
    break;

  case 689: /* expr: GRAPHNO '.' WX2  */
#line 3699 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].w.xg2;
	}
#line 11031 "y.tab.c"
    break;

  case 690: /* expr: GRAPHNO '.' WY1  */
#line 3702 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].w.yg1;
	}
#line 11039 "y.tab.c"
    break;

  case 691: /* expr: GRAPHNO '.' WY2  */
#line 3705 "pars.y"
                          {
	    (yyval.val) = g[(yyvsp[-2].pset)].w.yg2;
	}
#line 11047 "y.tab.c"
    break;

  case 692: /* expr: VX1  */
#line 3708 "pars.y"
              {
	    (yyval.val) = g[cg].v.xv1;
	}
#line 11055 "y.tab.c"
    break;

  case 693: /* expr: VX2  */
#line 3711 "pars.y"
              {
	    (yyval.val) = g[cg].v.xv2;
	}
#line 11063 "y.tab.c"
    break;

  case 694: /* expr: VY1  */
#line 3714 "pars.y"
              {
	    (yyval.val) = g[cg].v.yv1;
	}
#line 11071 "y.tab.c"
    break;

  case 695: /* expr: VY2  */
#line 3717 "pars.y"
              {
	    (yyval.val) = g[cg].v.yv2;
	}
#line 11079 "y.tab.c"
    break;

  case 696: /* expr: WX1  */
#line 3720 "pars.y"
              {
	    (yyval.val) = g[cg].w.xg1;
	}
#line 11087 "y.tab.c"
    break;

  case 697: /* expr: WX2  */
#line 3723 "pars.y"
              {
	    (yyval.val) = g[cg].w.xg2;
	}
#line 11095 "y.tab.c"
    break;

  case 698: /* expr: WY1  */
#line 3726 "pars.y"
              {
	    (yyval.val) = g[cg].w.yg1;
	}
#line 11103 "y.tab.c"
    break;

  case 699: /* expr: WY2  */
#line 3729 "pars.y"
              {
	    (yyval.val) = g[cg].w.yg2;
	}
#line 11111 "y.tab.c"
    break;

  case 700: /* expr: DX  */
#line 3732 "pars.y"
             {
	    (yyval.val) = g[cg].w.xg2 - g[cg].w.xg1;
	}
#line 11119 "y.tab.c"
    break;

  case 701: /* expr: DY  */
#line 3735 "pars.y"
             {
	    (yyval.val) = g[cg].w.yg2 - g[cg].w.yg1;
	}
#line 11127 "y.tab.c"
    break;

  case 702: /* expr: INDEX  */
#line 3738 "pars.y"
                {
	    (yyval.val) = setindex;
	}
#line 11135 "y.tab.c"
    break;

  case 703: /* expr: SETNO  */
#line 3741 "pars.y"
                {
	    (yyval.val) = setsetno;
	}
#line 11143 "y.tab.c"
    break;

  case 704: /* expr: INT '(' expr ')'  */
#line 3744 "pars.y"
                           {
	    (yyval.val) = (long) (yyvsp[-1].val);
	}
#line 11151 "y.tab.c"
    break;

  case 705: /* expr: IRAND '(' NUMBER ')'  */
#line 3747 "pars.y"
                               {
	    (yyval.val) = lrand48() % (long) ((yyvsp[-1].val));
	}
#line 11159 "y.tab.c"
    break;

  case 706: /* expr: LGAMMA '(' expr ')'  */
#line 3750 "pars.y"
                              {
	    (yyval.val) = lgamma((yyvsp[-1].val));
	}
#line 11167 "y.tab.c"
    break;

  case 707: /* expr: LN '(' expr ')'  */
#line 3753 "pars.y"
                          {
	    (yyval.val) = log((yyvsp[-1].val));
	}
#line 11175 "y.tab.c"
    break;

  case 708: /* expr: LOG '(' expr ')'  */
#line 3756 "pars.y"
                           {
	    (yyval.val) = log10((yyvsp[-1].val));
	}
#line 11183 "y.tab.c"
    break;

  case 709: /* expr: LOGISTIC '(' expr ',' expr ',' expr ')'  */
#line 3760 "pars.y"
        {
	    (yyval.val) = 1.0 / (1.0 + exp(-((yyvsp[-5].val) - (yyvsp[-3].val))/ (yyvsp[-1].val)));
	}
#line 11191 "y.tab.c"
    break;

  case 710: /* expr: MAXP '(' expr ',' expr ')'  */
#line 3763 "pars.y"
                                     {
	    (yyval.val) = (yyvsp[-3].val) >= (yyvsp[-1].val) ? (yyvsp[-3].val) : (yyvsp[-1].val);
	}
#line 11199 "y.tab.c"
    break;

  case 711: /* expr: MINP '(' expr ',' expr ')'  */
#line 3766 "pars.y"
                                     {
	    (yyval.val) = (yyvsp[-3].val) <= (yyvsp[-1].val) ? (yyvsp[-3].val) : (yyvsp[-1].val);
	}
#line 11207 "y.tab.c"
    break;

  case 712: /* expr: MOD '(' expr ',' expr ')'  */
#line 3769 "pars.y"
                                    {
	    (yyval.val) = fmod((yyvsp[-3].val), (yyvsp[-1].val));
	}
#line 11215 "y.tab.c"
    break;

  case 713: /* expr: NORM '(' expr ')'  */
#line 3772 "pars.y"
                            {
	    (yyval.val) = fx((yyvsp[-1].val));
	}
#line 11223 "y.tab.c"
    break;

  case 714: /* expr: PI  */
#line 3775 "pars.y"
             {
	    (yyval.val) = M_PI;
	}
#line 11231 "y.tab.c"
    break;

  case 715: /* expr: RAD  */
#line 3778 "pars.y"
              {
	    (yyval.val) = M_PI / 180.0;
	}
#line 11239 "y.tab.c"
    break;

  case 716: /* expr: RAND  */
#line 3781 "pars.y"
               {
	    (yyval.val) = (double) drand48();
	}
#line 11247 "y.tab.c"
    break;

  case 717: /* expr: RNORM '(' expr ',' expr ')'  */
#line 3784 "pars.y"
                                      {
	    (yyval.val) = rnorm((yyvsp[-3].val), (yyvsp[-1].val));
	}
#line 11255 "y.tab.c"
    break;

  case 718: /* expr: SIN '(' expr ')'  */
#line 3787 "pars.y"
                           {
	    (yyval.val) = sin((yyvsp[-1].val));
	}
#line 11263 "y.tab.c"
    break;

  case 719: /* expr: SQR '(' expr ')'  */
#line 3790 "pars.y"
                           {
	    (yyval.val) = pow((yyvsp[-1].val), 2.0);
	}
#line 11271 "y.tab.c"
    break;

  case 720: /* expr: SQRT '(' expr ')'  */
#line 3793 "pars.y"
                            {
	    (yyval.val) = sqrt((yyvsp[-1].val));
	}
#line 11279 "y.tab.c"
    break;

  case 721: /* expr: TAN '(' expr ')'  */
#line 3796 "pars.y"
                           {
	    (yyval.val) = tan((yyvsp[-1].val));
	}
#line 11287 "y.tab.c"
    break;

  case 722: /* expr: expr '?' expr ':' expr  */
#line 3799 "pars.y"
                                 {
	    if ((int) (yyvsp[-4].val)) {
		(yyval.val) = (yyvsp[-2].val);
	    } else {
		(yyval.val) = (yyvsp[0].val);
	    }
	}
#line 11299 "y.tab.c"
    break;

  case 723: /* expr: expr GT expr  */
#line 3806 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-2].val) > (yyvsp[0].val);
	}
#line 11307 "y.tab.c"
    break;

  case 724: /* expr: expr LT expr  */
#line 3809 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-2].val) < (yyvsp[0].val);
	}
#line 11315 "y.tab.c"
    break;

  case 725: /* expr: expr LE expr  */
#line 3812 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-2].val) <= (yyvsp[0].val);
	}
#line 11323 "y.tab.c"
    break;

  case 726: /* expr: expr GE expr  */
#line 3815 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-2].val) >= (yyvsp[0].val);
	}
#line 11331 "y.tab.c"
    break;

  case 727: /* expr: expr EQ expr  */
#line 3818 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-2].val) == (yyvsp[0].val);
	}
#line 11339 "y.tab.c"
    break;

  case 728: /* expr: expr NE expr  */
#line 3821 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-2].val) != (yyvsp[0].val);
	}
#line 11347 "y.tab.c"
    break;

  case 729: /* expr: expr AND expr  */
#line 3824 "pars.y"
                        {
	    (yyval.val) = (yyvsp[-2].val) && (yyvsp[0].val);
	}
#line 11355 "y.tab.c"
    break;

  case 730: /* expr: expr OR expr  */
#line 3827 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-2].val) || (yyvsp[0].val);
	}
#line 11363 "y.tab.c"
    break;

  case 731: /* expr: NOT expr  */
#line 3830 "pars.y"
                   {
	    (yyval.val) = !((yyvsp[0].val));
	}
#line 11371 "y.tab.c"
    break;

  case 732: /* expr: '(' expr ')'  */
#line 3833 "pars.y"
                       {
	    (yyval.val) = (yyvsp[-1].val);
	}
#line 11379 "y.tab.c"
    break;

  case 733: /* expr: '-' expr  */
#line 3836 "pars.y"
                                {
	    (yyval.val) = -(yyvsp[0].val);
	}
#line 11387 "y.tab.c"
    break;


#line 11391 "y.tab.c"

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

#line 3840 "pars.y"


void fixupstr(char *val)
{
    int vl = strlen(val);
    lowtoupper(val);
    val[vl + 1] = 0;
    val[vl] = '\n';
}

void scanner(char *s, double *x, double *y, int len, double *a, double *b, double *c, double *d, int lenscr, int i, int setno, int *errpos)
{
    interr = 0;
    whichgraph = cg;
    whichset = setno;
    if (s[0] == '#') {
	return;
    }
    pos = 0;
    aa = a;
    bb = b;
    cc = c;
    dd = d;
    xx = x;
    yy = y;
    lxy = len;
    ls = lenscr;
    setindex = i + 1;
    curset = setsetno = setno;
    strcpy(f_string, s);
    fcnt = 0;
    yyparse();
    *errpos = interr;
    for (i = 0; i < fcnt; i++) {
	free(freelist[i]);
	freelist[i] = NULL;
    }
}

void runbatch(char *bfile)
{
    double x, y, a, b, c, d;
    int i, setno, errpos, lcnt = 1;
    char stext[256];
    FILE *fp;
    if (strcmp("stdin", bfile)) {
	fp = fopen(bfile, "r");
    }
    else {
	fp = stdin;
    }
    if (fp == NULL) {
        fprintf(stderr, "Error opening batch file \"%s\"\n", bfile);
        exit(1);
    }
    while(fgets(stext, 255, fp) != NULL) {
        if (stext[0] == '#') {
            continue;
        }
	if (strlen(stext) == 0) {
	    continue;
	}
        lowtoupper(stext);
/* TODO check on 0, 0 here for index and setno */
        scanner(stext, &x, &y, 1, ax, bx, cx, dx, 1, 0, 0, &errpos);
        stext[0] = 0;
        if (gotparams && paramfile[0]) {
            if (!getparms(cg, paramfile)) {
            }
            gotparams = 0;
        } else if (gotread && readfile[0]) {
            if (getdata(cg, readfile, readsrc, readtype)) {
                drawgraph();
            }
            gotread = 0;
        }
    }
    if (fp != stdin) {
	fclose(fp);
    }
}

symtab_entry key[] = {
	"A", VAR,
	"ABORT", ABORT,
	"ABOVE", ABOVE,
	"ABS", ABS,
	"ABSOLUTE", ABSOLUTE,
	"ACOS", ACOS,
	"ACTIVATE", ACTIVATE,
	"ACTIVE", ACTIVE,
	"ADP", ADP,
	"ALL", ALL,
	"ALT", ALT,
	"ALTERNATE", ALTERNATE,
	"ALTXAXIS", ALTXAXIS,
	"ALTYAXIS", ALTYAXIS,
	"AND", AND,
	"ANGLE", ANGLE,
	"ANNOTATE", ANNOTATE,
	"APPEND", APPEND,
	"AREA", AREA,
	"ARROW", ARROW,
	"ASIN", ASIN,
	"ATAN", ATAN,
	"ATAN2", ATAN2,
	"AUTO", AUTO,
	"AUTOSCALE", AUTOSCALE,
	"AUTOTICKS", AUTOTICKS,
	"AVG", AVG,
	"AXES", AXES,
	"AXIS", AXIS,
	"B", VAR,
	"BACKBUFFER", BACKBUFFER,
	"BACKGROUND", BACKGROUND,
	"BAR", BAR,
	"BATCH", BATCH,
	"BELOW", BELOW,
	"BIN", BIN,
	"BLOCK", BLOCK,
	"BOTH", BOTH,
	"BOTTOM", BOTTOM,
	"BOX", BOX,
	"BOXPLOT", BOXPLOT,
	"BP", BP,
	"C", VAR,
	"CD", CD,
	"CEIL", CEIL,
	"CELLS", CELLS,
	"CENTER", CENTER,
	"CHAR", CHAR,
	"CHRSTR", CHRSTR,
	"CLEAR", CLEAR,
	"CLICK", CLICK,
	"CMAP", CMAP,
	"CO", COLOR,
	"COLOR", COLOR,
	"COMMENT", COMMENT,
	"COPY", COPY,
	"CORIE", CORIE,
	"COS", COS,
	"CTD", CTD,
	"CYCLE", CYCLE,
	"D", VAR,
	"DAYMONTH", DAYMONTH,
	"DAYOFWEEKL", DAYOFWEEKL,
	"DAYOFWEEKS", DAYOFWEEKS,
	"DAYOFYEAR", DAYOFYEAR,
	"DB", DB,
	"DDMMYY", DDMMYY,
	"DDMONTHSYY", DDMONTHSYY,
	"DDMONTHSYYHHMMSS", DDMONTHSYYHHMMSS,
	"DECIMAL", DECIMAL,
	"DEF", DEF,
	"DEFAULT", DEFAULT,
	"DEG", DEG,
	"DEGREESLAT", DEGREESLAT,
	"DEGREESLON", DEGREESLON,
	"DEGREESMMLAT", DEGREESMMLAT,
	"DEGREESMMLON", DEGREESMMLON,
	"DEGREESMMSSLAT", DEGREESMMSSLAT,
	"DEGREESMMSSLON", DEGREESMMSSLON,
	"DELAY", DELAYP,
	"DELETE", DELETE,
	"DEVICE", DEVICE,
	"DFT", DFT,
	"DIFF", DIFFERENCE,
	"DIFFERENCE", DIFFERENCE,
	"DISK", DISK,
	"DOUBLEBUFFER", DOUBLEBUFFER,
	"DOWN", DOWN,
	"DRAW2", DRAW2,
	"DROP", DROP,
	"DX", DX,
	"DXDX", DXDX,
	"DY", DY,
	"DYDY", DYDY,
	"ECHO", ECHO,
	"EDIT", EDIT,
	"ELCIRC", ELCIRC,
	"ELSE", ELSE,
	"END", END,
	"EQ", EQ,
	"ER", ERRORBAR,
	"ERF", ERF,
	"ERFC", ERFC,
	"ERRORBAR", ERRORBAR,
	"EXIT", EXIT,
	"EXP", EXP,
	"EXPONENTIAL", EXPONENTIAL,
	"FALSE", FALSEP,
	"FEGRID", FEGRID,
	"FFT", FFT,
	"FILE", FILEP,
	"FILL", FILL,
	"FIND", FIND,
	"FIXED", FIXED,
	"FIXEDPOINT", FIXEDPOINT,
	"FLOOR", FLOOR,
	"FLUSH", FLUSH,
	"FOCUS", FOCUS,
	"FOLLOWS", FOLLOWS,
	"FONT", FONTP,
	"FOREGROUND", FOREGROUND,
	"FORMAT", FORMAT,
	"FRAME", FRAMEP,
	"FREE", FREE,
	"FRONTBUFFER", FRONTBUFFER,
	"GE", GE,
	"GENERAL", GENERAL,
	"GETP", GETP,
	"GIFL", GIFL,
	"GIFP", GIFP,
	"GRAPH", GRAPH,
	"GRAPHS", GRAPHS,
	"GRAPHTYPE", GRAPHTYPE,
	"GRID", GRID,
	"GT", GT,
	"HARDCOPY", HARDCOPY,
	"HBAR", HBAR,
	"HBOXPLOT", HBOXPLOT,
	"HEAT", HEAT,
	"HGAP", HGAP,
	"HH", HH,
	"HIDDEN", HIDDEN,
	"HISTO", HISTO,
	"HMS", HMS,
	"HORIZONTAL", HORIZONTAL,
	"HYPOT", HYPOT,
	"IF", IF,
	"IGNORE", IGNORE,
	"IHL", IHL,
	"IMAGE", IMAGE,
	"IN", IN,
	"INDEX", INDEX,
	"INIT", INIT,
	"INITGRAPHICS", INITGRAPHICS,
	"INOUT", INOUT,
	"INT", INT,
	"INTEGRATE", INT,
	"INTERP", INTERP,
	"INUM", INUM,
	"INVDFT", INVDFT,
	"INVFFT", INVFFT,
	"INVN", INVN,
	"INVT", INVT,
	"IRAND", IRAND,
	"ISOLINE", ISOLINE,
	"ISOLINES", ISOLINES,
	"JUST", JUST,
	"KILL", KILL,
	"LABEL", LABEL,
	"LANDSCAPE", LANDSCAPE,
	"LAYOUT", LAYOUT,
	"LE", LE,
	"LEAVE", LEAVE,
	"LEAVEGRAPHICS", LEAVEGRAPHICS,
	"LEFT", LEFT,
	"LEGEND", LEGEND,
	"LENGTH", LENGTH,
	"LEVEL", LEVEL,
	"LEVELS", LEVELS,
	"LGAMMA", LGAMMA,
	"LINE", LINE,
	"LINESTYLE", LINESTYLE,
	"LINETO", LINETO,
	"LINEWIDTH", LINEWIDTH,
	"LINK", LINK,
	"LN", LN,
	"LOAD", LOAD,
	"LOCATOR", LOCATOR,
	"LOCATORBAR", LOCATORBAR,
	"LOCTYPE", LOCTYPE,
	"LOG", LOG,
	"LOGISTIC", LOGISTIC,
	"LOGX", LOGX,
	"LOGXY", LOGXY,
	"LOGY", LOGY,
	"LS", LINESTYLE,
	"LT", LT,
	"LW", LINEWIDTH,
	"MAJOR", MAJOR,
	"MAX", MAXP,
	"MIFL", MIFL,
	"MIFP", MIFP,
	"MIN", MINP,
	"MINOR", MINOR,
	"MISSING", MISSINGP,
	"MMDD", MMDD,
	"MMDDHMS", MMDDHMS,
	"MMDDYY", MMDDYY,
	"MMDDYYHMS", MMDDYYHMS,
	"MMSSLAT", MMSSLAT,
	"MMSSLON", MMSSLON,
	"MMYY", MMYY,
	"MOD", MOD,
	"MONITOR", MONITOR,
	"MONTHDAY", MONTHDAY,
	"MONTHL", MONTHL,
	"MONTHS", MONTHS,
	"MOVE", MOVE,
	"MOVE2", MOVE2,
	"MOVETO", MOVETO,
	"NE", NE,
	"NEGATE", NEGATE,
	"NO", NO,
	"NONE", NONE,
	"NORM", NORM,
	"NORMAL", NORMAL,
	"NORMP", NORMP,
	"NOT", NOT,
	"NUMBER", NUMBER,
	"NXY", NXY,
	"OFF", OFF,
	"OFFSETX", OFFSETX,
	"OFFSETY", OFFSETY,
	"ON", ON,
	"OP", OP,
	"OR", OR,
	"ORIENT", ORIENT,
	"OUT", OUT,
	"PAGE", PAGE,
	"PARA", PARA,
	"PARALLEL", PARALLEL,
	"PARAMETERS", PARAMETERS,
	"PARAMS", PARAMS,
	"PATTERN", PATTERN,
	"PERIMETER", PERIMETER,
	"PERP", PERP,
	"PERPENDICULAR", PERPENDICULAR,
	"PI", PI,
	"PIE", PIE,
	"PIPE", PIPE,
	"PLACE", PLACE,
	"POINT", POINT,
	"POLAR", POLAR,
	"POLYI", POLYI,
	"POLYO", POLYO,
	"POP", POP,
	"PORTRAIT", PORTRAIT,
	"POWER", POWER,
	"PREC", PREC,
	"PREPEND", PREPEND,
	"PRINT", PRINT,
	"PS", PS,
	"PSCOLORL", PSCOLORL,
	"PSCOLORP", PSCOLORP,
	"PSMONOL", PSMONOL,
	"PSMONOP", PSMONOP,
	"PUSH", PUSH,
	"PUTP", PUTP,
	"RAD", RAD,
	"RAND", RAND,
	"READ", READ,
	"RECTGRID", RECTGRID,
	"REDRAW", REDRAW,
	"REGRESS", REGRESS,
	"RENDER", RENDER,
	"REVERSE", REVERSE,
	"RIGHT", RIGHT,
	"RISER", RISER,
	"RNORM", RNORM,
	"ROT", ROT,
	"RUNAVG", RUNAVG,
	"RUNMAX", RUNMAX,
	"RUNMED", RUNMED,
	"RUNMIN", RUNMIN,
	"RUNSTD", RUNSTD,
	"SAMPLE", SAMPLE,
	"SAVEALL", SAVEALL,
	"SCALAR", SCALAR,
	"SCALE", SCALE,
	"SCIENTIFIC", SCIENTIFIC,
	"SET", SET,
	"SETNO", SETNO,
	"SETS", SETS,
	"SIGN", SIGN,
	"SIN", SIN,
	"SIZE", SIZE,
	"SKIP", SKIP,
	"SLEEP", SLEEP,
	"SLICE", SLICE,
	"SOURCE", SOURCE,
	"SPEC", SPEC,
	"SPECIFIED", SPECIFIED,
	"SPECTRUM", SPECTRUM,
	"SPLINE", SPLINE,
	"SQR", SQR,
	"SQRT", SQRT,
	"STACK", STACK,
	"STACKEDBAR", STACKEDBAR,
	"STACKEDHBAR", STACKEDHBAR,
	"STACKEDLINE", STACKEDLINE,
	"STAGGER", STAGGER,
	"START", START,
	"STARTTYPE", STARTTYPE,
	"STATUS", STATUS,
	"STATUSBAR", STATUSBAR,
	"STEP", STEP,
	"STOP", STOP,
	"STRING", STRING,
	"SUBTITLE", SUBTITLE,
	"SWAPBUFFER", SWAPBUFFER,
	"SYMBOL", SYMBOL,
	"TAN", TAN,
	"TICK", TICKP,
	"TICKLABEL", TICKLABEL,
	"TICKMARKS", TICKMARKS,
	"TITLE", TITLE,
	"TO", TO,
	"TOOLBAR", TOOLBAR,
	"TOP", TOP,
	"TPC", TPC,
	"TRUE", TRUEP,
	"TYPE", TYPE,
	"UP", UP,
	"VAR", VAR,
	"VECTOR", VECTOR,
	"VELOCITY", VELOCITY,
	"VERTICAL", VERTICAL,
	"VGAP", VGAP,
	"VIEW", VIEW,
	"VX1", VX1,
	"VX2", VX2,
	"VY1", VY1,
	"VY2", VY2,
	"WITH", WITH,
	"WORLD", WORLD,
	"WRITE", WRITE,
	"WX1", WX1,
	"WX2", WX2,
	"WY1", WY1,
	"WY2", WY2,
	"X", X,
	"X0", X0,
	"X1", X1,
	"XAXES", XAXES,
	"XAXIS", XAXIS,
	"XCOR", XCOR,
	"XMAX", XMAX,
	"XMIN", XMIN,
	"XY", XY,
	"XYARC", XYARC,
	"XYBOX", XYBOX,
	"XYBOXPLOT", XYBOXPLOT,
	"XYDX", XYDX,
	"XYDXDX", XYDXDX,
	"XYDXDY", XYDXDY,
	"XYDY", XYDY,
	"XYDYDY", XYDYDY,
	"XYFIXED", XYFIXED,
	"XYHILO", XYHILO,
	"XYRT", XYRT,
	"XYSEG", XYSEG,
	"XYSTRING", XYSTRING,
	"XYUV", XYUV,
	"XYX2Y2", XYX2Y2,
	"XYXX", XYXX,
	"XYYY", XYYY,
	"XYZ", XYZ,
	"XYZW", XYZW,
	"Y", Y,
	"Y0", Y0,
	"Y1", Y1,
	"Y2", Y2,
	"Y3", Y3,
	"Y4", Y4,
	"Y5", Y5,
	"YAXES", YAXES,
	"YAXIS", YAXIS,
	"YES", YES,
	"YMAX", YMAX,
	"YMIN", YMIN,
	"ZEROXAXIS", ZEROXAXIS,
	"ZEROYAXIS", ZEROYAXIS,
};

int maxfunc = sizeof(key) / sizeof(symtab_entry);

int findf(symtab_entry *key, char *s, int tlen)
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

int getcharstr(void)
{
    if (pos >= strlen(f_string))
	 return EOF;
    return (f_string[pos++]);
}

void ungetchstr(void)
{
    if (pos > 0)
	pos--;
}

int yylex(void)
{
    int c, i;
    int found;
    static char s[256];
    char sbuf[256];
    char *str;

    while ((c = getcharstr()) == ' ' || c == '\t');
    if (c == EOF) {
	return (0);
    }
    if (c == '"') {
	i = 0;
	while ((c = getcharstr()) != '"' && c != EOF) {
	    if (c == '\\') {
		int ctmp;
		ctmp = getcharstr();
		if (ctmp != '"') {
		    ungetchstr();
		}
		else {
		    c = ctmp;
		}
	    }
	    s[i] = c;
	    i++;
	}
	if (c == EOF) {
	    sprintf(sbuf, "Nonterminating string\n");
	    yyerror(sbuf);
	    return 0;
	}
	s[i] = '\0';
	str = (char *) malloc(strlen(s) + 1);
	strcpy(str, s);
	yylval.str = str;
	return CHRSTR;
    }
    if (c == '.' || isdigit(c)) {
	char stmp[80];
	double d;
	int i, gotdot = 0;

	i = 0;
	while (c == '.' || isdigit(c)) {
	    if (c == '.') {
		if (gotdot) {
		    yyerror("Reading number, too many dots");
	    	    return 0;
		} else {
		    gotdot = 1;
		}
	    }
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
	    while (isdigit(c)) {
		stmp[i++] = c;
		c = getcharstr();
	    }
	}
	if (gotdot && i == 1) {
	    ungetchstr();
	    return '.';
	}
	stmp[i] = '\0';
	ungetchstr();
	sscanf(stmp, "%lf", &d);
	yylval.val = d;
	return NUMBER;
    }
/* graphs, sets, regions resp. */
    if (c == 'G' || c == 'S' || c == 'R') {
	char stmp[80];
	double d;
	int i = 0, ctmp = c, gn, sn, rn;
	c = getcharstr();
	while (isdigit(c)) {
	    stmp[i++] = c;
	    c = getcharstr();
	}
	if (i == 0) {
	    c = ctmp;
	    ungetchstr();
	} else {
	    ungetchstr();
	    if (ctmp == 'G') {
	        stmp[i] = '\0';
		gn = atoi(stmp);
		if (gn >= 0 && gn < maxgraph) {
		    yylval.ival = gn;
		    whichgraph = gn;
		    return GRAPHNO;
		}
	    } else if (ctmp == 'S') {
	        stmp[i] = '\0';
		sn = atoi(stmp);
		if (sn >= 0 && sn < g[cg].maxplot) {
		    lxy = getsetlength(cg, sn);
		    yylval.ival = sn;
		    whichset = sn;
		    return SETNUM;
		}
	    } else if (ctmp == 'R') {
	        stmp[i] = '\0';
		rn = atoi(stmp);
		if (rn >= 0 && rn < MAXREGION) {
		    yylval.ival = rn;
		    return REGNUM;
		}
	    }
	}
    }
    if (isalpha(c)) {
	char *p = sbuf;
	int gno = -1, setno = -1, xy = -1, elno = -1;

	do {
	    *p++ = c;
	} while ((c = getcharstr()) != EOF && isalnum(c));
	ungetchstr();
	*p = '\0';
        if (debuglevel == 2) {
	    printf("->%s<-\n", sbuf);
	}
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
		    yylval.ptr = dd;
		    return VAR;
		}
	    }
	    else { /* set up special cases */
		switch (key[found].type) {
		case XAXIS:
		    naxis = 0;
		    break;
		case YAXIS:
		    naxis = 1;
		    break;
		case ZEROXAXIS:
		    naxis = 2;
		    break;
		case ZEROYAXIS:
		    naxis = 3;
		    break;
		case ALTXAXIS:
		    naxis = 4;
		    break;
		case ALTYAXIS:
		    naxis = 5;
		    break;
		case AXES:
		    naxis = 6;
		    break;
		case XAXES:
		    naxis = 7;
		    break;
		case YAXES:
		    naxis = 8;
		    break;
		case GRAPHS:
		    yylval.ival = -1;
		    whichgraph = -1;
		    return GRAPHS;
		    break;
		case SETS:
		    yylval.ival = -1;
		    whichset = -1;
		    return SETS;
		    break;
		default:
		    break;
		}
	    }
	    yylval.func = key[found].type;
	    return key[found].type;
	} else {
	    strcat(sbuf, ": No such function or variable");
	    yyerror(sbuf);
	    return 0;
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

    if (c == expect) {
	return ifyes;
    }
    ungetchstr();
    return ifno;
}

void yyerror(char *s)
{
    int i;
    char buf[256];
    sprintf(buf, "Error: %s: %s", s, f_string);
    i = strlen(buf);
    buf[i - 1] = 0;
    errwin(buf);
    interr = 1;
}

#define C1 0.1978977093962766
#define C2 0.1352915131768107

double rnorm(double mean, double sdev)
{
    double u = drand48();

    return mean + sdev * (pow(u, C2) - pow(1.0 - u, C2)) / C1;
}

double fx(double x)
{
    return 1.0 / sqrt(2.0 * M_PI) * exp(-x * x * 0.5);
}

/*
 * return a pointer to the array given by v
 */
double *getvptr(int gno, int setno, int v)
{
    switch (v) {
    case X:
    case X0:
	return g[gno].p[setno].ex[0];
	break;
    case Y:
    case Y0:
	return g[gno].p[setno].ex[1];
	break;
    case Y1:
	return g[gno].p[setno].ex[2];
	break;
    case Y2:
	return g[gno].p[setno].ex[3];
	break;
    case Y3:
	return g[gno].p[setno].ex[4];
	break;
    case Y4:
	return g[gno].p[setno].ex[5];
	break;
    }
    return NULL;
}
