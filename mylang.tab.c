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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "mylang.tab.c" /* yacc.c:339  */

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
    CLUST = 272,
    CLUSTER = 273,
    PROCESSOR = 274,
    ISA = 275,
    PROC_TYPE = 276,
    CLOCK_SPEED = 277,
    MEM1 = 278,
    MEM2 = 279,
    NAME = 280,
    TOPOLOGY = 281,
    LINK_BANDWIDTH = 282,
    LINK_CAPACITY = 283,
    LINK = 284,
    START_POINT = 285,
    END_POINT = 286,
    MEMORY_TYPE = 287,
    MEM_TYPE = 288,
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
    DREF_OP = 319,
    AND_OP = 320,
    OR_OP = 321,
    LE_OP = 322,
    GE_OP = 323,
    EQ_OP = 324,
    NE_OP = 325,
    SEMI_COLON = 326,
    LEFT_CURLY = 327,
    RIGHT_CURLY = 328,
    COMMA = 329,
    ASGN_OP = 330,
    LEFT_PARENTHESIS = 331,
    RIGHT_PARENTHESIS = 332,
    LEFT_BRACKET = 333,
    RIGHT_BRACKET = 334,
    DOT = 335,
    AMPERSAND = 336,
    NOT_OP = 337,
    BTW_NOT = 338,
    MINUS = 339,
    PLUS = 340,
    MUL_OP = 341,
    DIV_OP = 342,
    MOD_OP = 343,
    LESS_THAN = 344,
    GREATER_THAN = 345,
    XOR_OP = 346,
    BTW_OR = 347,
    INVALID = 348,
    MEMORY = 349,
    PROCESSORS = 350,
    DEREF_OP = 351,
    GET_CLOCK_SPEED = 352,
    MEM_TYPES = 353
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



/* Copy the second part of user declarations.  */

#line 214 "mylang.tab.c" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   902

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  410

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   102,   103,   106,   107,   108,   109,
     110,   114,   115,   119,   120,   121,   125,   126,   129,   130,
     133,   134,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   148,   149,   152,   153,   157,   158,   159,   160,   161,
     162,   165,   166,   167,   170,   171,   174,   175,   176,   179,
     180,   183,   184,   187,   188,   189,   192,   195,   196,   200,
     201,   204,   205,   208,   209,   212,   213,   216,   217,   218,
     221,   222,   223,   224,   225,   228,   229,   230,   233,   234,
     235,   238,   239,   240,   241,   244,   245,   246,   247,   250,
     251,   252,   253,   254,   255,   258,   259,   260,   261,   262,
     265,   266,   269,   270,   271,   272,   273,   276,   277,   278,
     279,   282,   283,   286,   287,   288,   289,   292,   293,   296,
     297,   300,   301,   304,   305,   308,   309,   310,   313,   316,
     317,   320,   321,   324,   325,   326,   327,   328,   329,   332,
     333,   336,   337,   340,   341,   344,   345,   348,   351,   352,
     355,   356,   359,   362,   363,   366,   367,   370,   371,   374,
     375,   378,   379,   382,   383,   386,   387,   388,   389,   390,
     391,   392,   395,   396,   399,   400,   401,   402,   405,   408,
     409,   410,   411,   414,   415,   416,   417,   418,   421,   422,
     423,   424,   427,   428,   429,   430
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CHAR", "CONTINUE", "ELSE",
  "FLOAT", "FOR", "IF", "INT", "RETURN", "VOID", "WHILE", "PROC", "LNK",
  "JB", "CLUST", "CLUSTER", "PROCESSOR", "ISA", "PROC_TYPE", "CLOCK_SPEED",
  "MEM1", "MEM2", "NAME", "TOPOLOGY", "LINK_BANDWIDTH", "LINK_CAPACITY",
  "LINK", "START_POINT", "END_POINT", "MEMORY_TYPE", "MEM_TYPE",
  "MEMORY_SIZE", "JOB", "JOB_ID", "FLOPS_REQUIRED", "DEADLINE",
  "MEM_REQUIRED", "AFFINITY", "RUN", "WAIT", "DISCARD_JOB", "STOP",
  "GET_AVAILABLE_MEMORY", "GET_JOB_AFFINITY", "GET_JOB_MEMORY",
  "GET_FLOPS", "GET_DEADLINE", "IS_RUNNING", "SUBMIT_JOBS",
  "GET_FLOPS_SPEED", "GET_PROC_TYPE", "IS_PROCESSOR", "GET_PROCESSOR",
  "MEM", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "RIGHT_OP", "LEFT_OP",
  "INC_OP", "DEC_OP", "DREF_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "SEMI_COLON", "LEFT_CURLY", "RIGHT_CURLY", "COMMA",
  "ASGN_OP", "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "LEFT_BRACKET",
  "RIGHT_BRACKET", "DOT", "AMPERSAND", "NOT_OP", "BTW_NOT", "MINUS",
  "PLUS", "MUL_OP", "DIV_OP", "MOD_OP", "LESS_THAN", "GREATER_THAN",
  "XOR_OP", "BTW_OR", "INVALID", "MEMORY", "PROCESSORS", "DEREF_OP",
  "GET_CLOCK_SPEED", "MEM_TYPES", "$accept", "Start", "Object_declaration",
  "Dec_specifier", "array_initialiser", "Function_declaration",
  "body_or_proto", "argument_list", "type_specifier", "pointer",
  "statement_list", "Statement", "Jump_statement", "Selection_statement",
  "Iteration_statement", "Expression_statement", "expression",
  "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "unary_operator", "postfix_expression", "array_expression",
  "primary_expression", "object_expression", "cluster_object",
  "proc_arr_arg", "cluster_list", "topology_arg", "link_band_arg",
  "link_cap_arg", "narp", "processor_object", "isa_args", "Clock_args",
  "mem_args", "memory", "link_object", "start_args", "end_args",
  "memory_object", "mem_type_args", "mem_size_args", "job_object",
  "job_id_args", "flops_args", "deadline_args", "mem_required_args",
  "affinity_args", "list", "function_expression",
  "argument_expression_list", "object_function", "memory_function",
  "job_function", "processor_function", "cluster_function", "job_list", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353
};
# endif

#define YYPACT_NINF -313

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-313)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     215,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,  -313,
      21,   215,    77,   215,   -61,  -313,  -313,    91,  -313,  -313,
     576,   117,   -40,  -313,   -61,  -313,  -313,     5,   107,   -13,
       7,    17,    25,    42,    44,   121,   136,   148,   102,   816,
     816,  -313,  -313,  -313,  -313,  -313,  -313,   152,   122,  -313,
    -313,    61,     8,   111,   153,   159,   -38,    87,   108,   133,
     147,   174,   816,   235,   198,   -40,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,   237,   576,   576,  -313,    29,   183,
     230,   212,   207,  -313,   -21,   291,   606,   696,   298,   209,
      55,   234,   396,   160,   102,  -313,  -313,   -10,   576,  -313,
     816,   816,   816,   816,   816,   816,   816,   816,   816,   816,
     816,   816,   816,   816,   816,   816,   816,   816,   576,  -313,
    -313,  -313,   237,   232,   231,    63,   106,  -313,  -313,  -313,
     336,  -313,   233,   230,  -313,   298,   239,   252,   253,  -313,
     256,   259,  -313,  -313,   282,   283,  -313,   285,   286,   280,
    -313,   287,   288,   289,   290,  -313,   294,   292,   296,   297,
     300,   305,   306,   307,   308,   309,   310,   311,   312,  -313,
    -313,  -313,  -313,  -313,   295,  -313,   315,  -313,     8,   111,
     153,   159,   -38,    87,    87,   108,   108,   108,   108,   133,
     133,   147,   147,  -313,  -313,  -313,  -313,   301,  -313,   237,
    -313,  -313,   293,   319,   320,   321,   576,   324,  -313,   336,
    -313,   201,   318,   336,  -313,  -313,  -313,  -313,   130,   215,
    -313,   284,    51,    26,   380,    67,   816,   636,   816,   726,
     298,  -313,    55,    55,  -313,  -313,   576,  -313,   325,   326,
     327,   328,   329,   332,    55,   334,   339,   216,   346,   335,
     666,  -313,  -313,  -313,  -313,  -313,   456,   576,   350,   576,
     340,    68,  -313,  -313,  -313,  -313,  -313,  -313,   298,   357,
    -313,   360,  -313,   361,  -313,   367,  -313,   370,  -313,   372,
    -313,   374,  -313,   376,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313,  -313,   358,  -313,  -313,   355,  -313,   375,
    -313,  -313,   381,  -313,   149,   456,   176,   191,  -313,   378,
     401,    89,   404,    10,   816,    89,   816,   756,  -313,  -313,
     816,   385,  -313,  -313,   516,   391,   336,  -313,  -313,   389,
    -313,   402,  -313,   390,  -313,   149,   409,  -313,  -313,   410,
    -313,   411,  -313,   413,  -313,   414,   415,   336,   193,   336,
    -313,   816,   505,   -28,  -313,   -12,   505,   816,   786,   816,
    -313,  -313,   336,   420,  -313,   419,  -313,   149,   421,   426,
    -313,   149,  -313,   427,  -313,   422,  -313,  -313,   482,   816,
    -313,    11,   -28,  -313,   816,    -3,   431,  -313,   429,  -313,
    -313,  -313,   430,   448,   432,   336,   -28,   433,   434,   428,
    -313,   437,  -313,   448,   448,  -313,  -313,   438,  -313,  -313
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    24,    22,    23,    26,    30,    28,    27,    29,
       0,     5,     0,     4,    12,     1,     3,   103,   104,   105,
       0,     0,     0,     2,    32,    11,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103,     0,
       0,    94,    92,    91,    90,    89,    93,     0,     0,    51,
      54,    56,    58,    60,    62,    63,    65,    67,    70,    75,
      78,    81,     0,    85,    96,    95,    55,   110,   112,   107,
     108,   109,    97,    10,     0,     0,     0,    31,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,    86,    87,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      98,    99,     0,     0,    15,     0,     0,     6,     7,    19,
       0,    17,    21,     0,   115,     0,     0,     0,     0,   130,
       0,     0,   144,    81,     0,     0,   154,     0,   118,     0,
     166,   193,   195,     0,     0,   169,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
     176,   175,   174,   177,     0,   149,     0,    52,    57,    59,
      61,    64,    66,    68,    69,    73,    74,    71,    72,    77,
      76,    80,    79,    82,    83,    84,    53,     0,     9,     0,
     100,   101,     0,     0,     0,     0,     0,     0,    50,     0,
      40,     0,     0,    34,    39,    37,    38,    36,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,     0,     0,   167,   168,     0,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    51,    43,    42,     0,     0,    41,     0,
       0,   103,    18,    33,    49,    20,   116,   113,     0,     0,
     120,     0,   129,     0,   132,     0,   143,     0,   146,     0,
     153,     0,   156,     0,   117,   192,   194,   173,   178,   179,
     180,   181,   182,   183,     0,   186,   187,   103,   188,     0,
     185,   148,     0,   151,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   184,   189,
       0,     0,   127,   147,     0,     0,     0,   114,   119,     0,
     122,     0,   131,     0,   140,     0,   138,   139,   145,     0,
     155,     0,   158,     0,   150,     0,     0,     0,     0,     0,
      46,     0,     0,     0,   128,     0,     0,     0,     0,     0,
     125,    47,     0,     0,   121,     0,   124,     0,   135,     0,
     137,     0,   157,     0,   160,     0,   126,    48,    45,     0,
     111,     0,     0,   141,     0,     0,     0,   123,     0,   134,
     136,   159,     0,     0,     0,     0,     0,     0,   163,     0,
     152,     0,   133,     0,     0,   162,    44,     0,   164,   161
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,   127,   115,     2,  -112,  -313,   379,   302,  -313,   492,
    -204,  -276,  -313,  -313,  -313,  -240,   -16,   -92,   -69,  -313,
     423,   424,   418,   425,   439,   219,   154,   221,   222,   -20,
    -313,   495,   -11,    -9,   497,   -74,  -313,  -127,  -313,   211,
     173,  -258,  -313,  -313,  -313,  -313,  -312,  -313,  -313,  -313,
    -302,  -313,  -313,   -83,  -313,  -313,  -313,  -313,  -313,   -66,
    -313,   316,  -313,  -313,  -313,  -313,  -313,  -205
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   210,   211,   123,    13,   131,    82,    14,    25,
     212,   213,   214,   215,   216,   217,   218,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   143,
      62,    63,    64,    65,    66,    67,   137,   149,   271,   331,
     367,   323,    68,   140,   275,   335,   336,    69,   144,   279,
      70,   176,   304,    71,   147,   283,   343,   375,   394,   399,
      72,   157,   169,   170,   171,   172,   173,   153
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      61,    21,    12,    22,    48,   260,   177,   152,   221,   263,
     197,   337,   369,    12,   148,    12,   305,   142,   146,    95,
      96,    15,   174,    30,    31,    24,   196,   285,   286,   334,
      81,   105,   106,   333,    32,   388,   134,   392,    76,   294,
      33,   368,   119,   370,    83,   334,    34,    35,    36,    37,
     350,   337,   269,   337,    61,    61,    61,   135,   124,   125,
     126,   148,    38,    18,    19,   324,    47,   334,   334,   389,
     390,   361,    61,   101,   136,   393,   156,   354,    61,   337,
     337,    20,    47,    84,   402,   270,   377,   252,   175,   273,
      33,   120,   121,    85,   337,   193,   194,   195,    61,    47,
     127,    86,    61,   284,    47,    47,   124,   253,   267,   380,
      61,     1,   151,   383,     2,    11,   329,     3,    87,     4,
      88,     5,     6,     7,     8,   274,    11,   100,    11,   268,
      34,    35,    36,    37,    17,    18,    19,    98,    16,    26,
      23,   309,   200,    27,   253,   363,    94,    18,    19,   152,
     152,    39,    40,    20,   107,   108,   148,   276,   278,   280,
     282,   152,    26,     9,    29,    20,    27,    28,   111,   112,
      41,    42,    43,    44,    45,    46,   109,   110,    92,    61,
      98,   303,    93,   124,    80,   201,    61,    29,    73,    61,
     258,   401,    74,    61,   148,    75,    98,    89,    29,    99,
      21,   264,    22,   102,    98,   158,   159,   160,   161,   162,
     163,   164,    90,   165,   166,   167,    61,   113,   114,     1,
     156,    81,     2,   321,    91,     3,   322,     4,    97,     5,
       6,     7,     8,   115,   116,   117,    61,    61,   299,    61,
     104,   306,   330,   307,   103,   338,   330,   340,   342,   118,
      98,   344,   346,   325,   128,    30,    31,   168,   261,    18,
      19,   185,   186,   187,   188,    98,    32,    98,   326,   132,
     362,     9,    33,   297,    18,    19,    75,    20,    34,    35,
      36,    37,   364,   366,   133,    61,   150,   366,   372,   374,
     376,   154,    20,   298,    38,    18,    19,   120,   121,    39,
      40,   129,   130,   198,    61,   199,    61,   219,   348,   122,
     387,   138,   139,    20,   222,   391,    30,    31,    41,    42,
      43,    44,    45,    46,   183,   184,   223,    61,   224,    61,
     225,    47,   189,   190,   226,   191,   192,   407,   408,   202,
       1,   203,    61,     2,   204,   205,     3,   206,     4,   207,
       5,     6,     7,     8,    30,    31,   227,   231,   228,   229,
     230,   232,   233,   266,   254,    32,   234,   235,   236,   237,
     249,    33,   238,   239,   251,    61,   240,    34,    35,    36,
      37,   241,   242,   243,   244,   245,   246,   247,   248,   250,
     255,   262,     9,    38,    18,    19,   256,   257,    39,    40,
     259,   272,   288,   289,   290,   291,   292,   208,   209,   293,
     345,   295,    20,   308,    30,    31,   296,    41,    42,    43,
      44,    45,    46,   300,    98,    32,    34,    35,    36,    37,
      47,    33,   310,   301,   311,   318,   312,    34,    35,    36,
      37,   313,    94,    18,    19,   314,   315,    39,    40,   316,
     317,    29,   319,    38,    18,    19,   320,   327,    39,    40,
     328,    20,   332,   349,   351,   353,    41,    42,    43,    44,
      45,    46,    20,   155,    30,    31,   352,    41,    42,    43,
      44,    45,    46,   355,   356,    32,   357,   358,   386,   359,
      47,    33,   360,   378,   379,   381,   385,    34,    35,    36,
      37,   382,   384,   395,   396,   397,   398,   405,   404,   400,
     406,   403,   220,    38,    18,    19,    77,   409,    39,    40,
     180,   265,    78,   178,    79,   179,   339,   208,   181,   371,
       0,     0,    20,   365,    30,    31,     0,    41,    42,    43,
      44,    45,    46,   182,     0,    32,    34,    35,    36,    37,
      47,    33,   287,     0,     0,     0,     0,    34,    35,    36,
      37,     0,    94,    18,    19,     0,     0,    39,    40,     0,
       0,     0,     0,    38,    18,    19,     0,     0,    39,    40,
       0,    20,     0,     0,     0,     0,    41,    42,    43,    44,
      45,    46,    20,   347,    30,    31,     0,    41,    42,    43,
      44,    45,    46,     0,     0,    32,     0,     0,     0,     0,
      47,    33,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,    18,    19,   141,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,   277,    39,    40,
      47,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,     0,    39,    40,
     302,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,     0,    39,    40,
       0,     0,   145,     0,     0,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,     0,    39,    40,
       0,     0,     0,   281,     0,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,     0,    39,    40,
       0,     0,     0,     0,   341,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,     0,    39,    40,
       0,     0,     0,     0,     0,   373,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    94,    18,    19,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46
};

static const yytype_int16 yycheck[] =
{
      20,    12,     0,    12,    20,   209,    98,    90,   135,   213,
     122,   313,    24,    11,    88,    13,   256,    86,    87,    39,
      40,     0,    32,    18,    19,    86,   118,   232,   233,    57,
      28,    69,    70,    23,    29,    24,    57,    40,    78,   244,
      35,   353,    62,   355,    57,    57,    41,    42,    43,    44,
     326,   353,    26,   355,    74,    75,    76,    78,    74,    75,
      76,   135,    57,    58,    59,   305,    94,    57,    57,   381,
     382,   347,    92,    65,    95,    78,    92,   335,    98,   381,
     382,    76,    94,    76,   396,    59,   362,   199,    98,    22,
      35,    62,    63,    76,   396,   115,   116,   117,   118,    94,
      71,    76,   122,   230,    94,    94,   122,   199,    57,   367,
     130,     4,    57,   371,     7,     0,    27,    10,    76,    12,
      76,    14,    15,    16,    17,    58,    11,    66,    13,    78,
      41,    42,    43,    44,    57,    58,    59,    74,    11,    71,
      13,   268,    79,    75,   236,   349,    57,    58,    59,   232,
     233,    62,    63,    76,    67,    68,   230,   226,   227,   228,
     229,   244,    71,    56,    96,    76,    75,    76,    60,    61,
      81,    82,    83,    84,    85,    86,    89,    90,    76,   199,
      74,   250,    80,   199,    77,    79,   206,    96,    71,   209,
     206,   395,    75,   213,   268,    78,    74,    76,    96,    77,
     211,    71,   211,    92,    74,    45,    46,    47,    48,    49,
      50,    51,    76,    53,    54,    55,   236,    84,    85,     4,
     236,   219,     7,    74,    76,    10,    77,    12,    76,    14,
      15,    16,    17,    86,    87,    88,   256,   257,   247,   259,
      81,   257,   311,   259,    91,   314,   315,   316,   317,    75,
      74,   320,   321,    77,    71,    18,    19,    97,    57,    58,
      59,   107,   108,   109,   110,    74,    29,    74,    77,    57,
      77,    56,    35,    57,    58,    59,    78,    76,    41,    42,
      43,    44,   351,   352,    77,   305,    77,   356,   357,   358,
     359,    57,    76,    77,    57,    58,    59,    62,    63,    62,
      63,    71,    72,    71,   324,    74,   326,    74,   324,    72,
     379,    20,    21,    76,    75,   384,    18,    19,    81,    82,
      83,    84,    85,    86,   105,   106,    74,   347,    75,   349,
      74,    94,   111,   112,    75,   113,   114,   403,   404,     3,
       4,     5,   362,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    74,    77,    75,    74,
      74,    74,    74,    79,    71,    29,    77,    77,    74,    77,
      75,    35,    76,    76,    73,   395,    76,    41,    42,    43,
      44,    76,    76,    76,    76,    76,    76,    76,    76,    74,
      71,    73,    56,    57,    58,    59,    76,    76,    62,    63,
      76,    21,    77,    77,    77,    77,    77,    71,    72,    77,
      25,    77,    76,    73,    18,    19,    77,    81,    82,    83,
      84,    85,    86,    77,    74,    29,    41,    42,    43,    44,
      94,    35,    75,    98,    74,    77,    75,    41,    42,    43,
      44,    74,    57,    58,    59,    75,    74,    62,    63,    75,
      74,    96,    77,    57,    58,    59,    75,    79,    62,    63,
      59,    76,    58,    72,    75,    75,    81,    82,    83,    84,
      85,    86,    76,    77,    18,    19,    74,    81,    82,    83,
      84,    85,    86,    74,    74,    29,    75,    74,     6,    75,
      94,    35,    77,    73,    75,    74,    74,    41,    42,    43,
      44,    75,    75,    72,    75,    75,    58,    79,    74,    77,
      73,    78,   133,    57,    58,    59,    24,    79,    62,    63,
     102,   219,    27,   100,    27,   101,   315,    71,   103,   356,
      -1,    -1,    76,    28,    18,    19,    -1,    81,    82,    83,
      84,    85,    86,   104,    -1,    29,    41,    42,    43,    44,
      94,    35,   236,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    57,    58,    59,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    76,    77,    18,    19,    -1,    81,    82,    83,
      84,    85,    86,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      94,    35,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    30,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    31,    62,    63,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    -1,    62,    63,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,    10,    12,    14,    15,    16,    17,    56,
     100,   101,   102,   104,   107,     0,   100,    57,    58,    59,
      76,   131,   132,   100,    86,   108,    71,    75,    76,    96,
      18,    19,    29,    35,    41,    42,    43,    44,    57,    62,
      63,    81,    82,    83,    84,    85,    86,    94,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   141,   146,
     149,   152,   159,    71,    75,    78,    78,   108,   130,   133,
      77,   102,   106,    57,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    80,    57,   128,   128,    76,    74,    77,
      66,    65,    92,    91,    81,    69,    70,    67,    68,    89,
      90,    60,    61,    84,    85,    86,    87,    88,    75,   128,
      62,    63,    72,   103,   115,   115,   115,    71,    71,    71,
      72,   105,    57,    77,    57,    78,    95,   135,    20,    21,
     142,    30,   117,   128,   147,    36,   117,   153,   134,   136,
      77,    57,   152,   166,    57,    77,   115,   160,    45,    46,
      47,    48,    49,    50,    51,    53,    54,    55,    97,   161,
     162,   163,   164,   165,    32,    98,   150,   116,   119,   120,
     121,   122,   123,   124,   124,   125,   125,   125,   125,   126,
     126,   127,   127,   128,   128,   128,   116,   103,    71,    74,
      79,    79,     3,     5,     8,     9,    11,    13,    71,    72,
     101,   102,   109,   110,   111,   112,   113,   114,   115,    74,
     105,   136,    75,    74,    75,    74,    75,    74,    75,    74,
      74,    77,    74,    74,    77,    77,    74,    77,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    75,
      74,    73,   103,   116,    71,    71,    76,    76,   115,    76,
     109,    57,    73,   109,    71,   106,    79,    57,    78,    26,
      59,   137,    21,    22,    58,   143,   117,    31,   117,   148,
     117,    37,   117,   154,   136,   166,   166,   160,    77,    77,
      77,    77,    77,    77,   166,    77,    77,    57,    77,   132,
      77,    98,    34,   117,   151,   114,   115,   115,    73,   136,
      75,    74,    75,    74,    75,    74,    75,    74,    77,    77,
      75,    74,    77,   140,   114,    77,    77,    79,    59,    27,
     117,   138,    58,    23,    57,   144,   145,   149,   117,   138,
     117,    38,   117,   155,   117,    25,   117,    77,   115,    72,
     110,    75,    74,    75,   140,    74,    74,    75,    74,    75,
      77,   110,    77,   109,   117,    28,   117,   139,   145,    24,
     145,   139,   117,    39,   117,   156,   117,   110,    73,    75,
     140,    74,    75,   140,    75,    74,     6,   117,    24,   145,
     145,   117,    40,    78,   157,    72,    75,    75,    58,   158,
      77,   109,   145,    78,    74,    79,    73,   158,   158,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   103,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   111,   111,   111,   112,   112,   113,   113,   113,   114,
     114,   115,   115,   116,   116,   116,   117,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   124,   124,   124,   125,   125,   125,   126,   126,
     126,   127,   127,   127,   127,   128,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   130,   130,   130,   130,   130,
     131,   131,   132,   132,   132,   132,   132,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   140,   141,   142,
     142,   143,   143,   144,   144,   144,   144,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   148,   149,   150,   150,
     151,   151,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   157,   157,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   160,   160,   161,   161,   161,   161,   162,   163,
     163,   163,   163,   164,   164,   164,   164,   164,   165,   165,
     165,   165,   166,   166,   166,   166
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     5,     5,     3,     5,
       3,     2,     1,     3,     3,     1,     6,     5,     3,     1,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     2,     2,     2,    11,     7,     5,     6,     7,     2,
       1,     1,     3,     3,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       4,     4,     3,     1,     1,     1,     3,     1,     1,     1,
       1,    10,     1,     3,     5,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     4,     1,     8,     3,
       1,     3,     1,     7,     5,     3,     5,     3,     1,     1,
       1,    10,     1,     3,     1,     3,     1,     6,     3,     1,
       3,     1,    12,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     3,     1,     3,     4,     3,     4,     4,     3,
       4,     3,     1,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     3,     3,     4,
       3,     4,     3,     1,     3,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
#line 100 "mylang.y" /* yacc.c:1646  */
    {printf("Start->Function_declaration Start\n");}
#line 1702 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 101 "mylang.y" /* yacc.c:1646  */
    {printf("Start->Object_declaration Start\n");}
#line 1708 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 102 "mylang.y" /* yacc.c:1646  */
    {printf("Start->Function_declaration\n");}
#line 1714 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "mylang.y" /* yacc.c:1646  */
    {printf("Start->Object_declaration\n");}
#line 1720 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "mylang.y" /* yacc.c:1646  */
    {printf("Object_declaration->IDENTIFIER ASGN_OP postfix_expression SEMI_COLON\n");}
#line 1726 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 107 "mylang.y" /* yacc.c:1646  */
    {printf("Object_declaration->IDENTIFIER ASGN_OP object_expression SEMI_COLON\n");}
#line 1732 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "mylang.y" /* yacc.c:1646  */
    {printf("Object_declaration->IDENTIFIER SEMI_COLON\n");}
#line 1738 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "mylang.y" /* yacc.c:1646  */
    {printf("Object_declaration->array_expression ASGN_OP array_initialiser SEMI_COLON\n");}
#line 1744 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 110 "mylang.y" /* yacc.c:1646  */
    {printf("Object_declaration->array_expression SEMI_COLON\n");}
#line 1750 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 114 "mylang.y" /* yacc.c:1646  */
    {printf("Dec_specifier->Type_specifier pointer\n");}
#line 1756 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "mylang.y" /* yacc.c:1646  */
    {printf("Dec_specifier->Type_specifier\n");}
#line 1762 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "mylang.y" /* yacc.c:1646  */
    {printf("array_initialiser->LEFT_CURLY array_initialiser RIGHT_CURLY\n");}
#line 1768 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 120 "mylang.y" /* yacc.c:1646  */
    {printf("array_initialiser->expression COMMA array_initialiser\n");}
#line 1774 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "mylang.y" /* yacc.c:1646  */
    {printf("array_initialiser->expression\n");}
#line 1780 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 125 "mylang.y" /* yacc.c:1646  */
    {printf("Function_declaration->Dec_specifier IDENTIFIER LEFT_PARENTHESIS argument_list RIGHT_PARENTHESIS body_or_proto\n");}
#line 1786 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 126 "mylang.y" /* yacc.c:1646  */
    {printf("Function_declaration->Dec_specifier IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS body_or_proto\n");}
#line 1792 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 129 "mylang.y" /* yacc.c:1646  */
    {printf("body_or_proto->LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1798 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "mylang.y" /* yacc.c:1646  */
    {printf("body_or_proto->SEMI_COLON\n");}
#line 1804 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 133 "mylang.y" /* yacc.c:1646  */
    {printf("argument_list->Dec_specifier IDENTIFIER COMMA argument_list\n");}
#line 1810 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "mylang.y" /* yacc.c:1646  */
    {printf("argument_list->Dec_specifier IDENTIFIER\n");}
#line 1816 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 137 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->INT\n");}
#line 1822 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 138 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->VOID\n");}
#line 1828 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 139 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->FLOAT\n");}
#line 1834 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 140 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->CHAR\n");}
#line 1840 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 141 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->PROC\n");}
#line 1846 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 142 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->CLUST\n");}
#line 1852 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 143 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->JB\n");}
#line 1858 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 144 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->MEM\n");}
#line 1864 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 145 "mylang.y" /* yacc.c:1646  */
    {printf("type_specifier->LNK\n");}
#line 1870 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 148 "mylang.y" /* yacc.c:1646  */
    {printf("pointer->MUL_OP pointer\n");}
#line 1876 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 149 "mylang.y" /* yacc.c:1646  */
    {printf("pointer->MUL_OP\n");}
#line 1882 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 152 "mylang.y" /* yacc.c:1646  */
    {printf("statement_list->Statement statement_list\n");}
#line 1888 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "mylang.y" /* yacc.c:1646  */
    {printf("statement_list->Statement\n");}
#line 1894 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 157 "mylang.y" /* yacc.c:1646  */
    {printf("Statement->LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1900 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 158 "mylang.y" /* yacc.c:1646  */
    {printf("Statement->Expression_Statement\n");}
#line 1906 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 159 "mylang.y" /* yacc.c:1646  */
    {printf("Statement->Selection_statement\n");}
#line 1912 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 160 "mylang.y" /* yacc.c:1646  */
    {printf("Statement->Iteration_statement\n");}
#line 1918 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 161 "mylang.y" /* yacc.c:1646  */
    {printf("Statement->Jump_statement\n");}
#line 1924 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 162 "mylang.y" /* yacc.c:1646  */
    {printf("Statement->Object_declaration\n");}
#line 1930 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 165 "mylang.y" /* yacc.c:1646  */
    {printf("Jump_statement->RETURN expression\n");}
#line 1936 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 166 "mylang.y" /* yacc.c:1646  */
    {printf("Jump_statement->CONTINUE SEMI_COLON\n");}
#line 1942 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 167 "mylang.y" /* yacc.c:1646  */
    {printf("Jump_statement->BREAK SEMI_COLON\n");}
#line 1948 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 170 "mylang.y" /* yacc.c:1646  */
    {printf("Select_statement->IF LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY else LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1954 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "mylang.y" /* yacc.c:1646  */
    {printf("Select_statement->IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1960 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 174 "mylang.y" /* yacc.c:1646  */
    {printf("Iteration_Statement->WHILE LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS Statement\n");}
#line 1966 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 175 "mylang.y" /* yacc.c:1646  */
    {printf("Iteration_Statement->FOR LEFT_PARENTHESIS Expression_statement Expression_statement RIGHT_PARENTHESIS Statement\n");}
#line 1972 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 176 "mylang.y" /* yacc.c:1646  */
    {printf("Iteration_Statement->FOR LEFT_PARENTHESIS Expression_statement Expression_statement expression RIGHT_PARENTHESIS Statement\n");}
#line 1978 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 179 "mylang.y" /* yacc.c:1646  */
    {printf("Expression_Statement->expression SEMI_COLON\n");}
#line 1984 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 180 "mylang.y" /* yacc.c:1646  */
    {printf("Expression_Statement->SEMI_COLON\n");}
#line 1990 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 183 "mylang.y" /* yacc.c:1646  */
    {printf("expression->assignment_expression\n");}
#line 1996 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 184 "mylang.y" /* yacc.c:1646  */
    {printf("expression->expression COMMA assignment_expression\n");}
#line 2002 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 187 "mylang.y" /* yacc.c:1646  */
    {printf("assignment_expression->unary_expression ASGN_OP assignment_expression\n");}
#line 2008 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 188 "mylang.y" /* yacc.c:1646  */
    {printf("assignment_expression->conditional_expression\n");}
#line 2014 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 189 "mylang.y" /* yacc.c:1646  */
    {printf("assignment_expression->object_expression\n");}
#line 2020 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 192 "mylang.y" /* yacc.c:1646  */
    {printf("conditional_expression->logical_or_expression\n");}
#line 2026 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 195 "mylang.y" /* yacc.c:1646  */
    {printf("logical_or_expression->logical_or_expression OR_OP logical_and_expression\n");}
#line 2032 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 196 "mylang.y" /* yacc.c:1646  */
    {printf("logical_or_expression->logical_and_expression\n");}
#line 2038 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 200 "mylang.y" /* yacc.c:1646  */
    {printf("logical_and_expression->logical_and_expression AND_OP bitwise_or_expression\n");}
#line 2044 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 201 "mylang.y" /* yacc.c:1646  */
    {printf("logical_and_expression->bitwise_or_expression\n");}
#line 2050 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 204 "mylang.y" /* yacc.c:1646  */
    {printf("bitwise_or_expression->bitwise_or_expression BTW_OR bitwise_xor_expression\n");}
#line 2056 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 205 "mylang.y" /* yacc.c:1646  */
    {printf("bitwise_or_expression->bitwise_xor_expression\n");}
#line 2062 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 208 "mylang.y" /* yacc.c:1646  */
    {printf("bitwise_xor_expression->and_expression\n");}
#line 2068 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 209 "mylang.y" /* yacc.c:1646  */
    {printf("bitwise_xor_expression->bitwise_xor_expression XOR_OP and_expression\n");}
#line 2074 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 212 "mylang.y" /* yacc.c:1646  */
    {printf("and_expression->equality_expression\n");}
#line 2080 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 213 "mylang.y" /* yacc.c:1646  */
    {printf("and_expression->and_expression AMPERSAND equality_expression\n");}
#line 2086 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 216 "mylang.y" /* yacc.c:1646  */
    {printf("equality_expression->relational_expression\n");}
#line 2092 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 217 "mylang.y" /* yacc.c:1646  */
    {printf("equality_expression->equality_expression EQ_OP relational_expression\n");}
#line 2098 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 218 "mylang.y" /* yacc.c:1646  */
    {printf("equality_expression->equality_expression NE_OP relational_expression\n");}
#line 2104 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "mylang.y" /* yacc.c:1646  */
    {printf("relational_expression->shift_expression\n");}
#line 2110 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 222 "mylang.y" /* yacc.c:1646  */
    {printf("relational_expression->relational_expression LESS_THAN shift_expression\n");}
#line 2116 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 223 "mylang.y" /* yacc.c:1646  */
    {printf("relational_expression->relational_expression GREATER_THAN shift_expression\n");}
#line 2122 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 224 "mylang.y" /* yacc.c:1646  */
    {printf("relational_expression->relational_expression LE_OP shift_expression\n");}
#line 2128 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 225 "mylang.y" /* yacc.c:1646  */
    {printf("relational_expression->relational_expression GE_OP shift_expression\n");}
#line 2134 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 228 "mylang.y" /* yacc.c:1646  */
    {printf("shift_expression->additive_expression\n");}
#line 2140 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 229 "mylang.y" /* yacc.c:1646  */
    {printf("shift_expression->shift_expression LEFT_OP additive_expression\n");}
#line 2146 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 230 "mylang.y" /* yacc.c:1646  */
    {printf("shift_expression->shift_expression RIGHT_OP additive_expression\n");}
#line 2152 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 233 "mylang.y" /* yacc.c:1646  */
    {printf("additive_expression->multiplicative_expression\n");}
#line 2158 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 234 "mylang.y" /* yacc.c:1646  */
    {printf("additive_expression->additive_expression PLUS multiplicative_expression\n");}
#line 2164 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 235 "mylang.y" /* yacc.c:1646  */
    {printf("additive_expression->additive_expression MINUS multiplicative_expression\n");}
#line 2170 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 238 "mylang.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->unary_expression\n");}
#line 2176 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 239 "mylang.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->multiplicative_expression MUL_OP unary_expression\n");}
#line 2182 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 240 "mylang.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->multiplicative_expression DIV_OP unary_expressionn\n");}
#line 2188 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 241 "mylang.y" /* yacc.c:1646  */
    {printf("multiplicative_expression->multiplicative_expression MOD_OP unary_expression\n");}
#line 2194 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 244 "mylang.y" /* yacc.c:1646  */
    {printf("unary_expression->postfix_expressoin\n");}
#line 2200 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 245 "mylang.y" /* yacc.c:1646  */
    {printf("unary_expression->INC_OP unary_expressoin\n");}
#line 2206 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 246 "mylang.y" /* yacc.c:1646  */
    {printf("unary_expression->DEC_OP unary_expression\n");}
#line 2212 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 247 "mylang.y" /* yacc.c:1646  */
    {printf("unary_expression->unary_operator unary_expression\n");}
#line 2218 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 250 "mylang.y" /* yacc.c:1646  */
    {printf("unary_operator->PLUS\n");}
#line 2224 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 251 "mylang.y" /* yacc.c:1646  */
    {printf("unary_operator->MINUS\n");}
#line 2230 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 252 "mylang.y" /* yacc.c:1646  */
    {printf("unary_operator->BTW_NOT\n");}
#line 2236 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 253 "mylang.y" /* yacc.c:1646  */
    {printf("unary_operator->NOT_OP\n");}
#line 2242 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 254 "mylang.y" /* yacc.c:1646  */
    {printf("unary_operator->MUL_OP\n");}
#line 2248 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 255 "mylang.y" /* yacc.c:1646  */
    {printf("unary_operator->AMPERSAND\n");}
#line 2254 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 258 "mylang.y" /* yacc.c:1646  */
    {printf("postfix_expression->primary_expression\n");}
#line 2260 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 259 "mylang.y" /* yacc.c:1646  */
    {printf("postfix_expression->array_expression\n");}
#line 2266 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 260 "mylang.y" /* yacc.c:1646  */
    {printf("postfix_expression->function_expression\n");}
#line 2272 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 261 "mylang.y" /* yacc.c:1646  */
    {printf("postfix_expression->postfix_expression INC_OP\n");}
#line 2278 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 262 "mylang.y" /* yacc.c:1646  */
    {printf("postfix_expression->postfix_expression DEC_OP\n");}
#line 2284 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 265 "mylang.y" /* yacc.c:1646  */
    {printf("array_expression->array_expression LEFT_BRACKET expression RIGHT_EXPRESSION\n");}
#line 2290 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 266 "mylang.y" /* yacc.c:1646  */
    {printf("array_expression->Primary_expression LEFT_BRACKET expression RIGHT_BRACKET\n");}
#line 2296 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 269 "mylang.y" /* yacc.c:1646  */
    {printf("primary_expression->IDENTIFIER DEREF_OP IDENTIFIER\n");}
#line 2302 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 270 "mylang.y" /* yacc.c:1646  */
    {printf("primary_expression->IDENTIFIER\n");}
#line 2308 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 271 "mylang.y" /* yacc.c:1646  */
    {printf("primary_expression->CONSTANT\n");}
#line 2314 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 272 "mylang.y" /* yacc.c:1646  */
    {printf("primary_expression->STRING_LITERAL\n");}
#line 2320 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 273 "mylang.y" /* yacc.c:1646  */
    {printf("primary_expression->LEFT_PARENTHESIS expression RIGHT_PARENTHESIS\n");}
#line 2326 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 276 "mylang.y" /* yacc.c:1646  */
    {printf("object_expression->link_object\n");}
#line 2332 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 277 "mylang.y" /* yacc.c:1646  */
    {printf("object_expression->memory_object\n");}
#line 2338 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 278 "mylang.y" /* yacc.c:1646  */
    {printf("object_expression->job_object\n");}
#line 2344 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 279 "mylang.y" /* yacc.c:1646  */
    {printf("object_expression->cluster_object\n");}
#line 2350 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 282 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_object->CLUSTER LEFT_PARENTHESIS proc_arr_arg COMMA topology_arg COMMA link_band_arg COMMA link_cap_arg narp\n");}
#line 2356 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 283 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_object->processor_object\n");}
#line 2362 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 286 "mylang.y" /* yacc.c:1646  */
    {printf("proc_arr_arg->PROCESSORS ASGN_OP IDENTIFIER\n");}
#line 2368 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 287 "mylang.y" /* yacc.c:1646  */
    {printf("proc_arr_arg->PROCESSORS ASGN_OP LEFT_BRACKET cluster_list RIGHT BRACKET\n");}
#line 2374 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 288 "mylang.y" /* yacc.c:1646  */
    {printf("proc_arr_arg->IDENTIFIER\n");}
#line 2380 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 289 "mylang.y" /* yacc.c:1646  */
    {printf("proc_arr_arg->LEFT BRACKET cluster_list RIGHT_BRACKET\n");}
#line 2386 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 292 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_list->cluster_object COMMA cluster_list\n");}
#line 2392 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 293 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_list->cluster_object\n");}
#line 2398 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 296 "mylang.y" /* yacc.c:1646  */
    {printf("topology_arg->TOPOLOGY ASGN_OP STRING_LITERAL\n");}
#line 2404 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 297 "mylang.y" /* yacc.c:1646  */
    {printf("topology_arg->STRING_LITERAL\n");}
#line 2410 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 300 "mylang.y" /* yacc.c:1646  */
    {printf("link_band_arg->LINK_BANDWIDTH ASGN_OP conditional_expression\n");}
#line 2416 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 301 "mylang.y" /* yacc.c:1646  */
    {printf("link_band_arg->conditional_expression\n");}
#line 2422 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 304 "mylang.y" /* yacc.c:1646  */
    {printf("link_cap_arg->LINK_CAPACITY ASGN_OP conditional_expression\n");}
#line 2428 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 305 "mylang.y" /* yacc.c:1646  */
    {printf("link_cap_arg->conditional_expression\n");}
#line 2434 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 308 "mylang.y" /* yacc.c:1646  */
    {printf("narp->COMMA conditional_expression RIGHT_PARENTHESIS\n");}
#line 2440 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 309 "mylang.y" /* yacc.c:1646  */
    {printf("narp->COMMA NAME ASGN_OP conditional_expression\n");}
#line 2446 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 310 "mylang.y" /* yacc.c:1646  */
    {printf("narp->RIGHT PARENTHESIS\n");}
#line 2452 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 313 "mylang.y" /* yacc.c:1646  */
    {printf("processor_object->PROCESSOR LEFT_PARENTHESIS isa_args COMMA Clock_args COMMA mem_args narp\n");}
#line 2458 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 316 "mylang.y" /* yacc.c:1646  */
    {printf("isa_args->ISA ASGN_OP PROC_TYPE\n");}
#line 2464 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 317 "mylang.y" /* yacc.c:1646  */
    {printf("isa_args->PROC_TYPE\n");}
#line 2470 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 320 "mylang.y" /* yacc.c:1646  */
    {printf("Clock_args->CLOCK_SPEED ASGN_OP CONSTANT\n");}
#line 2476 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 321 "mylang.y" /* yacc.c:1646  */
    {printf("Clock_args->CONSTANT\n");}
#line 2482 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 324 "mylang.y" /* yacc.c:1646  */
    {printf("mem_args->MEM1 ASGN_OP memory COMMA MEM2 ASGN_OP Memory\n");}
#line 2488 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 325 "mylang.y" /* yacc.c:1646  */
    {printf("mem_args->MEM1 ASGN_OP memory COMMA memory\n");}
#line 2494 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 326 "mylang.y" /* yacc.c:1646  */
    {printf("mem_args->MEM1 ASGN_OP memory\n");}
#line 2500 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 327 "mylang.y" /* yacc.c:1646  */
    {printf("mem_args->memory COMMA MEM2 ASGN_OP memory\n");}
#line 2506 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 328 "mylang.y" /* yacc.c:1646  */
    {printf("mem_args->memory COMMA memory\n");}
#line 2512 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 329 "mylang.y" /* yacc.c:1646  */
    {printf("mem_args->memory\n");}
#line 2518 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 332 "mylang.y" /* yacc.c:1646  */
    {printf("memory->memory_object\n");}
#line 2524 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 333 "mylang.y" /* yacc.c:1646  */
    {printf("memory->IDENTIFIER\n");}
#line 2530 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 336 "mylang.y" /* yacc.c:1646  */
    {printf("link_object->LINK LEFT_PARENTHESIS start_args COMMA end_args COMMA link_band_arg COMMA link_cap_arg narp\n");}
#line 2536 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 337 "mylang.y" /* yacc.c:1646  */
    {printf("link_object->IDENTIFIER\n");}
#line 2542 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 340 "mylang.y" /* yacc.c:1646  */
    {printf("start_args->START_POINT ASGN_OP conditional expression\n");}
#line 2548 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 341 "mylang.y" /* yacc.c:1646  */
    {printf("start_args->conditional_expression\n");}
#line 2554 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 344 "mylang.y" /* yacc.c:1646  */
    {printf("end_args->END_POINT ASGN_OP conditional_expression\n");}
#line 2560 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 345 "mylang.y" /* yacc.c:1646  */
    {printf("end_args->conditional_expression\n");}
#line 2566 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 348 "mylang.y" /* yacc.c:1646  */
    {printf("memory_object->MEMORY LEFT_PARENTHESIS mem_type_args COMMA mem_size_args narp\n");}
#line 2572 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 351 "mylang.y" /* yacc.c:1646  */
    {printf("mem_type_args->MEMORY_TYPE ASGN_OP MEM_TYPES\n");}
#line 2578 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 352 "mylang.y" /* yacc.c:1646  */
    {printf("mem_type_args->MEM_TYPES\n");}
#line 2584 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 355 "mylang.y" /* yacc.c:1646  */
    {printf("mem_size_args->MEMORY_SIZE ASGN_OP conditional_expression\n");}
#line 2590 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 356 "mylang.y" /* yacc.c:1646  */
    {printf("mem_size_args->conditional_expression\n");}
#line 2596 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 359 "mylang.y" /* yacc.c:1646  */
    {printf("job_object->JOB LEFT_PARENTHESIS job_id_args COMMA flop_args COMM deadline_args COMMA mem_required_args COMMA affinity_args RIGHT_PARENTHESIS\n");}
#line 2602 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 362 "mylang.y" /* yacc.c:1646  */
    {printf("job_id_args->JOB_ID ASGN_OP conditional_expression\n");}
#line 2608 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 363 "mylang.y" /* yacc.c:1646  */
    {printf("job_id_args->conditional_expression\n");}
#line 2614 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 366 "mylang.y" /* yacc.c:1646  */
    {printf("flops_args->JOB_ID ASGN_OP conditional_expression\n");}
#line 2620 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 367 "mylang.y" /* yacc.c:1646  */
    {printf("flops_args->conditional_expression\n");}
#line 2626 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 370 "mylang.y" /* yacc.c:1646  */
    {printf("deadline_args->DEADLINE ASGN_OP conditional_expression\n");}
#line 2632 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 371 "mylang.y" /* yacc.c:1646  */
    {printf("deadline_args->conditional_expression\n");}
#line 2638 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 374 "mylang.y" /* yacc.c:1646  */
    {printf("mem_required_args->MEM_REQUIRED ASGN_OP conditional_expression\n");}
#line 2644 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 375 "mylang.y" /* yacc.c:1646  */
    {printf("mem_required_args->conditional_expression\n");}
#line 2650 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 378 "mylang.y" /* yacc.c:1646  */
    {printf("affinity_args->AFFINITY ASGN_OP LEFT_BRACKET list RIGHT_BRACKET\n");}
#line 2656 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 379 "mylang.y" /* yacc.c:1646  */
    {printf("affinity_args->LEFT_BRACKET list RIGHT_BRACKET\n");}
#line 2662 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 382 "mylang.y" /* yacc.c:1646  */
    {printf("list->CONSTANT\n");}
#line 2668 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 383 "mylang.y" /* yacc.c:1646  */
    {printf("list->CONSTANT COMMA list\n");}
#line 2674 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 386 "mylang.y" /* yacc.c:1646  */
    {printf("function_expression->RUN LEFT_PARENTHESIS cluster_list RIGHT_PARENTHESIS\n");}
#line 2680 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 387 "mylang.y" /* yacc.c:1646  */
    {printf("function_expression->WAIT LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2686 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 388 "mylang.y" /* yacc.c:1646  */
    {printf("function_expression->DISCARD_JOB LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
#line 2692 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 389 "mylang.y" /* yacc.c:1646  */
    {printf("function_expression->STOP LEFT_PARETHESIS IDENTIFIER RIGHT_PARENTHESIS\n");}
#line 2698 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 390 "mylang.y" /* yacc.c:1646  */
    {printf("function_expression->IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2704 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 391 "mylang.y" /* yacc.c:1646  */
    {printf("function_expression->IDENTIFIER LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS\n");}
#line 2710 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 392 "mylang.y" /* yacc.c:1646  */
    {printf("function_expression->IDENTIFIER DOT object_function\n");}
#line 2716 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 395 "mylang.y" /* yacc.c:1646  */
    {printf("argument_expression_list->expression ");}
#line 2722 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 396 "mylang.y" /* yacc.c:1646  */
    {printf("argument_expression_list->expression COMMA argument_expression_list");}
#line 2728 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 399 "mylang.y" /* yacc.c:1646  */
    {printf("object_function->processor_function\n");}
#line 2734 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 400 "mylang.y" /* yacc.c:1646  */
    {printf("object_function->job_function\n");}
#line 2740 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 401 "mylang.y" /* yacc.c:1646  */
    {printf("object_function->memory_function\n");}
#line 2746 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 402 "mylang.y" /* yacc.c:1646  */
    {printf("object_function->cluster_function\n");}
#line 2752 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 405 "mylang.y" /* yacc.c:1646  */
    {printf("memory_function->GET_AVAILABLE_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2758 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 408 "mylang.y" /* yacc.c:1646  */
    {printf("job_function->GET_JOB_AFFINITY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2764 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 409 "mylang.y" /* yacc.c:1646  */
    {printf("job_function->GET_JOB_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2770 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 410 "mylang.y" /* yacc.c:1646  */
    {printf("job_function->GET_FLOPS LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2776 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 411 "mylang.y" /* yacc.c:1646  */
    {printf("job_function->GET_DEADLINE LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2782 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 414 "mylang.y" /* yacc.c:1646  */
    {printf("processor_function->IS_RUNNING LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2788 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 415 "mylang.y" /* yacc.c:1646  */
    {printf("processor_function->SUBMIT_JOBS LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
#line 2794 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 416 "mylang.y" /* yacc.c:1646  */
    {printf("processor_function->GET_CLOCK_SPEED LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2800 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 417 "mylang.y" /* yacc.c:1646  */
    {printf("processor_function->GET_PROC_TYPE LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2806 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 418 "mylang.y" /* yacc.c:1646  */
    {printf("processor_function->IS_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2812 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 421 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_function->GET_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2818 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 422 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_function->GET_PROCESSOR  LEFT_PARENTHESIS primary_expression RIGTH_PARENTHESIS \n");}
#line 2824 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 423 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_function->IS_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2830 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 424 "mylang.y" /* yacc.c:1646  */
    {printf("cluster_function->SUBMIT_JOBS LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
#line 2836 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 427 "mylang.y" /* yacc.c:1646  */
    {printf("job_list->IDENTIFIER COMMA job_list\n");}
#line 2842 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 428 "mylang.y" /* yacc.c:1646  */
    {printf("job_list->IDENTIFIER\n");}
#line 2848 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 429 "mylang.y" /* yacc.c:1646  */
    {printf("job_list->job_object COMMA job_list\n");}
#line 2854 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 430 "mylang.y" /* yacc.c:1646  */
    {printf("job_list->job_object\n");}
#line 2860 "mylang.tab.c" /* yacc.c:1646  */
    break;


#line 2864 "mylang.tab.c" /* yacc.c:1646  */
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
                      yytoken, &yylval);
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
                  yystos[yystate], yyvsp);
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 433 "mylang.y" /* yacc.c:1906  */

#include <stdio.h>

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
