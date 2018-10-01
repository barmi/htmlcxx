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
#define YYDEBUG 1


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
    PSCLASS_AFTER_IDENT = 267,
    HASH_AFTER_IDENT = 268,
    CLASS_AFTER_IDENT = 269,
    PSCLASS = 270,
    VISITED_PSCLASS = 271,
    ACTIVE_PSCLASS = 272,
    FIRST_LINE = 273,
    FIRST_LETTER = 274,
    HASH = 275,
    CLASS = 276,
    URL = 277,
    RGB = 278,
    CDO = 279,
    CDC = 280,
    CSL = 281
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
#define PSCLASS_AFTER_IDENT 267
#define HASH_AFTER_IDENT 268
#define CLASS_AFTER_IDENT 269
#define PSCLASS 270
#define VISITED_PSCLASS 271
#define ACTIVE_PSCLASS 272
#define FIRST_LINE 273
#define FIRST_LETTER 274
#define HASH 275
#define CLASS 276
#define URL 277
#define RGB 278
#define CDO 279
#define CDC 280
#define CSL 281

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

#line 179 "css_syntax.c" /* yacc.c:355  */
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


#line 207 "css_syntax.c" /* yacc.c:358  */

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
#define YYLAST   121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  90

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

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
       2,     2,     2,    29,    31,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,    27,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   109,   121,   125,   126,   130,   131,   135,
     136,   137,   141,   145,   146,   170,   171,   175,   176,   177,
     181,   185,   201,   211,   226,   229,   240,   241,   242,   246,
     247,   260,   270,   280,   290,   300,   310,   320,   330,   340,
     350,   360,   370,   380,   390,   400,   413,   417,   421,   425,
     429,   437,   441,   445,   454,   463,   464,   470,   474,   475,
     485,   489,   497,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   518,   523
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT_SYM", "IMPORTANT_SYM", "IDENT",
  "STRING", "NUMBER", "PERCENTAGE", "LENGTH", "EMS", "EXS",
  "PSCLASS_AFTER_IDENT", "HASH_AFTER_IDENT", "CLASS_AFTER_IDENT",
  "PSCLASS", "VISITED_PSCLASS", "ACTIVE_PSCLASS", "FIRST_LINE",
  "FIRST_LETTER", "HASH", "CLASS", "URL", "RGB", "CDO", "CDC", "CSL",
  "';'", "'-'", "'+'", "'/'", "','", "'{'", "'}'", "':'", "$accept",
  "stylesheet", "rulesets", "imports", "comments", "comment", "import",
  "string_or_url", "unary_operator", "operator", "property", "ruleset",
  "selectors", "declarations", "selector", "simple_selectors",
  "simple_selector", "element_name", "pseudo_class",
  "solitary_pseudo_class", "class", "solitary_class", "id", "solitary_id",
  "declaration", "prio", "expr", "term", "value", "hexcolor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    59,    45,    43,
      47,    44,   123,   125,    58
};
# endif

#define YYPACT_NINF -25

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-25)))

#define YYTABLE_NINF -57

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -25,    11,    28,   -25,    34,   -25,   -25,   -25,     2,   -25,
     -25,   -25,   -25,   -14,   -25,   -25,   -25,   -25,    12,   -25,
     -25,   -16,    32,   -25,    54,     1,   -25,   -15,    -5,    28,
     -25,   -25,     0,     5,   -25,     7,   -25,   -25,   -25,    25,
     -25,   -15,    -5,   -25,   -25,   -15,   -25,   -25,   -25,   -25,
       3,    17,    30,   -25,   -25,   -25,   -25,   -15,   -25,    71,
     -25,     5,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,    98,    38,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,    71,   -25,   -25
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     6,     1,     0,     9,    10,    11,     0,     7,
       8,    13,    14,     0,    28,    46,    52,    50,     0,     2,
       8,     0,     0,    26,    29,    38,    45,    44,    42,     6,
      12,    48,     0,     0,    27,     0,    30,    51,    49,     0,
      37,    36,    35,    43,    41,    40,     5,     3,    55,    20,
       0,     0,    24,    23,    47,    33,    32,    34,    39,     0,
      21,     0,    31,    69,    64,    63,    65,    66,    67,    68,
      74,    73,    71,    72,    15,    16,     0,     0,    58,    62,
      70,    25,    61,    60,    57,    17,    18,     0,    53,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,    23,    33,    75,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,    35,    22,   -25,    65,   -25,   -25,    45,   -25,
     -24,   -25,   -25,   -25,   -25,   -25,   -25,     9,    16,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    19,     8,     2,     9,    10,    13,    76,    87,
      50,    20,    21,    51,    22,    23,    24,    25,    40,    26,
      41,    27,    42,    28,    52,    88,    77,    78,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      -4,    14,    -4,    14,    45,    15,    48,    15,    14,    38,
      49,     3,    15,    30,    37,    38,    33,    31,    57,    39,
      16,    17,    16,    17,     5,     6,     7,    16,    17,    39,
      54,     4,   -56,    34,    18,    39,    18,    59,   -56,    83,
      11,    18,    84,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
      60,   -19,     5,     6,     7,    47,    12,    61,   -19,    15,
     -19,   -19,    46,    35,   -22,   -54,   -19,   -19,    85,    86,
      53,   -54,    43,    44,    16,    17,    63,    64,    65,    66,
      67,    68,    69,    81,    70,    29,    55,    56,    18,    36,
      58,    71,    82,    72,    73,    32,    89,     0,     0,    74,
      75,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    70,     0,     0,     0,     0,     0,     0,    71,     0,
      72,    73
};

static const yytype_int8 yycheck[] =
{
       0,     1,     0,     1,    28,     5,     1,     5,     1,    14,
       5,     0,     5,    27,    13,    14,    32,     5,    42,    34,
      20,    21,    20,    21,    24,    25,    26,    20,    21,    34,
       5,     3,    27,     1,    34,    34,    34,    34,    33,     1,
       6,    34,     4,     5,     6,     7,     8,     9,    10,    11,
      33,    13,    24,    25,    26,    32,    22,    27,    20,     5,
      22,    23,    29,    31,    32,    27,    28,    29,    30,    31,
      35,    33,    27,    28,    20,    21,     5,     6,     7,     8,
       9,    10,    11,    61,    13,    10,    41,    42,    34,    24,
      45,    20,    76,    22,    23,    20,    87,    -1,    -1,    28,
      29,    -1,    57,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    39,     0,     3,    24,    25,    26,    38,    40,
      41,     6,    22,    42,     1,     5,    20,    21,    34,    37,
      46,    47,    49,    50,    51,    52,    54,    56,    58,    39,
      27,     5,    39,    32,     1,    31,    50,    13,    14,    34,
      53,    55,    57,    53,    53,    55,    38,    37,     1,     5,
      45,    48,    59,    47,     5,    53,    53,    55,    53,    34,
      33,    27,    53,     5,     6,     7,     8,     9,    10,    11,
      13,    20,    22,    23,    28,    29,    43,    61,    62,    63,
      64,    48,    63,     1,     4,    30,    31,    44,    60,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    39,    40,
      40,    40,    41,    42,    42,    43,    43,    44,    44,    44,
      45,    46,    47,    47,    48,    48,    49,    49,    49,    50,
      50,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    59,    59,    59,    60,    61,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     0,     2,     0,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     0,
       1,     4,     1,     3,     1,     3,     1,     2,     1,     1,
       2,     4,     3,     3,     3,     2,     2,     2,     1,     3,
       2,     2,     1,     2,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     4,     3,     1,     0,     1,     1,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 103 "css_syntax.y" /* yacc.c:1646  */
    {
						*(struct selector_list_t**) yyparam = (yyvsp[0].selector_list);
					}
#line 1369 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "css_syntax.y" /* yacc.c:1646  */
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
#line 1386 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 4:
#line 121 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector_list) = NULL;  }
#line 1392 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 13:
#line 145 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1398 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 14:
#line 146 "css_syntax.y" /* yacc.c:1646  */
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
#line 1424 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = '-'; }
#line 1430 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 16:
#line 171 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = '+'; }
#line 1436 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 17:
#line 175 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = '/'; }
#line 1442 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 18:
#line 176 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.letter) = ','; }
#line 1448 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 19:
#line 177 "css_syntax.y" /* yacc.c:1646  */
    {(yyval.letter) = ' '; }
#line 1454 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 20:
#line 181 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1460 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 21:
#line 185 "css_syntax.y" /* yacc.c:1646  */
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
#line 1478 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 22:
#line 201 "css_syntax.y" /* yacc.c:1646  */
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
#line 1493 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "css_syntax.y" /* yacc.c:1646  */
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
#line 1510 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 24:
#line 226 "css_syntax.y" /* yacc.c:1646  */
    {
									(yyval.property) = (yyvsp[0].property);
								}
#line 1518 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 25:
#line 229 "css_syntax.y" /* yacc.c:1646  */
    {
									if ((yyvsp[-2].property) != NULL) {
										(yyvsp[-2].property)->next = (yyvsp[0].property);
										(yyval.property) = (yyvsp[-2].property);
									} else {
										(yyval.property) = (yyvsp[0].property);
									}
								}
#line 1531 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 26:
#line 240 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = (yyvsp[0].selector); }
#line 1537 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 27:
#line 241 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = NULL; }
#line 1543 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 28:
#line 242 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = NULL; }
#line 1549 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 29:
#line 246 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.selector) = (yyvsp[0].selector); }
#line 1555 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 30:
#line 247 "css_syntax.y" /* yacc.c:1646  */
    {
										(yyvsp[-1].selector)->next = (yyvsp[0].selector);
										(yyval.selector) = (yyvsp[-1].selector);
									}
#line 1564 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 31:
#line 260 "css_syntax.y" /* yacc.c:1646  */
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
#line 1579 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 32:
#line 270 "css_syntax.y" /* yacc.c:1646  */
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
#line 1594 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 33:
#line 280 "css_syntax.y" /* yacc.c:1646  */
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
#line 1609 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 34:
#line 290 "css_syntax.y" /* yacc.c:1646  */
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
#line 1624 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 35:
#line 300 "css_syntax.y" /* yacc.c:1646  */
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
#line 1639 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 36:
#line 310 "css_syntax.y" /* yacc.c:1646  */
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
#line 1654 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 37:
#line 320 "css_syntax.y" /* yacc.c:1646  */
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
#line 1669 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 38:
#line 330 "css_syntax.y" /* yacc.c:1646  */
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
#line 1684 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 39:
#line 340 "css_syntax.y" /* yacc.c:1646  */
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
#line 1699 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 40:
#line 350 "css_syntax.y" /* yacc.c:1646  */
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
#line 1714 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 41:
#line 360 "css_syntax.y" /* yacc.c:1646  */
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
#line 1729 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 42:
#line 370 "css_syntax.y" /* yacc.c:1646  */
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
#line 1744 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 43:
#line 380 "css_syntax.y" /* yacc.c:1646  */
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
#line 1759 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 44:
#line 390 "css_syntax.y" /* yacc.c:1646  */
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
#line 1774 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 45:
#line 400 "css_syntax.y" /* yacc.c:1646  */
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
#line 1789 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 46:
#line 413 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1795 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 47:
#line 417 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS; }
#line 1801 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 48:
#line 421 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.pseudo_class) = PS_CLASS; }
#line 1807 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 49:
#line 425 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1813 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 50:
#line 429 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1819 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 51:
#line 437 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1825 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 52:
#line 441 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1831 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 53:
#line 445 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.property) = (struct property_t*)
									malloc(sizeof(struct property_t));
								(yyval.property)->name = (yyvsp[-3].lexeme);
								(yyval.property)->val = (yyvsp[-1].lexeme);
								(yyval.property)->important = 1;
								(yyval.property)->count = 0;
								(yyval.property)->next = NULL;
							}
#line 1845 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 54:
#line 454 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.property) = (struct property_t*)
									malloc(sizeof(struct property_t));
								(yyval.property)->name = (yyvsp[-2].lexeme);
								(yyval.property)->val = (yyvsp[0].lexeme);
								(yyval.property)->important = 0;
								(yyval.property)->count = 0;
								(yyval.property)->next = NULL;
							}
#line 1859 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 55:
#line 463 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.property) = NULL; }
#line 1865 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 56:
#line 464 "css_syntax.y" /* yacc.c:1646  */
    {
								(yyval.property) = NULL;
							}
#line 1873 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 57:
#line 470 "css_syntax.y" /* yacc.c:1646  */
    { }
#line 1879 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 58:
#line 474 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1885 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 59:
#line 475 "css_syntax.y" /* yacc.c:1646  */
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
#line 1900 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 60:
#line 485 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[-1].lexeme); }
#line 1906 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 61:
#line 489 "css_syntax.y" /* yacc.c:1646  */
    {
							char *s = (char*) malloc(strlen((yyvsp[0].lexeme))+2);
							s[0] = (yyvsp[-1].letter);
							s[1] = 0;
							strcat(s, (yyvsp[0].lexeme));
							free((yyvsp[0].lexeme));
							(yyval.lexeme) = s;
						}
#line 1919 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 62:
#line 497 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1925 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 63:
#line 501 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1931 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 64:
#line 502 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1937 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 65:
#line 503 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1943 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 66:
#line 504 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1949 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 67:
#line 505 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1955 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 68:
#line 506 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1961 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 69:
#line 507 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1967 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 70:
#line 508 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1973 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 71:
#line 509 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1979 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 72:
#line 510 "css_syntax.y" /* yacc.c:1646  */
    { (yyval.lexeme) = (yyvsp[0].lexeme); }
#line 1985 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 73:
#line 518 "css_syntax.y" /* yacc.c:1646  */
    { 
			(yyval.lexeme) = (char*) malloc (strlen((yyvsp[0].lexeme))+2);
			sprintf((yyval.lexeme), "#%s", (yyvsp[0].lexeme));
			free((yyvsp[0].lexeme));
		}
#line 1995 "css_syntax.c" /* yacc.c:1646  */
    break;

  case 74:
#line 523 "css_syntax.y" /* yacc.c:1646  */
    { 
						(yyval.lexeme) = (char*) malloc (strlen((yyvsp[0].lexeme))+2);
						sprintf((yyval.lexeme), "#%s", (yyvsp[0].lexeme));
						free((yyvsp[0].lexeme));
					}
#line 2005 "css_syntax.c" /* yacc.c:1646  */
    break;


#line 2009 "css_syntax.c" /* yacc.c:1646  */
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
#line 530 "css_syntax.y" /* yacc.c:1906  */


struct selector_list_t* css_parse(const char *buffer, int buf_len) {
	struct selector_list_t *ret = NULL;
	//yydebug = 1;
	init_yylex(buffer, buf_len);
	yyparse(&ret);
	end_yylex();
	return ret;
}
