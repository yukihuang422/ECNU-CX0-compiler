/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SYM_call = 258,
     SYM_const = 259,
     SYM_function = 260,
     SYM_read = 261,
     SYM_odd = 262,
     SYM_int = 263,
     SYM_bool = 264,
     SYM_array = 265,
     SYM_while = 266,
     SYM_write = 267,
     SYM_if = 268,
     SYM_else = 269,
     SYM_for = 270,
     SYM_true = 271,
     SYM_false = 272,
     SYM_break = 273,
     SYM_continue = 274,
     SYM_exit = 275,
     SYM_do = 276,
     SYM_repeat = 277,
     SYM_until = 278,
     SYM_case = 279,
     SYM_switch = 280,
     SYM_default = 281,
     SYM_becomes = 282,
     SYM_or = 283,
     SYM_and = 284,
     SYM_xor = 285,
     SYM_eql = 286,
     SYM_neq = 287,
     SYM_lss = 288,
     SYM_leq = 289,
     SYM_gtr = 290,
     SYM_geq = 291,
     SYM_plus = 292,
     SYM_minus = 293,
     SYM_times = 294,
     SYM_slash = 295,
     SYM_mod = 296,
     SYM_not = 297,
     SYM_addself = 298,
     SYM_minusself = 299,
     SYM_lparen = 300,
     SYM_rparen = 301,
     SYM_lbrace = 302,
     SYM_rbrace = 303,
     SYM_lsquar = 304,
     SYM_rsquar = 305,
     SYM_semicolon = 306,
     SYM_colon = 307,
     SYM_ident = 308,
     SYM_number = 309
   };
#endif
/* Tokens.  */
#define SYM_call 258
#define SYM_const 259
#define SYM_function 260
#define SYM_read 261
#define SYM_odd 262
#define SYM_int 263
#define SYM_bool 264
#define SYM_array 265
#define SYM_while 266
#define SYM_write 267
#define SYM_if 268
#define SYM_else 269
#define SYM_for 270
#define SYM_true 271
#define SYM_false 272
#define SYM_break 273
#define SYM_continue 274
#define SYM_exit 275
#define SYM_do 276
#define SYM_repeat 277
#define SYM_until 278
#define SYM_case 279
#define SYM_switch 280
#define SYM_default 281
#define SYM_becomes 282
#define SYM_or 283
#define SYM_and 284
#define SYM_xor 285
#define SYM_eql 286
#define SYM_neq 287
#define SYM_lss 288
#define SYM_leq 289
#define SYM_gtr 290
#define SYM_geq 291
#define SYM_plus 292
#define SYM_minus 293
#define SYM_times 294
#define SYM_slash 295
#define SYM_mod 296
#define SYM_not 297
#define SYM_addself 298
#define SYM_minusself 299
#define SYM_lparen 300
#define SYM_rparen 301
#define SYM_lbrace 302
#define SYM_rbrace 303
#define SYM_lsquar 304
#define SYM_rsquar 305
#define SYM_semicolon 306
#define SYM_colon 307
#define SYM_ident 308
#define SYM_number 309




/* Copy the first part of user declarations.  */
#line 1 "cxYacc.y"

    #include "gencode.h"
    #define YYDEBUG 0
    #ifdef YYDEBUG
        #define TRACE printf("reduce at line %d\n", __LINE__);
    #else
        #define TRACE
    #endif



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "cxYacc.y"
{
    char *ident;
    int number;
}
/* Line 193 of yacc.c.  */
#line 220 "cxYacc.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 233 "cxYacc.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNRULES -- Number of states.  */
#define YYNSTATES  222

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,     9,    10,    18,    19,
      22,    23,    28,    29,    34,    35,    36,    45,    46,    51,
      52,    53,    62,    64,    66,    67,    70,    73,    74,    75,
      76,    87,    88,    89,    90,   100,   101,   102,   111,   112,
     121,   124,   127,   130,   133,   136,   137,   138,   139,   140,
     155,   159,   163,   166,   170,   174,   175,   178,   180,   182,
     185,   189,   193,   195,   199,   203,   207,   211,   213,   215,
     219,   223,   225,   229,   231,   233,   235,   238,   242,   244,
     247,   250,   251,   254,   257,   260,   263,   266,   269,   271,
     273,   278,   279,   284,   285,   287,   290,   293,   296,   299,
     300,   302,   304,   306,   308,   310,   311,   319,   320,   328,
     331,   332,   335,   336,   342,   343
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      47,    59,    62,    60,    73,    61,    48,    -1,    -1,    62,
      63,    -1,    -1,     8,    71,    64,    51,    -1,    -1,     9,
      72,    65,    51,    -1,    -1,    -1,     4,     8,    71,    66,
      27,    54,    67,    51,    -1,    -1,     5,    71,    68,    58,
      -1,    -1,    -1,    10,    71,    69,    49,    54,    50,    70,
      51,    -1,    53,    -1,    53,    -1,    -1,    73,    74,    -1,
      99,    51,    -1,    -1,    -1,    -1,    13,    45,    93,    46,
      75,    74,    76,    88,    77,    51,    -1,    -1,    -1,    -1,
      11,    78,    45,    93,    46,    79,    74,    80,    51,    -1,
      -1,    -1,     6,    71,    81,    49,    54,    50,    82,    51,
      -1,    -1,    25,    45,    53,    83,    46,    47,   111,    48,
      -1,   104,    51,    -1,   105,    51,    -1,   106,    51,    -1,
     107,    51,    -1,   109,    51,    -1,    -1,    -1,    -1,    -1,
      15,    45,   101,    51,    84,    93,    51,    85,   103,    86,
      46,    74,    87,    51,    -1,    12,    90,    51,    -1,     6,
      71,    51,    -1,   102,    51,    -1,     3,    71,    51,    -1,
      47,    73,    48,    -1,    -1,    14,    74,    -1,    90,    -1,
      93,    -1,    38,    91,    -1,    91,    37,    91,    -1,    91,
      38,    91,    -1,    91,    -1,    92,    39,    92,    -1,    92,
      40,    92,    -1,    92,    41,    92,    -1,    92,    30,    92,
      -1,    92,    -1,    98,    -1,    45,    90,    46,    -1,    93,
      28,    94,    -1,    94,    -1,    94,    29,    95,    -1,    95,
      -1,    16,    -1,    17,    -1,    42,    95,    -1,    45,    93,
      46,    -1,    96,    -1,    98,    97,    -1,     7,    90,    -1,
      -1,    33,    90,    -1,    34,    90,    -1,    35,    90,    -1,
      36,    90,    -1,    31,    90,    -1,    32,    90,    -1,    71,
      -1,    54,    -1,    53,    49,    90,    49,    -1,    -1,    71,
     100,    27,    89,    -1,    -1,    99,    -1,    71,    43,    -1,
      43,    71,    -1,    71,    44,    -1,    44,    71,    -1,    -1,
     102,    -1,    99,    -1,    18,    -1,    19,    -1,    20,    -1,
      -1,    21,   108,    74,    11,    45,    93,    46,    -1,    -1,
      22,   110,    74,    23,    45,    93,    46,    -1,   112,   115,
      -1,    -1,   112,   113,    -1,    -1,    24,    54,   114,    52,
      73,    -1,    -1,    26,    52,   116,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    69,    78,    88,    96,    77,   103,   104,
     109,   108,   116,   115,   123,   125,   122,   132,   131,   143,
     145,   143,   152,   156,   159,   160,   164,   168,   173,   179,
     167,   185,   190,   195,   184,   207,   222,   206,   232,   231,
     243,   245,   247,   249,   251,   254,   258,   265,   270,   253,
     282,   288,   302,   305,   320,   323,   324,   328,   329,   333,
     335,   337,   339,   343,   345,   347,   349,   351,   355,   357,
     361,   363,   367,   369,   373,   375,   377,   379,   381,   386,
     388,   394,   398,   400,   402,   404,   406,   408,   421,   442,
     451,   475,   474,   499,   500,   504,   521,   535,   549,   565,
     566,   567,   571,   579,   592,   600,   599,   614,   613,   626,
     629,   630,   635,   634,   651,   650
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SYM_call", "SYM_const", "SYM_function",
  "SYM_read", "SYM_odd", "SYM_int", "SYM_bool", "SYM_array", "SYM_while",
  "SYM_write", "SYM_if", "SYM_else", "SYM_for", "SYM_true", "SYM_false",
  "SYM_break", "SYM_continue", "SYM_exit", "SYM_do", "SYM_repeat",
  "SYM_until", "SYM_case", "SYM_switch", "SYM_default", "SYM_becomes",
  "SYM_or", "SYM_and", "SYM_xor", "SYM_eql", "SYM_neq", "SYM_lss",
  "SYM_leq", "SYM_gtr", "SYM_geq", "SYM_plus", "SYM_minus", "SYM_times",
  "SYM_slash", "SYM_mod", "SYM_not", "SYM_addself", "SYM_minusself",
  "SYM_lparen", "SYM_rparen", "SYM_lbrace", "SYM_rbrace", "SYM_lsquar",
  "SYM_rsquar", "SYM_semicolon", "SYM_colon", "SYM_ident", "SYM_number",
  "$accept", "program", "@1", "block", "@2", "@3", "@4",
  "declaration_list", "declaration", "@5", "@6", "@7", "@8", "@9", "@10",
  "@11", "some_ident", "another_ident", "statement_list", "statement",
  "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21",
  "@22", "@23", "@24", "else_statement", "expression", "some_expression",
  "some_term", "some_factor", "another_expression", "another_term",
  "another_factor", "condition", "right_condition", "left_condition",
  "assignment_statement", "@25", "init_expresstion", "additive_statement",
  "additive_expresstion", "break_state", "continue_state", "exit_state",
  "do_while_state", "@26", "repeat_until_state", "@27", "case_stat_list",
  "caseList", "case", "@28", "default", "@29", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    57,    56,    59,    60,    61,    58,    62,    62,
      64,    63,    65,    63,    66,    67,    63,    68,    63,    69,
      70,    63,    71,    72,    73,    73,    74,    75,    76,    77,
      74,    78,    79,    80,    74,    81,    82,    74,    83,    74,
      74,    74,    74,    74,    74,    84,    85,    86,    87,    74,
      74,    74,    74,    74,    74,    88,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,   100,    99,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   104,   105,   106,   108,   107,   110,   109,   111,
     112,   112,   114,   113,   116,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     0,     0,     7,     0,     2,
       0,     4,     0,     4,     0,     0,     8,     0,     4,     0,
       0,     8,     1,     1,     0,     2,     2,     0,     0,     0,
      10,     0,     0,     0,     9,     0,     0,     8,     0,     8,
       2,     2,     2,     2,     2,     0,     0,     0,     0,    14,
       3,     3,     2,     3,     3,     0,     2,     1,     1,     2,
       3,     3,     1,     3,     3,     3,     3,     1,     1,     3,
       3,     1,     3,     1,     1,     1,     2,     3,     1,     2,
       2,     0,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     0,     4,     0,     1,     2,     2,     2,     2,     0,
       1,     1,     1,     1,     1,     0,     7,     0,     7,     2,
       0,     2,     0,     5,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     4,     3,     8,     5,     0,     0,
       0,     0,     0,    24,     9,     0,    22,    17,    10,    23,
      12,    19,     6,    14,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,   102,   103,   104,   105,   107,     0,
       0,     0,    24,     0,    91,    25,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    11,    13,     0,     0,    35,
       0,     0,     0,    22,    89,    88,     0,    62,    67,    68,
       0,    93,     0,     0,     0,    96,    98,     0,     7,    95,
      97,     0,    26,    52,    40,    41,    42,    43,    44,     0,
       0,    53,    51,     0,     0,    59,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,    74,    75,     0,     0,
       0,    71,    73,    78,    81,    91,    94,     0,     0,     0,
      38,    54,     0,    15,    20,     0,     0,    69,     0,    60,
      61,    66,    63,    64,    65,    80,    76,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,    79,    45,     0,
       0,     0,     0,    92,    57,    58,    68,     0,     0,     0,
      32,    90,    77,    70,     0,    72,    86,    87,    82,    83,
      84,    85,     0,     0,     0,     0,    16,    21,    36,     0,
      28,     0,     0,     0,   110,     0,    33,    55,    46,   106,
     108,     0,     0,    37,     0,     0,    29,    99,    39,     0,
       0,   111,   109,    34,    56,     0,   101,   100,    47,   112,
     114,    30,     0,     0,    24,     0,    24,   115,    48,   113,
       0,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    13,    43,     7,    14,    25,
      26,    53,   157,    24,    27,   158,    65,    20,    22,    45,
     164,   187,   205,    60,   179,   194,    93,   185,   151,   172,
     197,   212,   220,   196,   153,    96,    67,    68,   137,   111,
     112,   113,   147,    69,    46,    81,   117,    47,   208,    48,
      49,    50,    51,    72,    52,    73,   191,   192,   201,   213,
     202,   214
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,    14,   -31,  -100,  -100,  -100,  -100,    96,    15,   -24,
     -24,    -5,   -24,  -100,  -100,   -24,  -100,  -100,  -100,  -100,
    -100,  -100,    34,  -100,   -31,   -13,    -8,     1,   -24,   -24,
    -100,    35,    13,    41,  -100,  -100,  -100,  -100,  -100,    49,
     -24,   -24,  -100,    44,    47,  -100,    57,    59,    61,    62,
      63,    64,    73,    71,  -100,  -100,  -100,    72,    74,    77,
      87,    22,    35,    90,  -100,  -100,    89,    65,   -15,  -100,
     127,   -24,    34,    34,    88,  -100,  -100,   146,  -100,  -100,
    -100,   119,  -100,  -100,  -100,  -100,  -100,  -100,  -100,    94,
     101,  -100,  -100,   107,   127,  -100,   104,    35,  -100,    22,
      22,    22,    22,    22,    22,    35,  -100,  -100,   127,   127,
     -18,   131,  -100,  -100,   180,  -100,  -100,   111,   152,   150,
    -100,  -100,   100,  -100,  -100,   121,   -16,  -100,   128,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,   -11,   127,  -100,
     127,    35,    35,    35,    35,    35,    35,  -100,  -100,   133,
     134,   136,   100,  -100,  -100,   155,   169,   140,   141,   135,
    -100,  -100,  -100,   131,    34,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,   127,   127,   127,   137,  -100,  -100,  -100,    34,
    -100,   -17,   -10,    -7,  -100,   144,  -100,   173,  -100,  -100,
    -100,   148,    18,  -100,   156,    34,  -100,    40,  -100,   163,
     157,  -100,  -100,  -100,  -100,   167,  -100,  -100,  -100,  -100,
    -100,  -100,   174,   170,  -100,    34,  -100,    34,  -100,    34,
     168,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,   197,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,    -9,  -100,   -40,   -68,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,   -23,   -39,   -32,   -37,    85,
     -99,  -100,  -100,   -43,   -64,  -100,  -100,    27,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -82
static const yytype_int16 yytable[] =
{
      17,    18,    77,    21,   118,   119,    23,   116,    66,   136,
     138,   138,   138,    44,     3,   101,     4,   138,   138,    58,
      59,   138,    95,    15,   102,   103,   104,   114,   139,    16,
     160,    75,    76,   110,   188,   162,   189,    28,    55,   190,
      29,   165,   199,    56,   200,    30,    31,    32,    19,    33,
      57,   114,    34,    35,    36,    37,    38,   126,    70,    39,
     129,   130,   115,    44,    44,   114,   114,    62,    44,   131,
     132,   133,   134,    61,   128,    63,    64,    40,    41,   156,
      62,    42,   135,    40,    41,   155,    71,    16,    63,    64,
      79,    80,    78,    16,    74,   114,   180,   114,    89,   154,
       8,     9,    99,   100,    10,    11,    12,   105,    82,   156,
      83,   186,    84,    85,    86,    87,   106,   107,   166,   167,
     168,   169,   170,   171,    88,    91,    90,   204,    92,   114,
     114,   114,    94,   206,   105,   181,   182,   183,    61,    97,
      98,   120,   108,   106,   107,   152,   122,   218,   123,    28,
     127,   124,    29,    63,    64,    44,   125,    30,    31,    32,
     140,    33,   148,   149,    34,    35,    36,    37,    38,   108,
      44,    39,   109,   150,   217,   159,   219,   161,   173,   174,
      63,    64,   175,   138,   184,   178,    44,   195,    44,    40,
      41,   176,   177,    42,   121,   193,   198,   -81,   -81,    16,
     141,   142,   143,   144,   145,   146,    44,   203,    44,   210,
      44,   141,   142,   143,   144,   145,   146,   209,   211,   221,
     215,    54,   216,   163,   207
};

static const yytype_uint8 yycheck[] =
{
       9,    10,    42,    12,    72,    73,    15,    71,    31,   108,
      28,    28,    28,    22,     0,    30,    47,    28,    28,    28,
      29,    28,    61,     8,    39,    40,    41,    70,    46,    53,
      46,    40,    41,    70,    51,    46,    46,     3,    51,    46,
       6,   140,    24,    51,    26,    11,    12,    13,    53,    15,
      49,    94,    18,    19,    20,    21,    22,    94,    45,    25,
      99,   100,    71,    72,    73,   108,   109,    45,    77,   101,
     102,   103,   104,    38,    97,    53,    54,    43,    44,   122,
      45,    47,   105,    43,    44,   122,    45,    53,    53,    54,
      43,    44,    48,    53,    45,   138,   164,   140,    27,   122,
       4,     5,    37,    38,     8,     9,    10,     7,    51,   152,
      51,   179,    51,    51,    51,    51,    16,    17,   141,   142,
     143,   144,   145,   146,    51,    51,    54,   195,    51,   172,
     173,   174,    45,   197,     7,   172,   173,   174,    38,    49,
      51,    53,    42,    16,    17,    45,    27,   215,    54,     3,
      46,    50,     6,    53,    54,   164,    49,    11,    12,    13,
      29,    15,    51,    11,    18,    19,    20,    21,    22,    42,
     179,    25,    45,    23,   214,    54,   216,    49,    45,    45,
      53,    54,    46,    28,    47,    50,   195,    14,   197,    43,
      44,    51,    51,    47,    48,    51,    48,    28,    29,    53,
      31,    32,    33,    34,    35,    36,   215,    51,   217,    52,
     219,    31,    32,    33,    34,    35,    36,    54,    51,    51,
      46,    24,    52,   138,   197
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    57,     0,    47,    58,    59,    62,     4,     5,
       8,     9,    10,    60,    63,     8,    53,    71,    71,    53,
      72,    71,    73,    71,    68,    64,    65,    69,     3,     6,
      11,    12,    13,    15,    18,    19,    20,    21,    22,    25,
      43,    44,    47,    61,    71,    74,    99,   102,   104,   105,
     106,   107,   109,    66,    58,    51,    51,    49,    71,    71,
      78,    38,    45,    53,    54,    71,    90,    91,    92,    98,
      45,    45,   108,   110,    45,    71,    71,    73,    48,    43,
      44,   100,    51,    51,    51,    51,    51,    51,    51,    27,
      54,    51,    51,    81,    45,    91,    90,    49,    51,    37,
      38,    30,    39,    40,    41,     7,    16,    17,    42,    45,
      93,    94,    95,    96,    98,    71,    99,   101,    74,    74,
      53,    48,    27,    54,    50,    49,    93,    46,    90,    91,
      91,    92,    92,    92,    92,    90,    95,    93,    28,    46,
      29,    31,    32,    33,    34,    35,    36,    97,    51,    11,
      23,    83,    45,    89,    90,    93,    98,    67,    70,    54,
      46,    49,    46,    94,    75,    95,    90,    90,    90,    90,
      90,    90,    84,    45,    45,    46,    51,    51,    50,    79,
      74,    93,    93,    93,    47,    82,    74,    76,    51,    46,
      46,   111,   112,    51,    80,    14,    88,    85,    48,    24,
      26,   113,   115,    51,    74,    77,    99,   102,   103,    54,
      52,    51,    86,   114,   116,    46,    52,    73,    74,    73,
      87,    51
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


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
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
#line 69 "cxYacc.y"
    {
        level--;  // 在 block 里会恢复为 0
        break_adr = -1;
    ;}
    break;

  case 4:
#line 78 "cxYacc.y"
    {
        level++;
        data_allocation_index = 3;
        level_registration[level].init_tx = table_index;
        table[table_index].adr = code_index;
        gen_middle_code(jmp, 0, 1); // 为什么这里是 1
        if(level > LEV_MAX)
            error(32);
    ;}
    break;

  case 5:
#line 88 "cxYacc.y"
    {
        code[table[level_registration[level].init_tx].adr].adr = code_index; // 填写过程体在 code 中的入口地址
        table[level_registration[level].init_tx].adr = code_index;  // 填写过程体在 table 中的入口地址
        table[level_registration[level].init_tx].size = data_allocation_index;
        level_registration[level].init_cx = code_index;
        gen_middle_code(ini, 0, data_allocation_index);
    ;}
    break;

  case 6:
#line 96 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 0);
        printf("\n");
    ;}
    break;

  case 10:
#line 109 "cxYacc.y"
    {
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        enter_object_to_table(variable);
    ;}
    break;

  case 12:
#line 116 "cxYacc.y"
    {
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        enter_object_to_table(variable); // 暂时将 bool 型变量当作 variable 处理
    ;}
    break;

  case 14:
#line 123 "cxYacc.y"
    { strcpy(ident, (yyvsp[(3) - (3)].ident)); ;}
    break;

  case 15:
#line 125 "cxYacc.y"
    {
        number = (yyvsp[(6) - (6)].number);
        enter_object_to_table(constant);
    ;}
    break;

  case 17:
#line 132 "cxYacc.y"
    {
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        enter_object_to_table(func);
        level_registration[level].init_dx = data_allocation_index;
    ;}
    break;

  case 18:
#line 138 "cxYacc.y"
    {
        level--; 
        data_allocation_index = level_registration[level].init_dx;
    ;}
    break;

  case 19:
#line 143 "cxYacc.y"
    {
		strcpy(ident, (yyvsp[(2) - (2)].ident));
	;}
    break;

  case 20:
#line 145 "cxYacc.y"
    {
		number = (yyvsp[(5) - (6)].number);
		enter_object_to_table(array);
	;}
    break;

  case 27:
#line 168 "cxYacc.y"
    {
        (yyval.number) = code_index;
        gen_middle_code(jpc, 0, 0); // 回填用 L1
    ;}
    break;

  case 28:
#line 173 "cxYacc.y"
    {
        (yyval.number) = code_index;
        gen_middle_code(jmp, 0, 0); // 回填用 L2， 如果条件成立，执行完 statement 后应该无条件跳转至 if..else.. 之后的地址， 该地址待回填
        code[(yyvsp[(5) - (6)].number)].adr = code_index; // L1
    ;}
    break;

  case 29:
#line 179 "cxYacc.y"
    {
        code[(yyvsp[(7) - (8)].number)].adr = code_index; // L2
    ;}
    break;

  case 31:
#line 185 "cxYacc.y"
    {
        (yyval.number) = code_index;
        continue_adr = code_index; // continue 跳转回此处即可
    ;}
    break;

  case 32:
#line 190 "cxYacc.y"
    {
        (yyval.number) = code_index;
        gen_middle_code(jpc, 0, 0); // 用 statement 之后的地址回填
    ;}
    break;

  case 33:
#line 195 "cxYacc.y"
    {
        gen_middle_code(jmp, 0, (yyvsp[(2) - (7)].number)); // 无条件跳转回 while 循环
        code[(yyvsp[(6) - (7)].number)].adr = code_index;

        if(break_adr != -1) { // 说明之前遇到了 break
            code[break_adr].adr = code_index; // 更改 break 对应的 jmp 指令的 adr, 相当于跳出 while 循环
            break_adr = -1; // 重新初始化为不可用状态
        }
        continue_adr = -1; // 重新初始化为不可用状态
    ;}
    break;

  case 35:
#line 207 "cxYacc.y"
    {
		int pos;
		strcpy(ident,(yyvsp[(2) - (2)].ident));
		pos = get_ident_position_in_table(ident);
		if(pos==0){
			error(0);
		}
		else{
			if(table[pos].kind!=array){
				error(12);
				pos=0;
			}
		}
		(yyval.number)=pos;
	;}
    break;

  case 36:
#line 222 "cxYacc.y"
    {
		int i;
		if((yyvsp[(3) - (6)].number)!=0){
			i = (yyvsp[(3) - (6)].number);
			gen_middle_code(opr,0,16); //read
			gen_middle_code(ast,level-table[i].level,table[i].adr);
		}
	;}
    break;

  case 38:
#line 232 "cxYacc.y"
    {
        int pos;
		strcpy(ident,(yyvsp[(3) - (3)].ident));
		pos = get_ident_position_in_table(ident);
		if(pos==0){
			error(0);
		}
		switch_num = table[pos].adr;
    ;}
    break;

  case 45:
#line 254 "cxYacc.y"
    {
        (yyval.number) = code_index; // L1, $<number>5
    ;}
    break;

  case 46:
#line 258 "cxYacc.y"
    {
        (yyval.number) = code_index;   // $<number>8
        gen_middle_code(jpc, 0, 0); // 用 statement 之后的地址回填
        gen_middle_code(jmp, 0, 0); // 条件成立先执行 statement(L4), 再执行 i++
        continue_adr = code_index; // continue 执行到跳转到这里, 是 additive 之前不是之后！！
    ;}
    break;

  case 47:
#line 265 "cxYacc.y"
    {
        gen_middle_code(jmp, 0, (yyvsp[(5) - (9)].number)); // jmp 0 L1
        code[(yyvsp[(8) - (9)].number) + 1].adr = code_index; // jmp 0 L4 回填
    ;}
    break;

  case 48:
#line 270 "cxYacc.y"
    {
        gen_middle_code(jmp, 0, (yyvsp[(8) - (12)].number) + 2); // jmp 0 L2 , 先跳转回去执行 i++， 也就是 L2
        code[(yyvsp[(8) - (12)].number)].adr = code_index; // jpc 0 L3 回填

        if(break_adr != -1) { // 处理类似于 while
            code[break_adr].adr = code_index;
            break_adr = -1;
        }
        continue_adr = -1;
    ;}
    break;

  case 50:
#line 283 "cxYacc.y"
    {
        gen_middle_code(opr, 0, 14); // NOTE: 此处的 write 是为了输出变量，实际上也就是输出栈顶内容
    ;}
    break;

  case 51:
#line 289 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(opr, 0, 16);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 53:
#line 306 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (3)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(1);
        else if(table[pos].kind != func)
            error(3);
        else
            gen_middle_code(cal, level - table[pos].level, table[pos].adr);
    ;}
    break;

  case 59:
#line 334 "cxYacc.y"
    { gen_middle_code(opr, 0, 1); ;}
    break;

  case 60:
#line 336 "cxYacc.y"
    { gen_middle_code(opr, 0, 2); ;}
    break;

  case 61:
#line 338 "cxYacc.y"
    { gen_middle_code(opr, 0, 3); ;}
    break;

  case 63:
#line 344 "cxYacc.y"
    { gen_middle_code(opr, 0, 4); ;}
    break;

  case 64:
#line 346 "cxYacc.y"
    { gen_middle_code(opr, 0, 5); ;}
    break;

  case 65:
#line 348 "cxYacc.y"
    { gen_middle_code(opr, 0, 6); ;}
    break;

  case 66:
#line 350 "cxYacc.y"
    { gen_middle_code(opr, 0, 15); ;}
    break;

  case 70:
#line 362 "cxYacc.y"
    { gen_middle_code(opr, 0, 17); ;}
    break;

  case 72:
#line 368 "cxYacc.y"
    { gen_middle_code(opr, 0, 18);  ;}
    break;

  case 74:
#line 374 "cxYacc.y"
    { gen_middle_code(lit, 0, 1); ;}
    break;

  case 75:
#line 376 "cxYacc.y"
    { gen_middle_code(lit, 0, 0); ;}
    break;

  case 76:
#line 378 "cxYacc.y"
    { gen_middle_code(opr, 0, 19); ;}
    break;

  case 80:
#line 389 "cxYacc.y"
    { gen_middle_code(opr, 0, 7); ;}
    break;

  case 81:
#line 394 "cxYacc.y"
    {
        gen_middle_code(lit, 0, 0);
        gen_middle_code(opr, 0, 12);
    ;}
    break;

  case 82:
#line 399 "cxYacc.y"
    { gen_middle_code(opr, 0, 10); ;}
    break;

  case 83:
#line 401 "cxYacc.y"
    { gen_middle_code(opr, 0, 13); ;}
    break;

  case 84:
#line 403 "cxYacc.y"
    { gen_middle_code(opr, 0, 12); ;}
    break;

  case 85:
#line 405 "cxYacc.y"
    { gen_middle_code(opr, 0, 11); ;}
    break;

  case 86:
#line 407 "cxYacc.y"
    { gen_middle_code(opr, 0, 8); ;}
    break;

  case 87:
#line 409 "cxYacc.y"
    { gen_middle_code(opr, 0, 9); ;}
    break;

  case 88:
#line 422 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (1)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
                case constant:
                    gen_middle_code(lit, 0, table[pos].val); break;
                case variable:
                    gen_middle_code(lod, level - table[pos].level, table[pos].adr); break;
                case func:
                    error(4); break;
                case array:
                    error(4); break;
            }
        }
    ;}
    break;

  case 89:
#line 443 "cxYacc.y"
    {
        int num = (yyvsp[(1) - (1)].number);
        if(num > CONST_MAX) {
            error(31);
            num = 0;
        }
        gen_middle_code(lit, 0, num);
    ;}
    break;

  case 90:
#line 452 "cxYacc.y"
    {
		int pos;
		strcpy(ident,(yyvsp[(1) - (4)].ident));
		pos=get_ident_position_in_table(ident);
		if(pos==0){
			error(0);
		}
		else{
			if(table[pos].kind != array){
				error(12);
				pos=0;
			}
			else{
				gen_middle_code(ald,level - table[pos].level,table[pos].adr);
			}
		}		
	;}
    break;

  case 91:
#line 475 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (1)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            if(table[pos].kind != variable){
                error(12);
                pos = 0;
            }
        }
        (yyval.number) = pos;
    ;}
    break;

  case 92:
#line 490 "cxYacc.y"
    {
        int pos;
        if((yyvsp[(2) - (4)].number) != 0) { // 其实就是 SYM_ident 后面那个大括号保留下来的 i， 因为此处无法访问上一个段落的 i, 所以要在上一段中用 $<number>$2 保存下来， $<number>$ 是指定 i 的类型为 数字
            pos = (yyvsp[(2) - (4)].number);
            gen_middle_code(sto, level-table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 95:
#line 505 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (2)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else if(table[pos].kind != variable) {
            error(6);
        }
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 96:
#line 522 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 97:
#line 536 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(1) - (2)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 98:
#line 550 "cxYacc.y"
    {
        int pos;
        strcpy(ident, (yyvsp[(2) - (2)].ident));
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    ;}
    break;

  case 102:
#line 572 "cxYacc.y"
    {
        break_adr = code_index;
        gen_middle_code(jmp, 0, 0);
    ;}
    break;

  case 103:
#line 580 "cxYacc.y"
    {
        if(continue_adr != -1)
            gen_middle_code(jmp, 0, continue_adr);
        else {
            // 出现了 continue 的时候值却仍然为 -1, 这是不可能的，
            // 因为 continues 直到 while 或 for 结束才会初始化为 -1
            error(10);
        }
    ;}
    break;

  case 104:
#line 593 "cxYacc.y"
    {
        gen_middle_code(jmp, 0, 0);
    ;}
    break;

  case 105:
#line 600 "cxYacc.y"
    {
        (yyval.number) = code_index;
    ;}
    break;

  case 106:
#line 605 "cxYacc.y"
    {
        gen_middle_code(jpc,0,0);
        gen_middle_code(jmp, 0, (yyvsp[(2) - (7)].number));
        code[code_index - 2].adr = code_index;
    ;}
    break;

  case 107:
#line 614 "cxYacc.y"
    {
        (yyval.number) = code_index;
    ;}
    break;

  case 108:
#line 619 "cxYacc.y"
    {
        gen_middle_code(jpc, 0, (yyvsp[(2) - (7)].number));
        gen_middle_code(jmp, 0, code_index + 1);
    ;}
    break;

  case 112:
#line 635 "cxYacc.y"
    {
        int num;
        num = (yyvsp[(2) - (2)].number);
        gen_middle_code(lod, 0, switch_num);
        gen_middle_code(lit, 0, num);
        gen_middle_code(opr, 0, 20);
        (yyval.number) = code_index;
        gen_middle_code(jpc, 0, 0);
    ;}
    break;

  case 113:
#line 644 "cxYacc.y"
    {
        code[(yyvsp[(3) - (5)].number)].adr = code_index;
    ;}
    break;

  case 114:
#line 651 "cxYacc.y"
    {
        (yyval.number) = code_index;
        gen_middle_code(jpc, 0, 0);
    ;}
    break;

  case 115:
#line 655 "cxYacc.y"
    {
        code[(yyvsp[(3) - (4)].number)].adr = code_index;
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2269 "cxYacc.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 659 "cxYacc.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

yyerror(char *s)
{
    error_count++;
    printf("%s in line %d\n", s, line);
    fprintf(error_file, "%s in line %d\n", s, line);
}

int main()
{
    #if YYDEBUG
        yydebug = 1;
    #endif

    if((error_file = fopen("error.txt", "w"))==NULL) {
        printf("Cann't open file!\n");
        exit(0);
    }

    printf("Input file (absolute or relative path): \n");
    fprintf(error_file, "Input file (absolute path): \n");

    scanf("%s", src_file_name);
    fprintf(error_file, "%s\n", src_file_name);

    if((fin = fopen(src_file_name, "r")) == NULL) {
        printf("Cann't open file according to given filename\n");
        exit(0);
    }

    redirectInput(fin);

    error_count = 0;
    code_index = 0;

    if((middle_code_file = fopen("middle_code.txt", "w")) == NULL) {
        printf("Cann't open middle_code.txt file!\n");
        exit(0);
    }

    if((stack_data_file = fopen("stack.txt", "w")) == NULL) {
        printf("Cann't open stack.txt file!\n");
        exit(0);
    }

    yyparse();

    fclose(middle_code_file);
    fclose(error_file);

    if(error_count == 0) {
        print_middle_code();
        interpret();
    }
    else
        printf("%d errors in CX program\n", error_count);

    fclose(fin);
    getchar();
    return 0;
}

