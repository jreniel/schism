/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 888 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
