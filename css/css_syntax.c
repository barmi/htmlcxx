/* A Bison parser, made from css_syntax.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	IMPORT_SYM	257
# define	IMPORTANT_SYM	258
# define	IDENT	259
# define	STRING	260
# define	NUMBER	261
# define	PERCENTAGE	262
# define	LENGTH	263
# define	EMS	264
# define	EXS	265
# define	LINK_PSCLASS_AFTER_IDENT	266
# define	VISITED_PSCLASS_AFTER_IDENT	267
# define	ACTIVE_PSCLASS_AFTER_IDENT	268
# define	FIRST_LINE_AFTER_IDENT	269
# define	FIRST_LETTER_AFTER_IDENT	270
# define	HASH_AFTER_IDENT	271
# define	CLASS_AFTER_IDENT	272
# define	LINK_PSCLASS	273
# define	VISITED_PSCLASS	274
# define	ACTIVE_PSCLASS	275
# define	FIRST_LINE	276
# define	FIRST_LETTER	277
# define	HASH	278
# define	CLASS	279
# define	URL	280
# define	RGB	281
# define	CDO	282
# define	CDC	283
# define	CSL	284

#line 1 "css_syntax.y"

#include <stdio.h>
#include <string.h>
#include "css_lex.h"
#include "parser.h"

#define YYPARSE_PARAM yyparam
#define YYERROR_VERBOSE 1
//#define YYDEBUG 1


#line 15 "css_syntax.y"
#ifndef YYSTYPE
typedef union {
	char *lexeme;
	char letter;
	struct property_t *property;
	struct selector_t *selector;
	struct selector_list_t *selector_list;
	int pseudo_class;
	int pseudo_element;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		99
#define	YYFLAG		-32768
#define	YYNTBASE	39

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 284 ? yytranslate[x] : 70)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,    35,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    31,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     4,     8,     9,    13,    14,    17,    18,    20,
      22,    24,    28,    30,    32,    34,    36,    38,    40,    41,
      43,    48,    50,    54,    56,    60,    63,    66,    68,    70,
      73,    75,    77,    80,    85,    89,    93,    97,   100,   103,
     106,   108,   112,   115,   118,   120,   123,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   143,   145,   147,   149,
     151,   153,   155,   157,   162,   166,   168,   169,   171,   173,
     177,   180,   183,   185,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   205,   207
};
static const short yyrhs[] =
{
      42,    41,    40,     0,    49,    42,    40,     0,     0,    44,
      42,    41,     0,     0,    42,    43,     0,     0,    28,     0,
      29,     0,    30,     0,     3,    45,    31,     0,     6,     0,
      26,     0,    32,     0,    33,     0,    34,     0,    35,     0,
       0,     5,     0,    50,    36,    51,    37,     0,    52,     0,
      52,    35,    50,     0,    64,     0,    64,    31,    51,     0,
      53,    60,     0,    53,    61,     0,    53,     0,    61,     0,
      52,     1,     0,     1,     0,    54,     0,    54,    53,     0,
      55,    62,    58,    56,     0,    55,    62,    56,     0,    55,
      58,    56,     0,    55,    62,    58,     0,    55,    62,     0,
      55,    58,     0,    55,    56,     0,    55,     0,    63,    58,
      56,     0,    63,    58,     0,    63,    56,     0,    63,     0,
      59,    56,     0,    59,     0,    57,     0,     5,     0,    12,
       0,    13,     0,    14,     0,    19,     0,    20,     0,    21,
       0,    18,     0,    25,     0,    16,     0,    15,     0,    23,
       0,    22,     0,    17,     0,    24,     0,    48,    38,    66,
      65,     0,    48,    38,    66,     0,     1,     0,     0,     4,
       0,    67,     0,    66,    47,    67,     0,    66,     1,     0,
      46,    68,     0,    68,     0,     7,     0,     6,     0,     8,
       0,     9,     0,    10,     0,    11,     0,     5,     0,    69,
       0,    26,     0,    27,     0,    24,     0,    17,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,    96,   102,   114,   118,   119,   123,   124,   128,   129,
     130,   134,   138,   139,   163,   164,   168,   169,   170,   174,
     178,   194,   204,   219,   222,   233,   241,   249,   250,   251,
     252,   256,   257,   270,   280,   290,   300,   310,   320,   330,
     340,   350,   360,   370,   380,   390,   400,   410,   423,   427,
     428,   429,   433,   434,   435,   439,   443,   447,   448,   452,
     462,   479,   483,   487,   496,   505,   506,   512,   516,   517,
     527,   531,   539,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   560,   565
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "IMPORT_SYM", "IMPORTANT_SYM", "IDENT", 
  "STRING", "NUMBER", "PERCENTAGE", "LENGTH", "EMS", "EXS", 
  "LINK_PSCLASS_AFTER_IDENT", "VISITED_PSCLASS_AFTER_IDENT", 
  "ACTIVE_PSCLASS_AFTER_IDENT", "FIRST_LINE_AFTER_IDENT", 
  "FIRST_LETTER_AFTER_IDENT", "HASH_AFTER_IDENT", "CLASS_AFTER_IDENT", 
  "LINK_PSCLASS", "VISITED_PSCLASS", "ACTIVE_PSCLASS", "FIRST_LINE", 
  "FIRST_LETTER", "HASH", "CLASS", "URL", "RGB", "CDO", "CDC", "CSL", 
  "';'", "'-'", "'+'", "'/'", "','", "'{'", "'}'", "':'", "stylesheet", 
  "rulesets", "imports", "comments", "comment", "import", "string_or_url", 
  "unary_operator", "operator", "property", "ruleset", "selectors", 
  "declarations", "selector", "simple_selectors", "simple_selector", 
  "element_name", "pseudo_class", "solitary_pseudo_class", "class", 
  "solitary_class", "pseudo_element", "solitary_pseudo_element", "id", 
  "solitary_id", "declaration", "prio", "expr", "term", "value", 
  "hexcolor", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,    39,    40,    40,    41,    41,    42,    42,    43,    43,
      43,    44,    45,    45,    46,    46,    47,    47,    47,    48,
      49,    50,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    55,    56,
      56,    56,    57,    57,    57,    58,    59,    60,    60,    61,
      61,    62,    63,    64,    64,    64,    64,    65,    66,    66,
      66,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     3,     3,     0,     3,     0,     2,     0,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     1,
       4,     1,     3,     1,     3,     2,     2,     1,     1,     2,
       1,     1,     2,     4,     3,     3,     3,     2,     2,     2,
       1,     3,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     0,     1,     1,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       7,     5,     0,     8,     9,    10,     0,     6,     7,    12,
      13,     0,    30,    48,    52,    53,    54,    60,    59,    62,
      56,     1,     7,     0,     0,    27,    31,    40,    47,    46,
      28,    44,     5,    11,     0,     0,    29,     0,    58,    57,
      25,    26,    32,    49,    50,    51,    61,    55,    39,    38,
      37,    45,    43,    42,     4,     2,    65,    19,     0,     0,
      23,    22,    35,    34,    36,    41,     0,    20,     0,    33,
      79,    74,    73,    75,    76,    77,    78,    84,    83,    81,
      82,    14,    15,     0,     0,    68,    72,    80,    24,    71,
      70,    67,    16,    17,     0,    63,    69,     0,     0,     0
};

static const short yydefgoto[] =
{
      97,    21,     6,     1,     7,     8,    11,    83,    94,    58,
      22,    23,    59,    24,    25,    26,    27,    48,    28,    49,
      29,    40,    30,    50,    31,    60,    95,    84,    85,    86,
      87
};

static const short yypact[] =
{
  -32768,    26,    -5,-32768,-32768,-32768,    86,-32768,-32768,-32768,
  -32768,   -29,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   -24,    13,   113,    38,   132,-32768,    80,
  -32768,   139,    26,-32768,    45,    10,-32768,    95,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    80,
     139,-32768,-32768,    80,-32768,-32768,-32768,-32768,   -21,   -18,
      -9,-32768,-32768,-32768,    80,-32768,    71,-32768,    10,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   116,    -1,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,    71,-32768,-32768,    24,    28,-32768
};

static const short yypgoto[] =
{
  -32768,     1,     8,     5,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,     0,   -17,-32768,    18,-32768,-32768,   -11,-32768,    21,
  -32768,-32768,    35,-32768,-32768,-32768,-32768,-32768,   -33,     2,
  -32768
};


#define	YYLAST		157


static const short yytable[] =
{
      90,     9,    33,    91,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,    56,    35,    32,    36,    57,   -18,    66,    51,    67,
      52,    10,    68,   -18,    98,   -18,   -18,    34,    99,     2,
     -64,   -18,   -18,    92,    93,    55,   -64,    61,    62,    63,
      54,   -66,    65,    13,    42,    -3,    12,   -66,    37,   -21,
      13,    88,    53,    69,     3,     4,     5,    14,    15,    16,
      41,    96,    19,    20,    14,    15,    16,    17,    18,    19,
      20,    64,     0,     3,     4,     5,    70,    71,    72,    73,
      74,    75,    76,     0,     0,    89,    -3,    12,    77,     0,
       0,    13,    43,    44,    45,    78,    12,    79,    80,     0,
      13,     0,     0,    81,    82,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    70,    71,    72,    73,    74,    75,    76,    38,    39,
       0,     0,     0,    77,     0,    17,    18,     0,     0,     0,
      78,     0,    79,    80,    43,    44,    45,     0,     0,    46,
      47,    43,    44,    45,     0,     0,     0,    47
};

static const short yycheck[] =
{
       1,     6,    31,     4,     5,     6,     7,     8,     9,    10,
      11,     1,    36,     8,     1,     5,    17,    38,    29,    37,
      31,    26,    31,    24,     0,    26,    27,    22,     0,     3,
      31,    32,    33,    34,    35,    34,    37,    37,    49,    50,
      32,    31,    53,     5,    26,     0,     1,    37,    35,    36,
       5,    68,    31,    64,    28,    29,    30,    19,    20,    21,
      25,    94,    24,    25,    19,    20,    21,    22,    23,    24,
      25,    50,    -1,    28,    29,    30,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    83,     0,     1,    17,    -1,
      -1,     5,    12,    13,    14,    24,     1,    26,    27,    -1,
       5,    -1,    -1,    32,    33,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,     5,     6,     7,     8,     9,    10,    11,    15,    16,
      -1,    -1,    -1,    17,    -1,    22,    23,    -1,    -1,    -1,
      24,    -1,    26,    27,    12,    13,    14,    -1,    -1,    17,
      18,    12,    13,    14,    -1,    -1,    -1,    18
};
#define YYPURE 1

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 1:
#line 96 "css_syntax.y"
{
						*(struct selector_list_t**) yyparam = yyvsp[0].selector_list;
					}
    break;
case 2:
#line 102 "css_syntax.y"
{
								struct selector_list_t *pos = yyvsp[-2].selector_list;
								if (pos != NULL) {
									while (pos->next != NULL) {
										pos = pos->next;
									}
									pos->next = yyvsp[0].selector_list;
								} else {
									yyvsp[-2].selector_list = yyvsp[0].selector_list;
								}
								yyval.selector_list = yyvsp[-2].selector_list;
							}
    break;
case 3:
#line 114 "css_syntax.y"
{ yyval.selector_list = NULL;  }
    break;
case 12:
#line 138 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 13:
#line 139 "css_syntax.y"
{
			char *begin = yyvsp[0].lexeme;
			char *end = yyvsp[0].lexeme + strlen(yyvsp[0].lexeme);

			/* Skip url( */
			begin += 4;
			/* skip whitespace */
			while (*begin == ' ')
				++begin;

			/* Skip ) */
			end -= 2;
			/* skip whitespace */
			while (*end == ' ')
				--end;

			end[1] = 0;

			yyval.lexeme = strdup(begin);
			free(yyvsp[0].lexeme);
		}
    break;
case 14:
#line 163 "css_syntax.y"
{ yyval.letter = '-'; }
    break;
case 15:
#line 164 "css_syntax.y"
{ yyval.letter = '+'; }
    break;
case 16:
#line 168 "css_syntax.y"
{ yyval.letter = '/'; }
    break;
case 17:
#line 169 "css_syntax.y"
{ yyval.letter = ','; }
    break;
case 18:
#line 170 "css_syntax.y"
{yyval.letter = ' '; }
    break;
case 19:
#line 174 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 20:
#line 178 "css_syntax.y"
{
										struct selector_list_t *pos = yyvsp[-3].selector_list;
										while (pos != NULL) {
											struct property_t *i = yyvsp[-1].property;
											while (i != NULL) {
												i->count++;
												i = i->next;
											}
											pos->selector->property = yyvsp[-1].property;
											pos = pos->next;
										}
										yyval.selector_list = yyvsp[-3].selector_list;
									}
    break;
case 21:
#line 194 "css_syntax.y"
{
				if (yyvsp[0].selector != NULL) {
					yyval.selector_list = (struct selector_list_t*)
						malloc (sizeof(struct selector_list_t));
					yyval.selector_list->selector = yyvsp[0].selector;
					yyval.selector_list->next = NULL;
				} else {
					yyval.selector_list = NULL;
				}
			}
    break;
case 22:
#line 204 "css_syntax.y"
{
								if (yyvsp[-2].selector != NULL) {
									struct selector_list_t *new;
									new = (struct selector_list_t*)
										malloc (sizeof(struct selector_list_t));
									new->selector = yyvsp[-2].selector;
									new->next = yyvsp[0].selector_list;
									yyval.selector_list = new;
								} else {
									yyval.selector_list = yyvsp[0].selector_list;
								}
							}
    break;
case 23:
#line 219 "css_syntax.y"
{
									yyval.property = yyvsp[0].property;
								}
    break;
case 24:
#line 222 "css_syntax.y"
{
									if (yyvsp[-2].property != NULL) {
										yyvsp[-2].property->next = yyvsp[0].property;
										yyval.property = yyvsp[-2].property;
									} else {
										yyval.property = yyvsp[0].property;
									}
								}
    break;
case 25:
#line 233 "css_syntax.y"
{
										struct selector_t *pos = yyvsp[-1].selector;
										while (pos->next != NULL) {
											pos = pos->next;
										}
										pos->pseudo_element = yyvsp[0].pseudo_element;
										yyval.selector = yyvsp[-1].selector;
									}
    break;
case 26:
#line 241 "css_syntax.y"
{
												struct selector_t *pos = yyvsp[-1].selector;
												while (pos->next != NULL) {
													pos = pos->next;
												}
												pos->next = yyvsp[0].selector;
												yyval.selector = yyvsp[-1].selector;
											}
    break;
case 27:
#line 249 "css_syntax.y"
{ yyval.selector = yyvsp[0].selector; }
    break;
case 28:
#line 250 "css_syntax.y"
{ yyval.selector = yyvsp[0].selector; }
    break;
case 29:
#line 251 "css_syntax.y"
{ yyval.selector = NULL; }
    break;
case 30:
#line 252 "css_syntax.y"
{ yyval.selector = NULL; }
    break;
case 31:
#line 256 "css_syntax.y"
{ yyval.selector = yyvsp[0].selector; }
    break;
case 32:
#line 257 "css_syntax.y"
{
										yyvsp[-1].selector->next = yyvsp[0].selector;
										yyval.selector = yyvsp[-1].selector;
									}
    break;
case 33:
#line 270 "css_syntax.y"
{
										yyval.selector = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										yyval.selector->element_name = yyvsp[-3].lexeme;
										yyval.selector->id = yyvsp[-2].lexeme;
										yyval.selector->e_class = yyvsp[-1].lexeme;
										yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
										yyval.selector->pseudo_element = 0;
										yyval.selector->next = NULL;
									 }
    break;
case 34:
#line 280 "css_syntax.y"
{
									yyval.selector = (struct selector_t*)
										malloc(sizeof(struct selector_t));
									yyval.selector->element_name = yyvsp[-2].lexeme;
									yyval.selector->id = yyvsp[-1].lexeme;
									yyval.selector->e_class = NULL;
									yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
									yyval.selector->pseudo_element = 0;
									yyval.selector->next = NULL;
								}
    break;
case 35:
#line 290 "css_syntax.y"
{
										yyval.selector = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										yyval.selector->element_name = yyvsp[-2].lexeme;
										yyval.selector->id = NULL;
										yyval.selector->e_class = yyvsp[-1].lexeme;
										yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
										yyval.selector->pseudo_element = 0;
										yyval.selector->next = NULL;
									}
    break;
case 36:
#line 300 "css_syntax.y"
{
							yyval.selector = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							yyval.selector->element_name = yyvsp[-2].lexeme;
							yyval.selector->id = yyvsp[-1].lexeme;
							yyval.selector->e_class = yyvsp[0].lexeme;
							yyval.selector->pseudo_class = 0;
							yyval.selector->pseudo_element = 0;
							yyval.selector->next = NULL;
						}
    break;
case 37:
#line 310 "css_syntax.y"
{
						yyval.selector = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						yyval.selector->element_name = yyvsp[-1].lexeme;
						yyval.selector->id = yyvsp[0].lexeme;
						yyval.selector->e_class = NULL;
						yyval.selector->pseudo_class = 0;
						yyval.selector->pseudo_element = 0;
						yyval.selector->next = NULL;
					}
    break;
case 38:
#line 320 "css_syntax.y"
{
							yyval.selector = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							yyval.selector->element_name = yyvsp[-1].lexeme;
							yyval.selector->id = NULL;
							yyval.selector->e_class = yyvsp[0].lexeme;
							yyval.selector->pseudo_class = 0;
							yyval.selector->pseudo_element = 0;
							yyval.selector->next = NULL;
						}
    break;
case 39:
#line 330 "css_syntax.y"
{
								yyval.selector = (struct selector_t*)
									malloc(sizeof(struct selector_t));
								yyval.selector->element_name = yyvsp[-1].lexeme;
								yyval.selector->id = NULL;
								yyval.selector->e_class = NULL;
								yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
								yyval.selector->pseudo_element = 0;
								yyval.selector->next = NULL;
							}
    break;
case 40:
#line 340 "css_syntax.y"
{
					yyval.selector = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					yyval.selector->element_name = yyvsp[0].lexeme;
					yyval.selector->id = NULL;
					yyval.selector->e_class = NULL;
					yyval.selector->pseudo_class = 0;
					yyval.selector->pseudo_element = 0;
					yyval.selector->next = NULL;
				}
    break;
case 41:
#line 350 "css_syntax.y"
{
										yyval.selector = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										yyval.selector->element_name = NULL;
										yyval.selector->id = yyvsp[-2].lexeme;
										yyval.selector->e_class = yyvsp[-1].lexeme;
										yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
										yyval.selector->pseudo_element = 0;
										yyval.selector->next = NULL;
									}
    break;
case 42:
#line 360 "css_syntax.y"
{
						yyval.selector = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						yyval.selector->element_name = NULL;
						yyval.selector->id = yyvsp[-1].lexeme;
						yyval.selector->e_class = yyvsp[0].lexeme;
						yyval.selector->pseudo_class = 0;
						yyval.selector->pseudo_element = 0;
						yyval.selector->next = NULL;
					}
    break;
case 43:
#line 370 "css_syntax.y"
{
								yyval.selector = (struct selector_t*)
									malloc(sizeof(struct selector_t));
								yyval.selector->element_name = NULL;
								yyval.selector->id = yyvsp[-1].lexeme;
								yyval.selector->e_class = NULL;
								yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
								yyval.selector->pseudo_element = 0;
								yyval.selector->next = NULL;
							}
    break;
case 44:
#line 380 "css_syntax.y"
{
					yyval.selector = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					yyval.selector->element_name = NULL;
					yyval.selector->id = yyvsp[0].lexeme;
					yyval.selector->e_class = NULL;
					yyval.selector->pseudo_class = 0;
					yyval.selector->pseudo_element = 0;
					yyval.selector->next = NULL;
				}
    break;
case 45:
#line 390 "css_syntax.y"
{
									yyval.selector = (struct selector_t*)
										malloc(sizeof(struct selector_t));
									yyval.selector->element_name = NULL;
									yyval.selector->id = NULL;
									yyval.selector->e_class = yyvsp[-1].lexeme;
									yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
									yyval.selector->pseudo_element = 0;
									yyval.selector->next = NULL;
								}
    break;
case 46:
#line 400 "css_syntax.y"
{
						yyval.selector = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						yyval.selector->element_name = NULL;
						yyval.selector->id = NULL;
						yyval.selector->e_class = yyvsp[0].lexeme;
						yyval.selector->pseudo_class = 0;
						yyval.selector->pseudo_element = 0;
						yyval.selector->next = NULL;
					}
    break;
case 47:
#line 410 "css_syntax.y"
{
							yyval.selector = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							yyval.selector->element_name = NULL;
							yyval.selector->id = NULL;
							yyval.selector->e_class = NULL;
							yyval.selector->pseudo_class = yyvsp[0].pseudo_class;
							yyval.selector->pseudo_element = 0;
							yyval.selector->next = NULL;
						}
    break;
case 48:
#line 423 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 49:
#line 427 "css_syntax.y"
{ yyval.pseudo_class = PS_CLASS_LINK; }
    break;
case 50:
#line 428 "css_syntax.y"
{ yyval.pseudo_class = PS_CLASS_VISITED; }
    break;
case 51:
#line 429 "css_syntax.y"
{ yyval.pseudo_class = PS_CLASS_ACTIVE; }
    break;
case 52:
#line 433 "css_syntax.y"
{ yyval.pseudo_class = PS_CLASS_LINK; }
    break;
case 53:
#line 434 "css_syntax.y"
{ yyval.pseudo_class = PS_CLASS_VISITED; }
    break;
case 54:
#line 435 "css_syntax.y"
{ yyval.pseudo_class = PS_CLASS_ACTIVE; }
    break;
case 55:
#line 439 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 56:
#line 443 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 57:
#line 447 "css_syntax.y"
{ yyval.pseudo_element = PS_ELEMENT_FIRST_LETTER; }
    break;
case 58:
#line 448 "css_syntax.y"
{ yyval.pseudo_element = PS_ELEMENT_FIRST_LINE; }
    break;
case 59:
#line 452 "css_syntax.y"
{
					yyval.selector = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					yyval.selector->element_name = NULL;
					yyval.selector->id = NULL;
					yyval.selector->e_class = NULL;
					yyval.selector->pseudo_class = 0;
					yyval.selector->pseudo_element = PS_ELEMENT_FIRST_LETTER;
					yyval.selector->next = NULL;
				}
    break;
case 60:
#line 462 "css_syntax.y"
{
					yyval.selector = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					yyval.selector->element_name = NULL;
					yyval.selector->id = NULL;
					yyval.selector->e_class = NULL;
					yyval.selector->pseudo_class = 0;
					yyval.selector->pseudo_element = PS_ELEMENT_FIRST_LINE;
					yyval.selector->next = NULL;
				}
    break;
case 61:
#line 479 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 62:
#line 483 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 63:
#line 487 "css_syntax.y"
{
								yyval.property = (struct property_t*)
									malloc(sizeof(struct property_t));
								yyval.property->name = yyvsp[-3].lexeme;
								yyval.property->val = yyvsp[-1].lexeme;
								yyval.property->important = 1;
								yyval.property->count = 0;
								yyval.property->next = NULL;
							}
    break;
case 64:
#line 496 "css_syntax.y"
{
								yyval.property = (struct property_t*)
									malloc(sizeof(struct property_t));
								yyval.property->name = yyvsp[-2].lexeme;
								yyval.property->val = yyvsp[0].lexeme;
								yyval.property->important = 0;
								yyval.property->count = 0;
								yyval.property->next = NULL;
							}
    break;
case 65:
#line 505 "css_syntax.y"
{ yyval.property = NULL; }
    break;
case 66:
#line 506 "css_syntax.y"
{
								yyval.property = NULL;
							}
    break;
case 67:
#line 512 "css_syntax.y"
{ }
    break;
case 68:
#line 516 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 69:
#line 517 "css_syntax.y"
{
							char *s = (char*) malloc (strlen(yyvsp[-2].lexeme)+strlen(yyvsp[0].lexeme)+2);
							strcpy(s, yyvsp[-2].lexeme);
							s[strlen(s)+1] = 0;
							s[strlen(s)] = yyvsp[-1].letter;
							strcat(s, yyvsp[0].lexeme);
							free(yyvsp[-2].lexeme);
							free(yyvsp[0].lexeme);
							yyval.lexeme = s;
						}
    break;
case 70:
#line 527 "css_syntax.y"
{ yyval.lexeme = yyvsp[-1].lexeme; }
    break;
case 71:
#line 531 "css_syntax.y"
{
							char *s = (char*) malloc(strlen(yyvsp[0].lexeme)+2);
							s[0] = yyvsp[-1].letter;
							s[1] = 0;
							strcat(s, yyvsp[0].lexeme);
							free(yyvsp[0].lexeme);
							yyval.lexeme = s;
						}
    break;
case 72:
#line 539 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 73:
#line 543 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 74:
#line 544 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 75:
#line 545 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 76:
#line 546 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 77:
#line 547 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 78:
#line 548 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 79:
#line 549 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 80:
#line 550 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 81:
#line 551 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 82:
#line 552 "css_syntax.y"
{ yyval.lexeme = yyvsp[0].lexeme; }
    break;
case 83:
#line 560 "css_syntax.y"
{ 
			yyval.lexeme = (char*) malloc (strlen(yyvsp[0].lexeme)+2);
			sprintf(yyval.lexeme, "#%s", yyvsp[0].lexeme);
			free(yyvsp[0].lexeme);
		}
    break;
case 84:
#line 565 "css_syntax.y"
{ 
						yyval.lexeme = (char*) malloc (strlen(yyvsp[0].lexeme)+2);
						sprintf(yyval.lexeme, "#%s", yyvsp[0].lexeme);
						free(yyvsp[0].lexeme);
					}
    break;
}

#line 705 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

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

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 572 "css_syntax.y"


int yyerror(char *s) {
#if YYDEBUG
	fprintf(stderr, "Error: %s\n", s);
#endif
	return 0;
}

struct selector_list_t* css_parse(const char *buffer, int buf_len) {
	struct selector_list_t *ret = NULL;
	//yydebug = 1;
	init_yylex(buffer, buf_len);
	yyparse(&ret);
	end_yylex();
	return ret;
}
