/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 15 "css_syntax.y" /* yacc.c:1909  */

	char *lexeme;
	char letter;
	struct property_t *property;
	struct selector_t *selector;
	struct selector_list_t *selector_list;
	int pseudo_class;
	int pseudo_element;

#line 116 "css_syntax.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void *yyparam);

#endif /* !YY_YY_CSS_SYNTAX_H_INCLUDED  */
