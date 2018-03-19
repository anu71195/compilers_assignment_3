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

#ifndef YY_YY_MYLANG_TAB_H_INCLUDED
# define YY_YY_MYLANG_TAB_H_INCLUDED
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
    BREAK = 258,
    CHAR = 259,
    CONTINUE = 260,
    ELSE = 261,
    FLOAT = 262,
    FOR = 263,
    IF = 264,
    INT = 265,
    RETURN = 266,
    VOID = 267,
    WHILE = 268,
    PROC = 269,
    LNK = 270,
    JB = 271,
    COLON = 272,
    CLUST = 273,
    CLUSTER = 274,
    PROCESSOR = 275,
    ISA = 276,
    PROC_TYPE = 277,
    CLOCK_SPEED = 278,
    MEM1 = 279,
    MEM2 = 280,
    NAME = 281,
    TOPOLOGY = 282,
    LINK_BANDWIDTH = 283,
    LINK_CAPACITY = 284,
    LINK = 285,
    START_POINT = 286,
    END_POINT = 287,
    MEMORY_TYPE = 288,
    MEMORY_SIZE = 289,
    JOB = 290,
    JOB_ID = 291,
    FLOPS_REQUIRED = 292,
    DEADLINE = 293,
    MEM_REQUIRED = 294,
    AFFINITY = 295,
    RUN = 296,
    WAIT = 297,
    DISCARD_JOB = 298,
    STOP = 299,
    GET_AVAILABLE_MEMORY = 300,
    GET_JOB_AFFINITY = 301,
    GET_JOB_MEMORY = 302,
    GET_FLOPS = 303,
    GET_DEADLINE = 304,
    IS_RUNNING = 305,
    SUBMIT_JOBS = 306,
    GET_FLOPS_SPEED = 307,
    GET_PROC_TYPE = 308,
    IS_PROCESSOR = 309,
    GET_PROCESSOR = 310,
    MEM = 311,
    IDENTIFIER = 312,
    CONSTANT = 313,
    STRING_LITERAL = 314,
    RIGHT_OP = 315,
    LEFT_OP = 316,
    INC_OP = 317,
    DEC_OP = 318,
    AND_OP = 319,
    OR_OP = 320,
    LE_OP = 321,
    GE_OP = 322,
    EQ_OP = 323,
    NE_OP = 324,
    SEMI_COLON = 325,
    LEFT_CURLY = 326,
    RIGHT_CURLY = 327,
    COMMA = 328,
    ASGN_OP = 329,
    LEFT_PARENTHESIS = 330,
    RIGHT_PARENTHESIS = 331,
    LEFT_BRACKET = 332,
    RIGHT_BRACKET = 333,
    DOT = 334,
    AMPERSAND = 335,
    NOT_OP = 336,
    BTW_NOT = 337,
    MINUS = 338,
    PLUS = 339,
    MUL_OP = 340,
    DIV_OP = 341,
    MOD_OP = 342,
    LESS_THAN = 343,
    GREATER_THAN = 344,
    XOR_OP = 345,
    BTW_OR = 346,
    INVALID = 347,
    MEMORY = 348,
    PROCESSORS = 349,
    DEREF_OP = 350,
    GET_CLOCK_SPEED = 351,
    MEM_TYPES = 352
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYLANG_TAB_H_INCLUDED  */
