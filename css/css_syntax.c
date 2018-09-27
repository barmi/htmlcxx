/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "css_syntax.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "css_lex.h"
#include "parser.h"

#define YYERROR_VERBOSE 1
//#define YYDEBUG 1


#line 77 "css_syntax.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_CSS_SYNTAX_H_INCLUDED
# define YY_YY_CSS_SYNTAX_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IMPORT_SYM = 258,
    IMPORTANT_SYM = 259,
    IDENT = 260,
    STRING = 261,
    NUMBER = 262,
    PERCENTAGE = 263,
    LENGTH = 264,
    EMS = 265,
    EXS = 266,
    LINK_PSCLASS_AFTER_IDENT = 267,
    VISITED_PSCLASS_AFTER_IDENT = 268,
    ACTIVE_PSCLASS_AFTER_IDENT = 269,
    FIRST_LINE_AFTER_IDENT = 270,
    FIRST_LETTER_AFTER_IDENT = 271,
    HASH_AFTER_IDENT = 272,
    CLASS_AFTER_IDENT = 273,
    LINK_PSCLASS = 274,
    VISITED_PSCLASS = 275,
    ACTIVE_PSCLASS = 276,
    FIRST_LINE = 277,
    FIRST_LETTER = 278,
    HASH = 279,
    CLASS = 280,
    URL = 281,
    RGB = 282,
    CDO = 283,
    CDC = 284,
    CSL = 285
  };
#endif
/* Tokens.  */
#define IMPORT_SYM 258
#define IMPORTANT_SYM 259
#define IDENT 260
#define STRING 261
#define NUMBER 262
#define PERCENTAGE 263
#define LENGTH 264
#define EMS 265
#define EXS 266
#define LINK_PSCLASS_AFTER_IDENT 267
#define VISITED_PSCLASS_AFTER_IDENT 268
#define ACTIVE_PSCLASS_AFTER_IDENT 269
#define FIRST_LINE_AFTER_IDENT 270
#define FIRST_LETTER_AFTER_IDENT 271
#define HASH_AFTER_IDENT 272
#define CLASS_AFTER_IDENT 273
#define LINK_PSCLASS 274
#define VISITED_PSCLASS 275
#define ACTIVE_PSCLASS 276
#define FIRST_LINE 277
#define FIRST_LETTER 278
#define HASH 279
#define CLASS 280
#define URL 281
#define RGB 282
#define CDO 283
#define CDC 284
#define CSL 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "css_syntax.y" /* yacc.c:355  */

	char *lexeme;
	char letter;
	struct property_t *property;
	struct selector_t *selector;
	struct selector_list_t *selector_list;
	int pseudo_class;
	int pseudo_element;

#line 187 "css_syntax.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void *yyparam);

#endif /* !YY_YY_CSS_SYNTAX_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 25 "css_syntax.y" /* yacc.c:358  */


int yylex(YYSTYPE *lvalp);

int yyerror(void *yyparam, const char *s) {
#if YYDEBUG
	fprintf(stderr, "Error: %s\n", s);
#endif
	return 0;
}


#line 215 "css_syntax.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   157

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  99

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   115,   127,   131,   132,   136,   137,   141,
     142,   143,   147,   151,   152,   176,   177,   181,   182,   183,
     187,   191,   207,   217,   232,   235,   246,   254,   262,   263,
     264,   265,   269,   270,   283,   293,   303,   313,   323,   333,
     343,   353,   363,   373,   383,   393,   403,   413,   423,   436,
     440,   441,   442,   446,   447,   448,   452,   456,   460,   461,
     465,   475,   492,   496,   500,   509,   518,   519,   525,   529,
     530,   540,   544,   552,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   573,   578
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT_SYM", "IMPORTANT_SYM", "IDENT",
  "STRING", "NUMBER", "PERCENTAGE", "LENGTH", "EMS", "EXS",
  "LINK_PSCLASS_AFTER_IDENT", "VISITED_PSCLASS_AFTER_IDENT",
  "ACTIVE_PSCLASS_AFTER_IDENT", "FIRST_LINE_AFTER_IDENT",
  "FIRST_LETTER_AFTER_IDENT", "HASH_AFTER_IDENT", "CLASS_AFTER_IDENT",
  "LINK_PSCLASS", "VISITED_PSCLASS", "ACTIVE_PSCLASS", "FIRST_LINE",
  "FIRST_LETTER", "HASH", "CLASS", "URL", "RGB", "CDO", "CDC", "CSL",
  "';'", "'-'", "'+'", "'/'", "','", "'{'", "'}'", "':'", "$accept",
  "stylesheet", "rulesets", "imports", "comments", "comment", "import",
  "string_or_url", "unary_operator", "operator", "property", "ruleset",
  "selectors", "declarations", "selector", "simple_selectors",
  "simple_selector", "element_name", "pseudo_class",
  "solitary_pseudo_class", "class", "solitary_class", "pseudo_element",
  "solitary_pseudo_element", "id", "solitary_id", "declaration", "prio",
  "expr", "term", "value", "hexcolor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    59,    45,    43,    47,    44,   123,   125,    58
};
# endif

#define YYPACT_NINF -37

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-37)))

#define YYTABLE_NINF -68

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,     2,    26,   -37,    -5,   -37,   -37,   -37,    86,   -37,
     -37,   -37,   -37,   -19,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -17,    13,   113,    38,   132,
     -37,    80,   -37,   139,    26,   -37,    45,    10,   -37,    95,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,    80,   139,   -37,   -37,    80,   -37,   -37,   -37,   -37,
     -21,   -15,    -7,   -37,   -37,   -37,    80,   -37,    71,   -37,
      10,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   116,    -1,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,    71,   -37,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     6,     1,     0,     9,    10,    11,     0,     7,
       8,    13,    14,     0,    31,    49,    53,    54,    55,    61,
      60,    63,    57,     2,     8,     0,     0,    28,    32,    41,
      48,    47,    29,    45,     6,    12,     0,     0,    30,     0,
      59,    58,    26,    27,    33,    50,    51,    52,    62,    56,
      40,    39,    38,    46,    44,    43,     5,     3,    66,    20,
       0,     0,    24,    23,    36,    35,    37,    42,     0,    21,
       0,    34,    80,    75,    74,    76,    77,    78,    79,    85,
      84,    82,    83,    15,    16,     0,     0,    69,    73,    81,
      25,    72,    71,    68,    17,    18,     0,    64,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -37,   -37,    -8,     1,     3,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,    -2,   -30,   -37,    16,   -37,   -37,   -13,   -37,
      19,   -37,   -37,    24,   -37,   -37,   -37,   -37,   -37,   -36,
     -24,   -37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    23,     8,     2,     9,    10,    13,    85,    96,
      60,    24,    25,    61,    26,    27,    28,    29,    50,    30,
      51,    31,    42,    32,    52,    33,    62,    97,    86,    87,
      88,    89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      92,    11,     3,    93,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,    58,    35,    34,    38,    59,   -19,    68,    53,    37,
      54,    12,    69,   -19,    70,   -19,   -19,    36,    57,     4,
     -65,   -19,   -19,    94,    95,    56,   -65,    63,    64,    65,
      90,   -67,    67,    15,    44,    -4,    14,   -67,    39,   -22,
      15,    43,    55,    71,     5,     6,     7,    16,    17,    18,
      98,    91,    21,    22,    16,    17,    18,    19,    20,    21,
      22,    66,     0,     5,     6,     7,    72,    73,    74,    75,
      76,    77,    78,     0,     0,     0,    -4,    14,    79,     0,
       0,    15,    45,    46,    47,    80,    14,    81,    82,     0,
      15,     0,     0,    83,    84,    16,    17,    18,    19,    20,
      21,    22,     0,     0,    16,    17,    18,    19,    20,    21,
      22,    72,    73,    74,    75,    76,    77,    78,    40,    41,
       0,     0,     0,    79,     0,    19,    20,     0,     0,     0,
      80,     0,    81,    82,    45,    46,    47,     0,     0,    48,
      49,    45,    46,    47,     0,     0,     0,    49
};

static const yytype_int8 yycheck[] =
{
       1,     6,     0,     4,     5,     6,     7,     8,     9,    10,
      11,     1,    31,    10,     1,     5,    17,    38,    31,    36,
      33,    26,    37,    24,    31,    26,    27,    24,    36,     3,
      31,    32,    33,    34,    35,    34,    37,    39,    51,    52,
      70,    31,    55,     5,    28,     0,     1,    37,    35,    36,
       5,    27,    33,    66,    28,    29,    30,    19,    20,    21,
      96,    85,    24,    25,    19,    20,    21,    22,    23,    24,
      25,    52,    -1,    28,    29,    30,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,     0,     1,    17,    -1,
      -1,     5,    12,    13,    14,    24,     1,    26,    27,    -1,
       5,    -1,    -1,    32,    33,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,     5,     6,     7,     8,     9,    10,    11,    15,    16,
      -1,    -1,    -1,    17,    -1,    22,    23,    -1,    -1,    -1,
      24,    -1,    26,    27,    12,    13,    14,    -1,    -1,    17,
      18,    12,    13,    14,    -1,    -1,    -1,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    43,     0,     3,    28,    29,    30,    42,    44,
      45,     6,    26,    46,     1,     5,    19,    20,    21,    22,
      23,    24,    25,    41,    50,    51,    53,    54,    55,    56,
      58,    60,    62,    64,    43,    31,    43,    36,     1,    35,
      15,    16,    61,    62,    54,    12,    13,    14,    17,    18,
      57,    59,    63,    57,    57,    59,    42,    41,     1,     5,
      49,    52,    65,    51,    57,    57,    59,    57,    38,    37,
      31,    57,     5,     6,     7,     8,     9,    10,    11,    17,
      24,    26,    27,    32,    33,    47,    67,    68,    69,    70,
      52,    69,     1,     4,    34,    35,    48,    66,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    43,    44,
      44,    44,    45,    46,    46,    47,    47,    48,    48,    48,
      49,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      57,    57,    57,    58,    58,    58,    59,    60,    61,    61,
      62,    62,    63,    64,    65,    65,    65,    65,    66,    67,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     0,     2,     0,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     0,
       1,     4,     1,     3,     1,     3,     2,     2,     1,     1,
       2,     1,     1,     2,     4,     3,     3,     3,     2,     2,
       2,     1,     3,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     0,     1,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (yyparam, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, yyparam); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *yyparam)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yyparam);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *yyparam)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyparam);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, void *yyparam)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , yyparam);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, yyparam); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *yyparam)
{
  YYUSE (yyvaluep);
  YYUSE (yyparam);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *yyparam)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 109 "css_syntax.y" /* yacc.c:1646  */
    {
						*(struct selector_list_t**) yyparam = (yyvsp[0].selector_list);
					}
#line 1394 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 3:
#line 115 "css_syntax.y" /* yacc.c:1646  */
    {
								struct selector_list_t *pos = (yyvsp[-2].selector_list);
								if (pos != NULL) {
									while (pos->next != NULL) {
										pos = pos->next;
									}
									pos->next = (yyvsp[0].selector_list);
								} else {
									(yyvsp[-2].selector_list) = (yyvsp[0].selector_list);
								}
								(yyval.selector_list) = (yyvsp[-2].selector_list);
							}
#line 1411 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 4:
#line 127 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector_list) = NULL;  }
#line 1417 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 13:
#line 151 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1423 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 14:
#line 152 "css_syntax.y" /* yacc.c:1646  */
    {
			char *begin = (yyvsp[0].lexeme);
			char *end = (yyvsp[0].lexeme) + strlen((yyvsp[0].lexeme));

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

			(yyval.lexeme) = strdup(begin);
			free((yyvsp[0].lexeme));
		}
#line 1449 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 15:
#line 176 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = '-'; }
#line 1455 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 16:
#line 177 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = '+'; }
#line 1461 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 17:
#line 181 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = '/'; }
#line 1467 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 18:
#line 182 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = ','; }
#line 1473 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 19:
#line 183 "css_syntax.y" /* yacc.c:1646  */
    {(yyval.letter) = ' '; }
#line 1479 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 20:
#line 187 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1485 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 21:
#line 191 "css_syntax.y" /* yacc.c:1646  */
    {
										struct selector_list_t *pos = (yyvsp[-3].selector_list);
										while (pos != NULL) {
											struct property_t *i = (yyvsp[-1].property);
											while (i != NULL) {
												i->count++;
												i = i->next;
											}
											pos->selector->property = (yyvsp[-1].property);
											pos = pos->next;
										}
										(yyval.selector_list) = (yyvsp[-3].selector_list);
									}
#line 1503 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 22:
#line 207 "css_syntax.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].selector) != NULL) {
					(yyval.selector_list) = (struct selector_list_t*)
						malloc (sizeof(struct selector_list_t));
					(yyval.selector_list)->selector = (yyvsp[0].selector);
					(yyval.selector_list)->next = NULL;
				} else {
					(yyval.selector_list) = NULL;
				}
			}
#line 1518 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 23:
#line 217 "css_syntax.y" /* yacc.c:1646  */
    {
								if ((yyvsp[-2].selector) != NULL) {
									struct selector_list_t *new;
									new = (struct selector_list_t*)
										malloc (sizeof(struct selector_list_t));
									new->selector = (yyvsp[-2].selector);
									new->next = (yyvsp[0].selector_list);
									(yyval.selector_list) = new;
								} else {
									(yyval.selector_list) = (yyvsp[0].selector_list);
								}
							}
#line 1535 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 24:
#line 232 "css_syntax.y" /* yacc.c:1646  */
    {
									(yyval.property) = (yyvsp[0].property);
								}
#line 1543 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 25:
#line 235 "css_syntax.y" /* yacc.c:1646  */
    {
									if ((yyvsp[-2].property) != NULL) {
										(yyvsp[-2].property)->next = (yyvsp[0].property);
										(yyval.property) = (yyvsp[-2].property);
									} else {
										(yyval.property) = (yyvsp[0].property);
									}
								}
#line 1556 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 26:
#line 246 "css_syntax.y" /* yacc.c:1646  */
    {
										struct selector_t *pos = (yyvsp[-1].selector);
										while (pos->next != NULL) {
											pos = pos->next;
										}
										pos->pseudo_element = (yyvsp[0].pseudo_element);
										(yyval.selector) = (yyvsp[-1].selector);
									}
#line 1569 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 27:
#line 254 "css_syntax.y" /* yacc.c:1646  */
    {
												struct selector_t *pos = (yyvsp[-1].selector);
												while (pos->next != NULL) {
													pos = pos->next;
												}
												pos->next = (yyvsp[0].selector);
												(yyval.selector) = (yyvsp[-1].selector);
											}
#line 1582 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 28:
#line 262 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = (yyvsp[0].selector); }
#line 1588 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = (yyvsp[0].selector); }
#line 1594 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 30:
#line 264 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = NULL; }
#line 1600 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 31:
#line 265 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = NULL; }
#line 1606 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 32:
#line 269 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = (yyvsp[0].selector); }
#line 1612 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 33:
#line 270 "css_syntax.y" /* yacc.c:1646  */
    {
										(yyvsp[-1].selector)->next = (yyvsp[0].selector);
										(yyval.selector) = (yyvsp[-1].selector);
									}
#line 1621 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 34:
#line 283 "css_syntax.y" /* yacc.c:1646  */
    {
										(yyval.selector) = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										(yyval.selector)->element_name = (yyvsp[-3].lexeme);
										(yyval.selector)->id = (yyvsp[-2].lexeme);
										(yyval.selector)->e_class = (yyvsp[-1].lexeme);
										(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
										(yyval.selector)->pseudo_element = 0;
										(yyval.selector)->next = NULL;
									 }
#line 1636 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 35:
#line 293 "css_syntax.y" /* yacc.c:1646  */
    {
									(yyval.selector) = (struct selector_t*)
										malloc(sizeof(struct selector_t));
									(yyval.selector)->element_name = (yyvsp[-2].lexeme);
									(yyval.selector)->id = (yyvsp[-1].lexeme);
									(yyval.selector)->e_class = NULL;
									(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
									(yyval.selector)->pseudo_element = 0;
									(yyval.selector)->next = NULL;
								}
#line 1651 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 36:
#line 303 "css_syntax.y" /* yacc.c:1646  */
    {
										(yyval.selector) = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										(yyval.selector)->element_name = (yyvsp[-2].lexeme);
										(yyval.selector)->id = NULL;
										(yyval.selector)->e_class = (yyvsp[-1].lexeme);
										(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
										(yyval.selector)->pseudo_element = 0;
										(yyval.selector)->next = NULL;
									}
#line 1666 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 37:
#line 313 "css_syntax.y" /* yacc.c:1646  */
    {
							(yyval.selector) = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							(yyval.selector)->element_name = (yyvsp[-2].lexeme);
							(yyval.selector)->id = (yyvsp[-1].lexeme);
							(yyval.selector)->e_class = (yyvsp[0].lexeme);
							(yyval.selector)->pseudo_class = 0;
							(yyval.selector)->pseudo_element = 0;
							(yyval.selector)->next = NULL;
						}
#line 1681 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 38:
#line 323 "css_syntax.y" /* yacc.c:1646  */
    {
						(yyval.selector) = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						(yyval.selector)->element_name = (yyvsp[-1].lexeme);
						(yyval.selector)->id = (yyvsp[0].lexeme);
						(yyval.selector)->e_class = NULL;
						(yyval.selector)->pseudo_class = 0;
						(yyval.selector)->pseudo_element = 0;
						(yyval.selector)->next = NULL;
					}
#line 1696 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 39:
#line 333 "css_syntax.y" /* yacc.c:1646  */
    {
							(yyval.selector) = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							(yyval.selector)->element_name = (yyvsp[-1].lexeme);
							(yyval.selector)->id = NULL;
							(yyval.selector)->e_class = (yyvsp[0].lexeme);
							(yyval.selector)->pseudo_class = 0;
							(yyval.selector)->pseudo_element = 0;
							(yyval.selector)->next = NULL;
						}
#line 1711 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 40:
#line 343 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.selector) = (struct selector_t*)
									malloc(sizeof(struct selector_t));
								(yyval.selector)->element_name = (yyvsp[-1].lexeme);
								(yyval.selector)->id = NULL;
								(yyval.selector)->e_class = NULL;
								(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
								(yyval.selector)->pseudo_element = 0;
								(yyval.selector)->next = NULL;
							}
#line 1726 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 41:
#line 353 "css_syntax.y" /* yacc.c:1646  */
    {
					(yyval.selector) = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					(yyval.selector)->element_name = (yyvsp[0].lexeme);
					(yyval.selector)->id = NULL;
					(yyval.selector)->e_class = NULL;
					(yyval.selector)->pseudo_class = 0;
					(yyval.selector)->pseudo_element = 0;
					(yyval.selector)->next = NULL;
				}
#line 1741 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 42:
#line 363 "css_syntax.y" /* yacc.c:1646  */
    {
										(yyval.selector) = (struct selector_t*)
											malloc(sizeof(struct selector_t));
										(yyval.selector)->element_name = NULL;
										(yyval.selector)->id = (yyvsp[-2].lexeme);
										(yyval.selector)->e_class = (yyvsp[-1].lexeme);
										(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
										(yyval.selector)->pseudo_element = 0;
										(yyval.selector)->next = NULL;
									}
#line 1756 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 43:
#line 373 "css_syntax.y" /* yacc.c:1646  */
    {
						(yyval.selector) = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						(yyval.selector)->element_name = NULL;
						(yyval.selector)->id = (yyvsp[-1].lexeme);
						(yyval.selector)->e_class = (yyvsp[0].lexeme);
						(yyval.selector)->pseudo_class = 0;
						(yyval.selector)->pseudo_element = 0;
						(yyval.selector)->next = NULL;
					}
#line 1771 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 44:
#line 383 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.selector) = (struct selector_t*)
									malloc(sizeof(struct selector_t));
								(yyval.selector)->element_name = NULL;
								(yyval.selector)->id = (yyvsp[-1].lexeme);
								(yyval.selector)->e_class = NULL;
								(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
								(yyval.selector)->pseudo_element = 0;
								(yyval.selector)->next = NULL;
							}
#line 1786 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 45:
#line 393 "css_syntax.y" /* yacc.c:1646  */
    {
					(yyval.selector) = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					(yyval.selector)->element_name = NULL;
					(yyval.selector)->id = (yyvsp[0].lexeme);
					(yyval.selector)->e_class = NULL;
					(yyval.selector)->pseudo_class = 0;
					(yyval.selector)->pseudo_element = 0;
					(yyval.selector)->next = NULL;
				}
#line 1801 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 46:
#line 403 "css_syntax.y" /* yacc.c:1646  */
    {
									(yyval.selector) = (struct selector_t*)
										malloc(sizeof(struct selector_t));
									(yyval.selector)->element_name = NULL;
									(yyval.selector)->id = NULL;
									(yyval.selector)->e_class = (yyvsp[-1].lexeme);
									(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
									(yyval.selector)->pseudo_element = 0;
									(yyval.selector)->next = NULL;
								}
#line 1816 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 47:
#line 413 "css_syntax.y" /* yacc.c:1646  */
    {
						(yyval.selector) = (struct selector_t*)
							malloc(sizeof(struct selector_t));
						(yyval.selector)->element_name = NULL;
						(yyval.selector)->id = NULL;
						(yyval.selector)->e_class = (yyvsp[0].lexeme);
						(yyval.selector)->pseudo_class = 0;
						(yyval.selector)->pseudo_element = 0;
						(yyval.selector)->next = NULL;
					}
#line 1831 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 48:
#line 423 "css_syntax.y" /* yacc.c:1646  */
    {
							(yyval.selector) = (struct selector_t*)
								malloc(sizeof(struct selector_t));
							(yyval.selector)->element_name = NULL;
							(yyval.selector)->id = NULL;
							(yyval.selector)->e_class = NULL;
							(yyval.selector)->pseudo_class = (yyvsp[0].pseudo_class);
							(yyval.selector)->pseudo_element = 0;
							(yyval.selector)->next = NULL;
						}
#line 1846 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 49:
#line 436 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1852 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 50:
#line 440 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS_LINK; }
#line 1858 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 51:
#line 441 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS_VISITED; }
#line 1864 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 52:
#line 442 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS_ACTIVE; }
#line 1870 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 53:
#line 446 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS_LINK; }
#line 1876 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 54:
#line 447 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS_VISITED; }
#line 1882 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 55:
#line 448 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS_ACTIVE; }
#line 1888 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 56:
#line 452 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1894 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 57:
#line 456 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1900 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 58:
#line 460 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_element) = PS_ELEMENT_FIRST_LETTER; }
#line 1906 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 59:
#line 461 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_element) = PS_ELEMENT_FIRST_LINE; }
#line 1912 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 60:
#line 465 "css_syntax.y" /* yacc.c:1646  */
    {
					(yyval.selector) = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					(yyval.selector)->element_name = NULL;
					(yyval.selector)->id = NULL;
					(yyval.selector)->e_class = NULL;
					(yyval.selector)->pseudo_class = 0;
					(yyval.selector)->pseudo_element = PS_ELEMENT_FIRST_LETTER;
					(yyval.selector)->next = NULL;
				}
#line 1927 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 61:
#line 475 "css_syntax.y" /* yacc.c:1646  */
    {
					(yyval.selector) = (struct selector_t*)
						malloc(sizeof(struct selector_t));
					(yyval.selector)->element_name = NULL;
					(yyval.selector)->id = NULL;
					(yyval.selector)->e_class = NULL;
					(yyval.selector)->pseudo_class = 0;
					(yyval.selector)->pseudo_element = PS_ELEMENT_FIRST_LINE;
					(yyval.selector)->next = NULL;
				}
#line 1942 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 62:
#line 492 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1948 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 63:
#line 496 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1954 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 64:
#line 500 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.property) = (struct property_t*)
									malloc(sizeof(struct property_t));
								(yyval.property)->name = (yyvsp[-3].lexeme);
								(yyval.property)->val = (yyvsp[-1].lexeme);
								(yyval.property)->important = 1;
								(yyval.property)->count = 0;
								(yyval.property)->next = NULL;
							}
#line 1968 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 65:
#line 509 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.property) = (struct property_t*)
									malloc(sizeof(struct property_t));
								(yyval.property)->name = (yyvsp[-2].lexeme);
								(yyval.property)->val = (yyvsp[0].lexeme);
								(yyval.property)->important = 0;
								(yyval.property)->count = 0;
								(yyval.property)->next = NULL;
							}
#line 1982 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 66:
#line 518 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.property) = NULL; }
#line 1988 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 67:
#line 519 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.property) = NULL;
							}
#line 1996 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 68:
#line 525 "css_syntax.y" /* yacc.c:1646  */
    { }
#line 2002 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 69:
#line 529 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2008 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 70:
#line 530 "css_syntax.y" /* yacc.c:1646  */
    {
							char *s = (char*) malloc (strlen((yyvsp[-2].lexeme))+strlen((yyvsp[0].lexeme))+2);
							strcpy(s, (yyvsp[-2].lexeme));
							s[strlen(s)+1] = 0;
							s[strlen(s)] = (yyvsp[-1].letter);
							strcat(s, (yyvsp[0].lexeme));
							free((yyvsp[-2].lexeme));
							free((yyvsp[0].lexeme));
							(yyval.lexeme) = s;
						}
#line 2023 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 71:
#line 540 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[-1].lexeme); }
#line 2029 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 72:
#line 544 "css_syntax.y" /* yacc.c:1646  */
    {
							char *s = (char*) malloc(strlen((yyvsp[0].lexeme))+2);
							s[0] = (yyvsp[-1].letter);
							s[1] = 0;
							strcat(s, (yyvsp[0].lexeme));
							free((yyvsp[0].lexeme));
							(yyval.lexeme) = s;
						}
#line 2042 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 73:
#line 552 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2048 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 74:
#line 556 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2054 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 75:
#line 557 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2060 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 76:
#line 558 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2066 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 77:
#line 559 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2072 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 78:
#line 560 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2078 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 79:
#line 561 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2084 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 80:
#line 562 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2090 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 81:
#line 563 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2096 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 82:
#line 564 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2102 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 83:
#line 565 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 2108 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 84:
#line 573 "css_syntax.y" /* yacc.c:1646  */
    { 
			(yyval.lexeme) = (char*) malloc (strlen((yyvsp[0].lexeme))+2);
			sprintf((yyval.lexeme), "#%s", (yyvsp[0].lexeme));
			free((yyvsp[0].lexeme));
		}
#line 2118 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 85:
#line 578 "css_syntax.y" /* yacc.c:1646  */
    { 
						(yyval.lexeme) = (char*) malloc (strlen((yyvsp[0].lexeme))+2);
						sprintf((yyval.lexeme), "#%s", (yyvsp[0].lexeme));
						free((yyvsp[0].lexeme));
					}
#line 2128 "css_syntax.c" /* yacc.c:1646  */
    break;


#line 2132 "css_syntax.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (yyparam, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yyparam, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval, yyparam);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp, yyparam);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (yyparam, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, yyparam);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yyparam);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 585 "css_syntax.y" /* yacc.c:1906  */


struct selector_list_t* css_parse(const char *buffer, int buf_len) {
	struct selector_list_t *ret = NULL;
	//yydebug = 1;
	init_yylex(buffer, buf_len);
	yyparse(&ret);
	end_yylex();
	return ret;
}
