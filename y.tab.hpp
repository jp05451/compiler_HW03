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

#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
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
    REAL = 258,
    INT = 259,
    STRING = 260,
    BOOL = 261,
    TRUE = 262,
    FALSE = 263,
    INT_NUMBER = 264,
    REAL_NUMBER = 265,
    STR = 266,
    ID = 267,
    ARRAY = 268,
    BEG = 269,
    CHAR = 270,
    DECREASING = 271,
    DEFAULT = 272,
    DO = 273,
    ELSE = 274,
    END = 275,
    EXIT = 276,
    FOR = 277,
    FUNCTION = 278,
    GET = 279,
    IF = 280,
    LOOP = 281,
    OF = 282,
    PUT = 283,
    PROCEDURE = 284,
    RESULT = 285,
    RETURN = 286,
    SKIP = 287,
    THEN = 288,
    VAR = 289,
    WHEN = 290,
    CONST = 291,
    ASSIGN = 292,
    MOD = 293,
    LESS_EQUAL = 294,
    MORE_EQUAL = 295,
    NOT_EQUAL = 296,
    AND = 297,
    OR = 298,
    NOT = 299,
    NEGATIVE = 300
  };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define BOOL 261
#define TRUE 262
#define FALSE 263
#define INT_NUMBER 264
#define REAL_NUMBER 265
#define STR 266
#define ID 267
#define ARRAY 268
#define BEG 269
#define CHAR 270
#define DECREASING 271
#define DEFAULT 272
#define DO 273
#define ELSE 274
#define END 275
#define EXIT 276
#define FOR 277
#define FUNCTION 278
#define GET 279
#define IF 280
#define LOOP 281
#define OF 282
#define PUT 283
#define PROCEDURE 284
#define RESULT 285
#define RETURN 286
#define SKIP 287
#define THEN 288
#define VAR 289
#define WHEN 290
#define CONST 291
#define ASSIGN 292
#define MOD 293
#define LESS_EQUAL 294
#define MORE_EQUAL 295
#define NOT_EQUAL 296
#define AND 297
#define OR 298
#define NOT 299
#define NEGATIVE 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "parser.y" /* yacc.c:1909  */
 
    tokenInfo info;

#line 148 "y.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */
