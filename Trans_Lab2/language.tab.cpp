/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* "%code top" blocks.  */


#include <stddef.h>
#include <string.h>
#include "parser.h"
#include "AstUtils.h"
#include "resources.h"
#include "ast.h"
#include "pt.h"
#pragma warning(disable : 4003)
#pragma warning(disable : 4005)

void yyerror(const char *message);
#define YYDEBUG 1



AstNode *astTree;
PtNode *ptTree;
ParserContext Context;





/* Copy the first part of user declarations.  */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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

/* "%code requires" blocks.  */


#include "parser.h"
#include "common.h"
struct Node;




/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_IDENTIFIER = 258,
     TOK_ARITHMETICAL_OP = 259,
     TOK_COMP_OP = 260,
     TOK_ASSIGN_OP = 261,
     TOK_U_ARITHMETICAL_OP = 262,
     TOK_B_LOGICAL_OP = 263,
     TOK_U_LOGICAL_OP = 264,
     TOK_IF = 265,
     TOK_ELSE = 266,
     TOK_ENDEXPR = 267,
     TOK_OPENPAR = 268,
     TOK_CLOSEPAR = 269,
     TOK_OPENBR = 270,
     TOK_CLOSEBR = 271,
     TOK_OPENSQ = 272,
     TOK_CLOSESQ = 273,
     TOK_DOT = 274,
     TOK_DOUBLEDOT = 275,
     TOK_ROM_DECL = 276,
     TOK_INT_DECL = 277,
     TOK_FLOAT_DECL = 278,
     TOK_FOR_DECL = 279,
     TOK_WHILE_DECL = 280,
     TOK_DO_DECL = 281,
     TOK_ROM_CONST = 282,
     TOK_INT_CONST = 283,
     TOK_FLOAT_CONST = 284,
     TOK_PRINT = 285,
     TOK_READ = 286,
     TOK_BREAK = 287,
     TOK_CONTINUE = 288,
     TOK_GOTO = 289,
     TOK_STRUCT = 290,
     TOK_UNION = 291,
     TOK_SWITCH = 292,
     TOK_CASE = 293,
     TOK_DEFAULT = 294,
     TMP_VAR = 295,
     LABEL = 296,
     NAME = 297,
     INT_CONST = 298,
     FLOAT_CONST = 299,
     LITERAL = 300,
     IFFALSE = 301,
     IFTRUE = 302,
     ASSIGN = 303,
     OR = 304,
     AND = 305,
     XOR = 306,
     NOT = 307,
     INPUT = 308,
     OUTPUT = 309,
     GOTO = 310,
     CMP = 311,
     EXPR_ERROR = 312,
     STMNT_BLOCK_ERROR = 313,
     IF_WITHOUT_ELSE = 314,
     TOK_U_LOGICAL = 315,
     TOK_U_ARITHMETICAL = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


	Node *_node;
	AstNode *_AstNode;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */



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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      62,    63,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    14,    18,    21,
      23,    26,    27,    30,    31,    36,    40,    41,    46,    47,
      53,    56,    59,    62,    66,    68,    70,    72,    74,    76,
      79,    82,    85,    88,    91,    94,    96,   100,   103,   105,
     107,   110,   112,   118,   121,   126,   132,   138,   144,   152,
     157,   161,   165,   171,   175,   183,   185,   187,   190,   192,
     194,   196,   198,   200,   202,   206,   208,   210,   214,   217,
     220,   224,   228,   232,   236,   237,   242,   245,   249,   253,
     256,   258,   260,   262,   267,   271,   277,   279,   281,   284,
     287,   291,   293,   295,   297,   300,   303,   305
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    -1,    66,    67,    -1,    66,    -1,    67,
      -1,    75,    12,    -1,    66,    75,    12,    -1,    75,     1,
      -1,    74,    -1,    67,    74,    -1,    -1,    15,    69,    -1,
      -1,    68,    67,    16,    71,    -1,    68,    67,     1,    -1,
      -1,    68,    66,    16,    72,    -1,    -1,    68,    66,    67,
      16,    73,    -1,    92,    12,    -1,    92,     1,    -1,     3,
      20,    -1,    34,     3,    12,    -1,    83,    -1,    84,    -1,
      97,    -1,    81,    -1,    82,    -1,    91,    12,    -1,    32,
      12,    -1,    32,     1,    -1,    33,    12,    -1,    33,     1,
      -1,    88,     3,    -1,    76,    -1,    77,    79,    80,    -1,
      78,     3,    -1,    35,    -1,    36,    -1,    15,    66,    -1,
      16,    -1,    30,    13,    92,    14,    12,    -1,    30,     1,
      -1,    30,    62,    92,     1,    -1,    30,    62,    92,    63,
       1,    -1,    31,    13,    90,    14,    12,    -1,    10,    13,
      92,    14,    87,    -1,    10,    13,    92,    14,    87,    11,
      87,    -1,    10,    13,    92,     1,    -1,    24,    86,    87,
      -1,    25,    85,    87,    -1,    26,    87,    25,    85,    12,
      -1,    13,    92,    14,    -1,    13,    92,    12,    92,    12,
      92,    14,    -1,    70,    -1,    74,    -1,    89,    93,    -1,
      21,    -1,    23,    -1,    22,    -1,     3,    -1,    95,    -1,
      94,    -1,    90,     6,    92,    -1,    95,    -1,    96,    -1,
      92,     8,    92,    -1,     9,    92,    -1,     7,    92,    -1,
      92,     4,    92,    -1,    92,     5,    92,    -1,    13,    92,
       1,    -1,    13,    92,    14,    -1,    -1,    17,    92,    18,
      93,    -1,    17,     1,    -1,    17,    92,     1,    -1,    95,
      19,     3,    -1,     3,    93,    -1,    28,    -1,    27,    -1,
      29,    -1,    98,   100,   104,    99,    -1,    98,   100,    99,
      -1,    37,    13,    92,    14,    15,    -1,    16,    -1,   101,
      -1,   101,   100,    -1,   102,   103,    -1,    38,    92,    20,
      -1,    74,    -1,    70,    -1,   101,    -1,   105,   106,    -1,
      39,    20,    -1,    74,    -1,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   123,   123,   127,   135,   140,   150,   154,   158,   165,
     169,   177,   177,   185,   185,   191,   197,   197,   203,   203,
     211,   217,   223,   247,   262,   264,   266,   268,   270,   272,
     274,   303,   309,   334,   342,   350,   353,   358,   380,   386,
     392,   397,   410,   416,   422,   428,   436,   444,   452,   461,
     469,   477,   485,   496,   503,   512,   517,   524,   565,   571,
     577,   583,   603,   610,   614,   624,   626,   631,   640,   648,
     656,   665,   674,   680,   694,   699,   710,   716,   723,   764,
     790,   798,   806,   815,   820,   826,   849,   857,   861,   867,
     873,   894,   898,   902,   907,   913,   924,   928
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENTIFIER", "TOK_ARITHMETICAL_OP",
  "TOK_COMP_OP", "TOK_ASSIGN_OP", "TOK_U_ARITHMETICAL_OP",
  "TOK_B_LOGICAL_OP", "TOK_U_LOGICAL_OP", "TOK_IF", "TOK_ELSE",
  "TOK_ENDEXPR", "TOK_OPENPAR", "TOK_CLOSEPAR", "TOK_OPENBR",
  "TOK_CLOSEBR", "TOK_OPENSQ", "TOK_CLOSESQ", "TOK_DOT", "TOK_DOUBLEDOT",
  "TOK_ROM_DECL", "TOK_INT_DECL", "TOK_FLOAT_DECL", "TOK_FOR_DECL",
  "TOK_WHILE_DECL", "TOK_DO_DECL", "TOK_ROM_CONST", "TOK_INT_CONST",
  "TOK_FLOAT_CONST", "TOK_PRINT", "TOK_READ", "TOK_BREAK", "TOK_CONTINUE",
  "TOK_GOTO", "TOK_STRUCT", "TOK_UNION", "TOK_SWITCH", "TOK_CASE",
  "TOK_DEFAULT", "TMP_VAR", "LABEL", "NAME", "INT_CONST", "FLOAT_CONST",
  "LITERAL", "IFFALSE", "IFTRUE", "ASSIGN", "OR", "AND", "XOR", "NOT",
  "INPUT", "OUTPUT", "GOTO", "CMP", "EXPR_ERROR", "STMNT_BLOCK_ERROR",
  "IF_WITHOUT_ELSE", "TOK_U_LOGICAL", "TOK_U_ARITHMETICAL", "'('", "')'",
  "$accept", "start", "declaration_list", "stmnt_list",
  "stmnt_block_start", "$@1", "stmnt_block", "$@2", "$@3", "$@4", "stmnt",
  "declaration_stmt", "struct_def", "struct_head", "struct_type",
  "struct_body", "struct_tail", "print_stmt", "read_stmt", "if_stmt",
  "loop_decl", "loop_while_expr", "loop_for_expr", "instruction_body",
  "type", "type_name", "left_assign_expr", "assignment", "expr", "array",
  "struct_item", "identifier", "num_const", "switch_stmt", "switch_head",
  "switch_tail", "case_list", "case_stmt", "case_head", "case_body",
  "default", "default_head", "default_body", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    69,    68,    71,    70,    70,    72,    70,    73,    70,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    76,    77,    78,    78,
      79,    80,    81,    81,    81,    81,    82,    83,    83,    83,
      84,    84,    84,    85,    86,    87,    87,    88,    89,    89,
      89,    89,    90,    90,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    94,    95,
      96,    96,    96,    97,    97,    98,    99,   100,   100,   101,
     102,   103,   103,   103,   104,   105,   106,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     3,     2,     1,
       2,     0,     2,     0,     4,     3,     0,     4,     0,     5,
       2,     2,     2,     3,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     1,     1,
       2,     1,     5,     2,     4,     5,     5,     5,     7,     4,
       3,     3,     5,     3,     7,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     3,     2,     2,
       3,     3,     3,     3,     0,     4,     2,     3,     3,     2,
       1,     1,     1,     4,     3,     5,     1,     1,     2,     2,
       3,     1,     1,     1,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    74,     0,     0,     0,     0,    58,    60,    59,     0,
       0,     0,    81,    80,    82,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     4,     5,     9,     0,    35,     0,
       0,    27,    28,    24,    25,     0,    74,     0,     0,     0,
      63,    65,    66,    26,     0,     0,    22,    79,    74,    69,
      65,    68,     0,     0,     0,     0,     0,     0,    74,    11,
       0,    55,    56,     0,    43,     0,     0,     0,    31,    30,
      33,    32,     0,     0,     1,     3,     0,    10,     8,     6,
       0,     0,    37,    34,    57,     0,    29,    21,     0,     0,
       0,    20,     0,     0,     0,    87,     0,    76,     0,     0,
      72,    73,     0,    50,     0,    51,    12,     0,     0,     0,
       0,     0,     0,    62,    23,     0,     7,    61,    40,    41,
      36,    64,    70,    71,    67,    78,     0,    86,     0,    84,
       0,     0,    88,    92,    91,    93,    89,    77,    74,    49,
       0,     0,    53,    16,     0,    15,    13,     0,     0,    44,
       0,     0,     0,    90,    95,    83,    97,    96,    94,    75,
      47,     0,    17,    18,    14,    52,    42,    45,    46,    85,
       0,     0,    19,    48,     0,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    60,   106,    61,   164,   162,   172,
      62,    27,    28,    29,    30,    81,   120,    31,    32,    33,
      34,    57,    55,    63,    35,    36,    37,    38,    39,    47,
      40,    50,    42,    43,    44,   129,    94,    95,    96,   136,
     130,   131,   158
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -90
static const yytype_int16 yypact[] =
{
     248,    23,   109,   109,     1,   109,   -90,   -90,   -90,     2,
       7,   283,   -90,   -90,   -90,    21,    10,    44,    46,    29,
     -90,   -90,    20,    38,   248,   347,   -90,    47,   -90,    24,
      43,   -90,   -90,   -90,   -90,    49,    36,    58,    62,   120,
     -90,    25,   -90,   -90,    35,   126,   -90,   -90,    36,    76,
     -90,    76,   109,   322,   109,   283,   109,   283,    34,   -90,
     248,   -90,   -90,    60,   -90,   109,   109,    83,   -90,   -90,
     -90,   -90,    78,   109,   -90,   347,    86,   -90,   -90,   -90,
      14,    79,   -90,   -90,   -90,   109,   -90,   -90,   109,   109,
     109,   -90,    97,   109,   -10,    35,   181,   -90,    61,   354,
     -90,   -90,   156,   -90,   137,   -90,   -90,   213,   149,     7,
     378,     8,    99,    95,   -90,   383,   -90,   -90,    14,   -90,
     -90,    89,    76,    76,    89,   -90,    72,   -90,   100,   -90,
     103,   283,   -90,   -90,   -90,   -90,   -90,   -90,    36,   -90,
     283,   109,   -90,   -90,   315,   -90,   -90,   111,   114,   -90,
     129,   131,   133,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     104,   220,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     283,   109,   -90,   -90,   385,   -90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -90,   -90,   -50,   -19,   -90,   -90,   -89,   -90,   -90,   -90,
       3,   -16,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,    37,   -90,   -53,   -90,   -90,    82,   -90,    16,   -35,
     -90,     0,   -90,   -90,   -90,    33,    71,    73,   -90,   -90,
     -90,   -90,   -90
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      41,    84,   103,    26,   105,    75,   127,   133,    76,   149,
     107,    41,    88,    89,    52,    54,    90,   117,    49,    51,
      56,    53,    64,    67,    41,    41,   -61,    26,    77,   128,
     118,   -62,    72,    73,    65,     6,     7,     8,    74,    80,
      45,   108,   156,    46,    92,    68,    82,    70,    78,    20,
      21,    45,    83,    45,    46,    41,    69,    41,    71,    79,
      41,    98,   137,    26,    85,    88,    89,   113,    99,    90,
     102,   150,   104,    93,    86,    41,    88,    89,    77,   138,
      90,   110,   111,    66,    90,   109,    48,   160,   144,   115,
     114,    76,   153,    88,    89,   119,    41,    90,   116,   134,
     125,   121,    76,   159,   122,   123,   124,    41,    41,   126,
      26,    77,    48,   151,    92,   170,     2,   173,     3,   127,
     154,    87,     5,   165,    88,    89,   166,    97,    90,    48,
     167,    41,    91,     2,   157,     3,    12,    13,    14,     5,
      41,    88,    89,   168,    41,    90,   147,    77,   169,   112,
     145,   142,    58,    12,    13,    14,     2,   161,     3,     4,
      88,    89,     5,   155,    90,   146,   132,     0,   141,   135,
      41,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    58,     0,    22,   174,     2,     0,
       3,     4,     0,     0,     5,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     1,     0,    22,    93,
       2,     0,     3,     4,    88,    89,     5,     0,    90,   143,
       0,     0,   171,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     1,     0,     0,     0,     2,     0,     3,     4,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    58,     0,     0,     0,
       2,     0,     3,     4,     0,     0,     5,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    58,     0,
      22,     0,     2,   100,     3,     4,    88,    89,     5,     0,
      90,   163,     0,     0,     0,     0,   101,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      58,     0,    22,     0,     2,   139,     3,     4,    88,    89,
       5,     0,    90,     0,     0,     0,     0,     0,   140,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    88,    89,    22,     0,    90,    88,    89,    88,
      89,    90,   148,    90,     0,     0,     0,   152,     0,   175
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-90))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    36,    55,     0,    57,    24,    16,    96,    24,     1,
      60,    11,     4,     5,    13,    13,     8,     3,     2,     3,
      13,     5,     1,    13,    24,    25,     3,    24,    25,    39,
      80,     6,     3,    13,    13,    21,    22,    23,     0,    15,
      17,    60,   131,    20,    19,     1,     3,     1,     1,    35,
      36,    17,     3,    17,    20,    55,    12,    57,    12,    12,
      60,    45,     1,    60,     6,     4,     5,    67,    52,     8,
      54,    63,    56,    38,    12,    75,     4,     5,    75,    18,
       8,    65,    66,    62,     8,    25,     3,   140,   107,    73,
      12,   107,    20,     4,     5,    16,    96,     8,    12,    96,
       3,    85,   118,   138,    88,    89,    90,   107,   108,    93,
     107,   108,     3,    14,    19,    11,     7,   170,     9,    16,
      20,     1,    13,    12,     4,     5,    12,     1,     8,     3,
       1,   131,    12,     7,   131,     9,    27,    28,    29,    13,
     140,     4,     5,    12,   144,     8,   109,   144,    15,    67,
       1,    14,     3,    27,    28,    29,     7,   141,     9,    10,
       4,     5,    13,   130,     8,    16,    95,    -1,    12,    96,
     170,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     3,    -1,    37,   171,     7,    -1,
       9,    10,    -1,    -1,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     3,    -1,    37,    38,
       7,    -1,     9,    10,     4,     5,    13,    -1,     8,    16,
      -1,    -1,    12,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     3,    -1,    -1,    -1,     7,    -1,     9,    10,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     3,    -1,    -1,    -1,
       7,    -1,     9,    10,    -1,    -1,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     3,    -1,
      37,    -1,     7,     1,     9,    10,     4,     5,    13,    -1,
       8,    16,    -1,    -1,    -1,    -1,    14,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       3,    -1,    37,    -1,     7,     1,     9,    10,     4,     5,
      13,    -1,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     4,     5,    37,    -1,     8,     4,     5,     4,
       5,     8,    14,     8,    -1,    -1,    -1,    14,    -1,    14
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    10,    13,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    65,    66,    67,    74,    75,    76,    77,
      78,    81,    82,    83,    84,    88,    89,    90,    91,    92,
      94,    95,    96,    97,    98,    17,    20,    93,     3,    92,
      95,    92,    13,    92,    13,    86,    13,    85,     3,    15,
      68,    70,    74,    87,     1,    13,    62,    13,     1,    12,
       1,    12,     3,    13,     0,    67,    75,    74,     1,    12,
      15,    79,     3,     3,    93,     6,    12,     1,     4,     5,
       8,    12,    19,    38,   100,   101,   102,     1,    92,    92,
       1,    14,    92,    87,    92,    87,    69,    66,    67,    25,
      92,    92,    90,    95,    12,    92,    12,     3,    66,    16,
      80,    92,    92,    92,    92,     3,    92,    16,    39,    99,
     104,   105,   100,    70,    74,   101,   103,     1,    18,     1,
      14,    12,    14,    16,    67,     1,    16,    85,    14,     1,
      63,    14,    14,    20,    20,    99,    70,    74,   106,    93,
      87,    92,    72,    16,    71,    12,    12,     1,    12,    15,
      11,    12,    73,    87,    92,    14
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { 
		(yyval._node) = NULL; 
	}
    break;

  case 3:

    {
		PtNode *ptNode = createPtNode("start");
		setPtNodeChildren(ptNode, 1, (yyvsp[(2) - (2)]._node)->ptNode);
		astTree = (yyvsp[(2) - (2)]._node)->astNode;
		ptTree = ptNode;
	}
    break;

  case 4:

    {
		(yyval._node) = NULL;
	}
    break;

  case 5:

    {
		PtNode *ptNode = createPtNode("start");
		setPtNodeChildren(ptNode, 1, (yyvsp[(1) - (1)]._node)->ptNode);
		astTree = (yyvsp[(1) - (1)]._node)->astNode;
		ptTree = ptNode;
	}
    break;

  case 6:

    {
		(yyval._node) = NULL;
	}
    break;

  case 7:

    {
		(yyval._node) = NULL;
	}
    break;

  case 8:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_SEPARATOR, (yylsp[(2) - (2)])),
				nullptr);
	}
    break;

  case 9:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 10:

    {
		(yyval._node) = addStmntToBlock((yyvsp[(1) - (2)]._node), (yyvsp[(2) - (2)]._node));
	}
    break;

  case 11:

    {TBlockContext::Push();}
    break;

  case 12:

    {
        (yyval._node) = (yyvsp[(1) - (2)]._node);
      }
    break;

  case 13:

    {TBlockContext::Pop();}
    break;

  case 14:

    {
		(yyval._node) = createNode((yyvsp[(2) - (4)]._node)->astNode, 
				createPtNodeWithChildren("stmnt_block", 3, (yyvsp[(1) - (4)]._node)->ptNode, (yyvsp[(2) - (4)]._node)->ptNode, (yyvsp[(3) - (4)]._node)->ptNode));
	}
    break;

  case 15:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_CLOSE_BRACE, (yylsp[(3) - (3)])), 
				nullptr);
	}
    break;

  case 16:

    {TBlockContext::Pop();}
    break;

  case 17:

    {
		(yyval._node) = createNode(nullptr, 
				createPtNodeWithChildren("stmnt_block", 2, (yyvsp[(1) - (4)]._node)->ptNode, (yyvsp[(3) - (4)]._node)->ptNode));
	}
    break;

  case 18:

    {TBlockContext::Pop();}
    break;

  case 19:

    {
		(yyval._node) = createNode((yyvsp[(3) - (5)]._node)->astNode, 
				createPtNodeWithChildren("stmnt_block", 3, (yyvsp[(1) - (5)]._node)->ptNode, (yyvsp[(3) - (5)]._node)->ptNode, (yyvsp[(4) - (5)]._node)->ptNode));
	}
    break;

  case 20:

    {
		(yyval._node) = createNode(new StatementAstNode((yyvsp[(1) - (2)]._node)->astNode), 
				createPtNodeWithChildren("stmnt", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 21:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_SEPARATOR, (yylsp[(2) - (2)])), 
				nullptr);
	}
    break;

  case 22:

    {
		AstNode *astNode;
		char *labelName = (yyvsp[(1) - (2)]._node)->ptNode->text;

		if(Context.IsLabelDeclared(labelName))
		{
			astNode = new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, LABEL_IS_ALREADY_DECLARED, (yylsp[(1) - (2)]));
		}
		else
		{
			TLabel* label = Context.GetLabel(labelName);
			if(label == NULL)
			{
				label = Context.MakeLabel(labelName);
			}
			label->SetDeclaredLine(((yylsp[(1) - (2)])).first_line);
			astNode = new LabelAstNode(label);
		}

		(yyval._node) = createNode(astNode, 
				createPtNodeWithChildren("stmnt", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 23:

    {
		char *labelName = (yyvsp[(2) - (3)]._node)->ptNode->text;
		TLabel* label =  Context.GetLabel(labelName);
		
		if(label == NULL)
		{
			label = Context.MakeLabel(labelName);
		}
		label->SetUsedLine(((yylsp[(1) - (3)])).first_line);

		(yyval._node) = createNode(new OperatorAstNode(OP_GOTO, new LabelAstNode(label)), 
				createPtNodeWithChildren("stmnt", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 30:

    {
		AstNode *astNode;
		 
		if(!Context.CanUseBreak())
		{
			astNode = new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, UNEXPECTED_BREAK_ERROR, (yylsp[(1) - (2)]));
		}
		else
		{
			TOperator *op = Context.OperatorStackTop();
			TLabel *EndLabel;
			switch(op->GetType())
			{
			case OT_FOR:
			case OT_WHILE:
			case OT_DO_WHILE:
				EndLabel = ((TSimpleOperator *)op)->GetOutLabel(); 
				break;
			case OT_SWITCH:
				EndLabel = ((TSwitchOperator *)op)->GetEndLabel();
				break;
			}
			astNode = new OperatorAstNode(OP_BREAK, new LabelAstNode(EndLabel));
		}
		(yyval._node) = createNode(astNode, 
				createPtNodeWithChildren("stmnt", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 31:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_SEPARATOR, (yylsp[(2) - (2)])), 
				nullptr);
	}
    break;

  case 32:

    {
		AstNode *astNode;
		if(!Context.CanUseContinue())
		{
			astNode = new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, UNEXPECTED_CONTINUE_ERROR, (yylsp[(1) - (2)]));
		}
		else
		{
			TOperator *op = Context.OperatorStackTop();
			TLabel *StartLabel;
			switch(op->GetType())
			{
			case OT_FOR:
			case OT_WHILE:
			case OT_DO_WHILE:
				StartLabel = ((TSimpleOperator *)op)->GetEntranceLabel(); 
				break;
			}
			astNode = new OperatorAstNode(OP_CONTINUE, new LabelAstNode(StartLabel));
		}
		(yyval._node) = createNode(astNode, 
				createPtNodeWithChildren("stmnt", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 33:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_SEPARATOR, (yylsp[(2) - (2)])), 
				nullptr);
	}
    break;

  case 34:

    {
		Context.DeclVar((yyvsp[(2) - (2)]._node)->ptNode->text, (yyvsp[(1) - (2)]._node)->astNode->GetResultType(), (yylsp[(2) - (2)]));

		(yyval._node) = createNode(new DeclIDAstNode((yyvsp[(1) - (2)]._node)->astNode->GetResultType()), 
				createPtNodeWithChildren("stmnt", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 36:

    {
		(yyval._node) = (yyvsp[(1) - (3)]._node);
	}
    break;

  case 37:

    {
		AstNode *verboseNode = nullptr;
		// ��������� ����������� ���������������� ����� - ������
		if(Context.OnUserTypeDefinition())
			verboseNode = new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EMBEDDED_USER_TYPE_DEFINITION, (yylsp[(1) - (2)]));
		// �������� �� ��������������� 
		else if(Context.IsTypeDefined((yyvsp[(2) - (2)]._node)->ptNode->text))
			verboseNode = new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, TYPE_REDEFINITION_ERROR, (yylsp[(2) - (2)]));
		else
		{
			// ��������� ��������� � ����
			auto t = (StructType*)(yyvsp[(1) - (2)]._node);
			t->SetTypeName((yyvsp[(2) - (2)]._node)->ptNode->text);
			Context.PushUserType(t);
		}
		// NOTE: $_struct does NOT return Node* variable!
		(yyval._node) = createNode(verboseNode, 
				createPtNodeWithChildren("struct", 1, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 38:

    {
		// NOTE: No actual Nodes here!
		(yyval._node) = (Node*)new StructType();
	}
    break;

  case 39:

    {
		// NOTE: No actual Nodes here!
		(yyval._node) = (Node*)new UnionType();
	}
    break;

  case 40:

    {
		(yyval._node) = NULL;
	}
    break;

  case 41:

    {
		// ������������ ��������� �� �����
		if(Context.OnUserTypeDefinition())
		{
			// ���������� � ������� �����
			Context.AddUserTypeToTable(Context.PopUserType());
		}
		(yyval._node) = NULL;
	}
    break;

  case 42:

    {
		(yyval._node) = createNode(new OperatorAstNode(OP_OUTPUT, (yyvsp[(3) - (5)]._node)->astNode), 
				createPtNodeWithChildren("stmnt", 5, (yyvsp[(1) - (5)]._node)->ptNode, (yyvsp[(2) - (5)]._node)->ptNode, (yyvsp[(3) - (5)]._node)->ptNode, (yyvsp[(4) - (5)]._node)->ptNode, (yyvsp[(5) - (5)]._node)->ptNode)); 
	}
    break;

  case 43:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_OPEN_PARANTHESIS, (yylsp[(2) - (2)])),
				nullptr);
	}
    break;

  case 44:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_CLOSE_PARANTHESIS, (yylsp[(4) - (4)])),
				nullptr);
	}
    break;

  case 45:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_SEPARATOR, (yylsp[(5) - (5)])),
				nullptr);
	}
    break;

  case 46:

    {
		(yyval._node) = createNode(new OperatorAstNode(OP_INPUT, (yyvsp[(2) - (5)]._node)->astNode),
				createPtNodeWithChildren("stmnt", 5, (yyvsp[(1) - (5)]._node)->ptNode, (yyvsp[(2) - (5)]._node)->ptNode, (yyvsp[(3) - (5)]._node)->ptNode, (yyvsp[(4) - (5)]._node)->ptNode, (yyvsp[(5) - (5)]._node)->ptNode)); 
	}
    break;

  case 47:

    {
		AssertOneOfTypes((yyvsp[(3) - (5)]._node), (yylsp[(3) - (5)]), 1, BOOL_TYPE);

		(yyval._node) = createNode(new ConditionalAstNode((yyvsp[(3) - (5)]._node)->astNode, (yyvsp[(5) - (5)]._node)->astNode), 
				createPtNodeWithChildren("stmnt", 5, (yyvsp[(1) - (5)]._node)->ptNode, (yyvsp[(2) - (5)]._node)->ptNode, (yyvsp[(3) - (5)]._node)->ptNode, (yyvsp[(4) - (5)]._node)->ptNode, (yyvsp[(5) - (5)]._node)->ptNode));
	}
    break;

  case 48:

    {
		AssertOneOfTypes((yyvsp[(3) - (7)]._node), (yylsp[(3) - (7)]), 1, BOOL_TYPE);

		(yyval._node) = createNode(new ConditionalAstNode((yyvsp[(3) - (7)]._node)->astNode, (yyvsp[(5) - (7)]._node)->astNode, (yyvsp[(7) - (7)]._node)->astNode), 
				createPtNodeWithChildren("stmnt", 7, (yyvsp[(1) - (7)]._node)->ptNode, (yyvsp[(2) - (7)]._node)->ptNode, (yyvsp[(3) - (7)]._node)->ptNode, (yyvsp[(4) - (7)]._node)->ptNode,
					(yyvsp[(5) - (7)]._node)->ptNode, (yyvsp[(6) - (7)]._node)->ptNode, (yyvsp[(7) - (7)]._node)->ptNode));
	}
    break;

  case 49:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_CLOSE_PARANTHESIS, (yylsp[(4) - (4)])),
				nullptr);
	}
    break;

  case 50:

    {
		LoopConditionAstNode *condition = dynamic_cast<LoopConditionAstNode *>((yyvsp[(2) - (3)]._node)->astNode);

		(yyval._node) = createNode(new LoopAstNode(condition, (yyvsp[(3) - (3)]._node)->astNode), 
				createPtNodeWithChildren("loop", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 51:

    {
		LoopConditionAstNode *condition = dynamic_cast<LoopConditionAstNode *>((yyvsp[(2) - (3)]._node)->astNode);

		(yyval._node) = createNode(new LoopAstNode(condition, (yyvsp[(3) - (3)]._node)->astNode), 
				createPtNodeWithChildren("loop", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 52:

    {
		LoopConditionAstNode *condition = dynamic_cast<LoopConditionAstNode *>((yyvsp[(4) - (5)]._node)->astNode);

		(yyval._node) = createNode(new LoopAstNode(condition, (yyvsp[(2) - (5)]._node)->astNode, true), 
				createPtNodeWithChildren("loop", 5, (yyvsp[(1) - (5)]._node)->ptNode, (yyvsp[(2) - (5)]._node)->ptNode, (yyvsp[(3) - (5)]._node)->ptNode, (yyvsp[(4) - (5)]._node)->ptNode, (yyvsp[(5) - (5)]._node)->ptNode));
	}
    break;

  case 53:

    {
		(yyval._node) = createNode(new LoopConditionAstNode(nullptr, (yyvsp[(2) - (3)]._node)->astNode, nullptr), 
				createPtNodeWithChildren("loop_statements", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 54:

    {
		(yyval._node) = createNode(new LoopConditionAstNode((yyvsp[(2) - (7)]._node)->astNode, (yyvsp[(4) - (7)]._node)->astNode, (yyvsp[(6) - (7)]._node)->astNode), 
				createPtNodeWithChildren("loop_statements", 7, (yyvsp[(1) - (7)]._node)->ptNode, (yyvsp[(2) - (7)]._node)->ptNode,
					(yyvsp[(3) - (7)]._node)->ptNode, (yyvsp[(4) - (7)]._node)->ptNode, (yyvsp[(5) - (7)]._node)->ptNode, (yyvsp[(6) - (7)]._node)->ptNode, (yyvsp[(7) - (7)]._node)->ptNode));
	}
    break;

  case 55:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 56:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 57:

    {
		DimensionAstNode *dimNode = dynamic_cast<DimensionAstNode*>((yyvsp[(2) - (2)]._node)->astNode);
		if (dimNode->GetExpr() == nullptr)
		{
			(yyval._node) = (yyvsp[(1) - (2)]._node);
		}
		else
		{
			(yyval._node) = nullptr;

			std::vector<int> sizes;
			for (DimensionAstNode *cur = dimNode; cur != nullptr && cur->GetNextDim() != nullptr; )
			{
				auto numValueNode = dynamic_cast<NumValueAstNode*>(cur->GetExpr());
				if (numValueNode == nullptr && (yyval._node) == nullptr)
				{
					(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, INVALID_ARRAY_DECLARATION, (yylsp[(2) - (2)])),
							nullptr);
				}
				sizes.emplace_back(numValueNode->ToInt());
				
				// we will now delete the DimensionAstNode's as we no more need them
				// as we converted the info to a more comfortable vector format
				AstNode *del = cur;
				cur = cur->GetNextDim();
				delete del;
			}	

			if ((yyval._node) == nullptr) // IF there were no errors...
			{
				(yyval._node) = createNode(new DeclIDAstNode(new ArrayType((yyvsp[(1) - (2)]._node)->astNode->GetResultType()->Clone(), sizes)), 
						createPtNodeWithChildren("array decl", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
			}

			// we will also delete the original DeclIDAstNode as we only need type info
			delete (yyvsp[(1) - (2)]._node)->astNode;
		}
	}
    break;

  case 58:

    {
        (yyval._node) = createNode(new DeclIDAstNode(new RomanType()), 
				createPtNodeWithChildren("type", 1, (yyvsp[(1) - (1)]._node)->ptNode));
	}
    break;

  case 59:

    {
        (yyval._node) = createNode(new DeclIDAstNode(new FloatType()), 
				createPtNodeWithChildren("type", 1, (yyvsp[(1) - (1)]._node)->ptNode));
	}
    break;

  case 60:

    {
        (yyval._node) = createNode(new DeclIDAstNode(new IntType()), 
				createPtNodeWithChildren("type", 1, (yyvsp[(1) - (1)]._node)->ptNode));
	}
    break;

  case 61:

    {
		// Token for the user-defined type

		StructType *typeRef = Context.GetUserType((yyvsp[(1) - (1)]._node)->ptNode->text);
		if(typeRef == nullptr)
		{
			(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, UNDECLARED_TYPE, (yylsp[(1) - (1)])),
					nullptr);
		}
		else
		{
			(yyval._node) = createNode(new DeclIDAstNode(typeRef), 
					createPtNodeWithChildren("type", 1, (yyvsp[(1) - (1)]._node)->ptNode));
		}
	}
    break;

  case 62:

    {
		TVariable *var = Context.getVar((yyvsp[(1) - (1)]._node)->ptNode->firstChild->text, 1, NULL, (yylsp[(1) - (1)]));
		var->SetInitialized(true);
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 64:

    {
		BaseTypeInfo *type = (yyvsp[(1) - (3)]._node)->astNode->GetResultType();
		AssertOneOfTypes((yyvsp[(3) - (3)]._node), (yylsp[(3) - (3)]), 1, type->getID());

		(yyval._node) = createNode(new OperatorAstNode((yyvsp[(2) - (3)]._node)->ptNode->text, (yyvsp[(1) - (3)]._node)->astNode, (yyvsp[(3) - (3)]._node)->astNode), 
				createPtNodeWithChildren("expr", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 66:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 67:

    {
		AssertOneOfTypes((yyvsp[(1) - (3)]._node), (yylsp[(1) - (3)]), 4, BITS_TYPE, INT_TYPE, FLOAT_TYPE, ROM_TYPE);
		AssertOneOfTypes((yyvsp[(3) - (3)]._node), (yylsp[(3) - (3)]), 4, BITS_TYPE, INT_TYPE, FLOAT_TYPE, ROM_TYPE);
		
		(yyval._node) = createNode(new OperatorAstNode((yyvsp[(2) - (3)]._node)->ptNode->text, (yyvsp[(1) - (3)]._node)->astNode, (yyvsp[(3) - (3)]._node)->astNode, new VarAstNode(true, Context.GenerateNewTmpVar(new BoolType()))), 
				createPtNodeWithChildren("expr", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 68:

    {
		AssertOneOfTypes((yyvsp[(2) - (2)]._node), (yylsp[(2) - (2)]), 4, BITS_TYPE, INT_TYPE, FLOAT_TYPE, ROM_TYPE);

		(yyval._node) = createNode(new OperatorAstNode((yyvsp[(1) - (2)]._node)->ptNode->text, (yyvsp[(2) - (2)]._node)->astNode, nullptr, new VarAstNode(true, Context.GenerateNewTmpVar(new BoolType()))), 
				createPtNodeWithChildren("expr", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 69:

    {
		AssertOneOfTypes((yyvsp[(2) - (2)]._node), (yylsp[(2) - (2)]), 4, BITS_TYPE, INT_TYPE, FLOAT_TYPE, ROM_TYPE);

		(yyval._node) = createNode(new OperatorAstNode((yyvsp[(1) - (2)]._node)->ptNode->text, (yyvsp[(2) - (2)]._node)->astNode, new VarAstNode(true, Context.GenerateNewTmpVar((yyvsp[(2) - (2)]._node)->astNode->GetResultType()->Clone()))), 
				createPtNodeWithChildren("expr", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 70:

    {
		AssertOneOfTypes((yyvsp[(1) - (3)]._node), (yylsp[(1) - (3)]), 4, BITS_TYPE, INT_TYPE, FLOAT_TYPE, ROM_TYPE);
		AssertOneOfTypes((yyvsp[(3) - (3)]._node), (yylsp[(3) - (3)]), 4, BITS_TYPE, INT_TYPE, FLOAT_TYPE, ROM_TYPE);

		(yyval._node) = createNode(new OperatorAstNode((yyvsp[(2) - (3)]._node)->ptNode->text, (yyvsp[(1) - (3)]._node)->astNode, (yyvsp[(3) - (3)]._node)->astNode, new VarAstNode(true, Context.GenerateNewTmpVar((yyvsp[(3) - (3)]._node)->astNode->GetResultType()->Clone()))), 
				createPtNodeWithChildren("expr", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 71:

    {
		AssertOneOfTypes((yyvsp[(1) - (3)]._node), (yylsp[(1) - (3)]), 4, BITS_TYPE, ROM_TYPE, INT_TYPE, FLOAT_TYPE);
		AssertOneOfTypes((yyvsp[(3) - (3)]._node), (yylsp[(3) - (3)]), 4, BITS_TYPE, ROM_TYPE, INT_TYPE, FLOAT_TYPE);

		(yyval._node) = createNode(new OperatorAstNode((yyvsp[(2) - (3)]._node)->ptNode->text, (yyvsp[(1) - (3)]._node)->astNode, (yyvsp[(3) - (3)]._node)->astNode, new VarAstNode(true, Context.GenerateNewTmpVar(new BoolType()))), 
				createPtNodeWithChildren("expr", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 72:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_CLOSE_PARANTHESIS, (yylsp[(3) - (3)])),
				nullptr);
	}
    break;

  case 73:

    {
		(yyval._node) = createNode((yyvsp[(2) - (3)]._node)->astNode, 
				createPtNodeWithChildren("expr", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 74:

    {
		(yyval._node) = createNode(new DimensionAstNode(nullptr, nullptr, nullptr), 
				createPtNode("array_end"));
	}
    break;

  case 75:

    {
		AstNode *astNode = new DimensionAstNode(
			(yyvsp[(2) - (4)]._node)->astNode->GetResultType(), 
			(yyvsp[(2) - (4)]._node)->astNode,
			dynamic_cast<DimensionAstNode*>((yyvsp[(4) - (4)]._node)->astNode));
		PtNode *ptNode = createPtNodeWithChildren("array_dimension", 4, (yyvsp[(4) - (4)]._node)->ptNode, (yyvsp[(1) - (4)]._node)->ptNode, (yyvsp[(2) - (4)]._node)->ptNode, (yyvsp[(3) - (4)]._node)->ptNode);
        
		(yyval._node) = createNode(astNode, ptNode);
	}
    break;

  case 76:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, INVALID_ARRAY_ITEM, (yylsp[(2) - (2)])),
				nullptr);
	}
    break;

  case 77:

    {
		(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, EXPECTED_CLOSE_BRACKET, (yylsp[(3) - (3)])),
				nullptr);
	}
    break;

  case 78:

    {
		AssertOneOfTypes((yyvsp[(1) - (3)]._node), (yylsp[(1) - (3)]), 2, STRUCT_TYPE, UNION_TYPE);
		//if(FALSE == CheckNodeTypeByTypeId($1, TYPE_STRUCT) 
		//	&& FALSE == CheckNodeTypeByTypeId($1, TYPE_UNION))
		//{
		//	yyerror(INVALID_STRUCT_FIELD_L_VALUE);
		//	$$ = ErrorNode();
		//}
		//else 

		auto astNode = dynamic_cast<VarAstNode*>((yyvsp[(1) - (3)]._node)->astNode);
		if (astNode == nullptr)
		{
			(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, UNDECLARED_STRUCT_FIELD, (yylsp[(3) - (3)])),
					nullptr);
		}
		else
		{
			StructType *varType = dynamic_cast<StructType*>(astNode->GetResultType());
			std::string fieldName((yyvsp[(3) - (3)]._node)->ptNode->text);

			if(!varType->IsFieldDefined(fieldName))
			{
				(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, UNDECLARED_STRUCT_FIELD, (yylsp[(3) - (3)])),
						nullptr);
			}
			else
			{
				StructType *s = varType;
				TVariable *fieldVar = s->GetField(fieldName);
				//AstNode *fieldNode = new VariableAstNode(false, field);

				(yyval._node) = createNode(new StructAddressAstNode(astNode, fieldVar),
						createPtNodeWithChildren("identifier", 3, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
			}
		}
	}
    break;

  case 79:

    {
		char *id_name = (yyvsp[(1) - (2)]._node)->ptNode->text;
		auto dimNode = dynamic_cast<DimensionAstNode*>((yyvsp[(2) - (2)]._node)->astNode);
		TVariable *val = Context.getVar(id_name, 1, dimNode, (yylsp[(1) - (2)]));
		AstNode *astNode;
		if (val)
		{
			// TODO [SV] 15.08.13 12:18: possible checks for array\non-array type equality
			if (dimNode->GetExpr() != nullptr)
				astNode = new ArrayAddressAstNode(new VarAstNode(false, val), dimNode);
			else
				astNode = new VarAstNode(false, val);
		}
		else
		{
			print_error("unknown identifier", (yylsp[(1) - (2)])); // I guess this would be better
			//astNode = new VarAstNode(id_name, VOID_TYPE, false, false, $ar_decl->astNode);
		}

		(yyval._node) = createNode(astNode, 
				createPtNodeWithChildren("identifier", 1, (yyvsp[(1) - (2)]._node)->ptNode));
	}
    break;

  case 80:

    {
		char *id = strdup((yyvsp[(1) - (1)]._node)->ptNode->text);

		(yyval._node) = createNode(new NumValueAstNode((yyvsp[(1) - (1)]._node)->ptNode->text, new IntType()), 
				createPtNodeWithChildren("num_const", 1, (yyvsp[(1) - (1)]._node)->ptNode));
	}
    break;

  case 81:

    {
		char *id = strdup((yyvsp[(1) - (1)]._node)->ptNode->text);

		(yyval._node) = createNode(new NumValueAstNode((yyvsp[(1) - (1)]._node)->ptNode->text, new RomanType()), 
				createPtNodeWithChildren("num_const", 1, (yyvsp[(1) - (1)]._node)->ptNode));
	}
    break;

  case 82:

    {
		char *id = strdup((yyvsp[(1) - (1)]._node)->ptNode->text);

		(yyval._node) = createNode(new NumValueAstNode((yyvsp[(1) - (1)]._node)->ptNode->text, new FloatType()), 
				createPtNodeWithChildren("num_const", 1, (yyvsp[(1) - (1)]._node)->ptNode));
	}
    break;

  case 83:

    {
		(yyval._node) = createNode(new SwitchAstNode((yyvsp[(1) - (4)]._node)->astNode, (yyvsp[(2) - (4)]._node)->astNode, (yyvsp[(3) - (4)]._node)->astNode),
				createPtNodeWithChildren("switch_stmt", 3, (yyvsp[(1) - (4)]._node)->ptNode, (yyvsp[(2) - (4)]._node)->ptNode, (yyvsp[(3) - (4)]._node)->ptNode, (yyvsp[(4) - (4)]._node)->ptNode));
	}
    break;

  case 84:

    {
		(yyval._node) = createNode(new SwitchAstNode((yyvsp[(1) - (3)]._node)->astNode, (yyvsp[(2) - (3)]._node)->astNode, nullptr),
				createPtNodeWithChildren("switch_stmt", 2, (yyvsp[(1) - (3)]._node)->ptNode, (yyvsp[(2) - (3)]._node)->ptNode, (yyvsp[(3) - (3)]._node)->ptNode));
	}
    break;

  case 85:

    {
		//AstNode *astNode;
		AssertOneOfTypes((yyvsp[(3) - (5)]._node), (yylsp[(3) - (5)]), 1, INT_TYPE);

		if((yyvsp[(3) - (5)]._node)->astNode->GetResultType()->getID() != INT_TYPE)
		{
			Context.OperatorStackPush(new TSwitchOperator(nullptr, 0, 0));

			(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, INVALID_SWITCH_KEY_TYPE, (yylsp[(3) - (5)])),
					nullptr);
		}
		else
		{
			TLabel 
				*controlFLowLabel = Context.GenerateNewLabel(),
				*end = Context.GenerateNewLabel();
			TSwitchOperator *switchOp = new TSwitchOperator((yyvsp[(3) - (5)]._node)->astNode, controlFLowLabel, end);
			Context.OperatorStackPush(switchOp);
			(yyval._node) = (yyvsp[(3) - (5)]._node);
		}
	}
    break;

  case 86:

    {
		delete Context.OperatorStackPop();
		// TODO: On-switch-end operations
		(yyval._node) = createNode(nullptr,
				createPtNodeWithChildren("switch_tail", 1, (yyvsp[(1) - (1)]._node)->ptNode));
	}
    break;

  case 87:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 88:

    {
		(yyval._node) = createNode(new OperatorAstNode(OP_LIST, (yyvsp[(1) - (2)]._node)->astNode, (yyvsp[(2) - (2)]._node)->astNode),
				createPtNodeWithChildren("case_list", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 89:

    {
		(yyval._node) = createNode(new OperatorAstNode(OP_CASE, (yyvsp[(1) - (2)]._node)->astNode, (yyvsp[(2) - (2)]._node)->astNode),
				createPtNodeWithChildren("case_stmt", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 90:

    {
		//TODO: �������� �������� �����! ��� �� ����� �����������
		AssertOneOfTypes((yyvsp[(2) - (3)]._node), (yylsp[(2) - (3)]), 1, INT_TYPE);
		
		if(Context.IsRepeatedCaseKeyVal((yyvsp[(2) - (3)]._node)->astNode))
		{
			(yyval._node) = createNode(new VerboseAstNode(VerboseAstNode::LEVEL_ERROR, REPEATED_CASE_KEY_VALUE, (yylsp[(2) - (3)])),
					nullptr);
		}
		else
		{
			TSwitchOperator *switchOp = dynamic_cast<TSwitchOperator *>(Context.OperatorStackTop());
			TLabel *label = Context.GenerateNewLabel();
			TCaseOperator *caseOp = new TCaseOperator((yyvsp[(2) - (3)]._node)->astNode, label, switchOp);
			switchOp->AddCase(caseOp);
			(yyval._node) = (yyvsp[(2) - (3)]._node);
		}
		
	}
    break;

  case 91:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 92:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 93:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 94:

    {
		(yyval._node) = createNode(new OperatorAstNode(OT_DEFAULT, (yyvsp[(2) - (2)]._node)->astNode),
				createPtNodeWithChildren("default", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 95:

    {
		TSwitchOperator *switchOp = dynamic_cast<TSwitchOperator *>(Context.OperatorStackTop());
		TLabel *label = Context.GenerateNewLabel();
		TDefaultOperator *defOp = new TDefaultOperator(label);
		switchOp->AddDefaultOp(defOp);

		(yyval._node) = createNode(nullptr,
				createPtNodeWithChildren("default_head", 2, (yyvsp[(1) - (2)]._node)->ptNode, (yyvsp[(2) - (2)]._node)->ptNode));
	}
    break;

  case 96:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;

  case 97:

    {
		(yyval._node) = (yyvsp[(1) - (1)]._node);
	}
    break;



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
  *++yylsp = yyloc;

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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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





void yyerror(const char *message)
{
}

