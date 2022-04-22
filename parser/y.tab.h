/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     int_const = 258,
     char_const = 259,
     float_const = 260,
     id = 261,
     string = 262,
     storage_const = 263,
     type_const = 264,
     qual_const = 265,
     struct_const = 266,
     enum_const = 267,
     DEFINE = 268,
     IF = 269,
     FOR = 270,
     DO = 271,
     WHILE = 272,
     BREAK = 273,
     SWITCH = 274,
     CONTINUE = 275,
     RETURN = 276,
     CASE = 277,
     DEFAULT = 278,
     GOTO = 279,
     SIZEOF = 280,
     PUNC = 281,
     or_const = 282,
     and_const = 283,
     eq_const = 284,
     shift_const = 285,
     rel_const = 286,
     inc_const = 287,
     point_const = 288,
     ELSE = 289,
     HEADER = 290,
     UMINUS = 291
   };
#endif
/* Tokens.  */
#define int_const 258
#define char_const 259
#define float_const 260
#define id 261
#define string 262
#define storage_const 263
#define type_const 264
#define qual_const 265
#define struct_const 266
#define enum_const 267
#define DEFINE 268
#define IF 269
#define FOR 270
#define DO 271
#define WHILE 272
#define BREAK 273
#define SWITCH 274
#define CONTINUE 275
#define RETURN 276
#define CASE 277
#define DEFAULT 278
#define GOTO 279
#define SIZEOF 280
#define PUNC 281
#define or_const 282
#define and_const 283
#define eq_const 284
#define shift_const 285
#define rel_const 286
#define inc_const 287
#define point_const 288
#define ELSE 289
#define HEADER 290
#define UMINUS 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


