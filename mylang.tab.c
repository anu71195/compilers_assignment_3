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
#line 1 "mylang.y" /* yacc.c:339  */

#include <stdio.h>
void func(char * s);

#line 71 "mylang.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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



/* Copy the second part of user declarations.  */

#line 217 "mylang.tab.c" /* yacc.c:358  */

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
#define YYLAST   925

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  190
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  407

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

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
      95,    96,    97
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   110,   111,   112,   113,
     114,   118,   119,   123,   124,   125,   129,   130,   133,   134,
     137,   138,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   152,   153,   156,   157,   161,   162,   163,   164,   165,
     166,   169,   170,   171,   174,   175,   178,   179,   180,   183,
     184,   187,   188,   191,   192,   193,   196,   199,   200,   204,
     205,   208,   209,   212,   213,   216,   217,   220,   221,   222,
     225,   226,   227,   228,   229,   232,   233,   234,   237,   238,
     239,   242,   243,   244,   245,   248,   249,   250,   251,   254,
     255,   256,   257,   258,   259,   262,   263,   264,   265,   266,
     269,   270,   273,   274,   275,   276,   277,   280,   281,   282,
     283,   286,   287,   290,   291,   292,   293,   296,   297,   300,
     301,   304,   305,   308,   309,   312,   313,   314,   317,   320,
     321,   324,   325,   328,   329,   330,   331,   332,   333,   336,
     337,   340,   343,   344,   347,   348,   351,   354,   355,   358,
     359,   362,   365,   366,   369,   370,   373,   374,   377,   378,
     381,   382,   385,   386,   389,   390,   391,   392,   393,   394,
     395,   398,   399,   400,   401,   404,   407,   408,   409,   410,
     413,   414,   415,   416,   417,   420,   421,   424,   425,   426,
     427
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CHAR", "CONTINUE", "ELSE",
  "FLOAT", "FOR", "IF", "INT", "RETURN", "VOID", "WHILE", "PROC", "LNK",
  "JB", "COLON", "CLUST", "CLUSTER", "PROCESSOR", "ISA", "PROC_TYPE",
  "CLOCK_SPEED", "MEM1", "MEM2", "NAME", "TOPOLOGY", "LINK_BANDWIDTH",
  "LINK_CAPACITY", "LINK", "START_POINT", "END_POINT", "MEMORY_TYPE",
  "MEMORY_SIZE", "JOB", "JOB_ID", "FLOPS_REQUIRED", "DEADLINE",
  "MEM_REQUIRED", "AFFINITY", "RUN", "WAIT", "DISCARD_JOB", "STOP",
  "GET_AVAILABLE_MEMORY", "GET_JOB_AFFINITY", "GET_JOB_MEMORY",
  "GET_FLOPS", "GET_DEADLINE", "IS_RUNNING", "SUBMIT_JOBS",
  "GET_FLOPS_SPEED", "GET_PROC_TYPE", "IS_PROCESSOR", "GET_PROCESSOR",
  "MEM", "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "RIGHT_OP", "LEFT_OP",
  "INC_OP", "DEC_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "SEMI_COLON", "LEFT_CURLY", "RIGHT_CURLY", "COMMA", "ASGN_OP",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "LEFT_BRACKET", "RIGHT_BRACKET",
  "DOT", "AMPERSAND", "NOT_OP", "BTW_NOT", "MINUS", "PLUS", "MUL_OP",
  "DIV_OP", "MOD_OP", "LESS_THAN", "GREATER_THAN", "XOR_OP", "BTW_OR",
  "INVALID", "MEMORY", "PROCESSORS", "DEREF_OP", "GET_CLOCK_SPEED",
  "MEM_TYPES", "$accept", "Start", "Object_declaration", "Dec_specifier",
  "array_initialiser", "Function_declaration", "body_or_proto",
  "argument_list", "type_specifier", "pointer", "statement_list",
  "Statement", "Jump_statement", "Selection_statement",
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
  "affinity_args", "list", "function_expression", "object_function",
  "memory_function", "job_function", "processor_function",
  "cluster_function", "job_list", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351,   352
};
# endif

#define YYPACT_NINF -303

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-303)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     304,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
      18,   304,   162,   304,   -59,  -303,  -303,    13,  -303,  -303,
     562,   224,   -34,  -303,   -59,  -303,  -303,    -8,   100,   -10,
      -4,     4,    36,    48,    50,    59,    65,    68,   103,   840,
     840,  -303,  -303,  -303,  -303,  -303,  -303,    75,    53,    80,
    -303,  -303,    94,   111,   109,    90,   116,    52,    69,    77,
     243,   130,   840,   105,   139,   -34,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,   389,   562,   562,  -303,   -22,   152,
     118,   178,   200,  -303,   -49,   173,   636,   724,   231,   562,
      84,   185,   182,   160,  -303,  -303,   -17,  -303,   562,   840,
     840,   840,   840,   840,   840,   840,   840,   840,   840,   840,
     840,   840,   840,   840,   840,   840,   840,   562,  -303,  -303,
    -303,   389,   217,  -303,   210,   215,  -303,  -303,  -303,   332,
    -303,   222,   118,  -303,   231,   223,   226,   229,  -303,   232,
     233,  -303,  -303,   236,   239,  -303,   237,   242,   220,   230,
     248,   251,   255,   256,  -303,   257,   259,   274,   278,   279,
     280,   281,   282,   283,   284,   286,   288,  -303,  -303,  -303,
    -303,  -303,   290,  -303,   292,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,   294,  -303,  -303,  -303,   298,
     299,   295,   296,   562,   302,  -303,   332,  -303,   211,   306,
     332,  -303,  -303,  -303,  -303,   309,   304,  -303,   303,    45,
      11,   358,    23,   840,   665,   840,   753,   231,  -303,  -303,
      84,    84,  -303,  -303,  -303,   307,   308,   310,   311,   316,
     317,    84,   320,   321,   202,   322,   285,   695,   312,  -303,
    -303,   446,   562,  -303,   562,   327,    54,  -303,  -303,  -303,
    -303,  -303,  -303,   231,   326,  -303,   328,  -303,   330,  -303,
     333,  -303,   331,  -303,   337,  -303,   344,  -303,   338,  -303,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,   345,  -303,
    -303,   325,  -303,   346,  -303,  -303,   349,  -303,    16,   389,
     446,   350,   351,  -303,   356,   369,    89,   371,    20,   840,
      89,   840,   782,  -303,  -303,   840,   532,  -303,  -303,  -303,
     503,   364,   332,  -303,  -303,   362,  -303,   365,  -303,   363,
    -303,    16,   422,  -303,  -303,   367,  -303,   368,  -303,   370,
    -303,   375,   374,   332,   377,   332,  -303,   840,   607,   -18,
    -303,     0,   607,   840,   811,   840,  -303,  -303,   332,   372,
    -303,   380,  -303,    16,   424,   381,  -303,    16,  -303,   382,
    -303,   384,   383,  -303,   439,   840,  -303,     6,   -18,  -303,
     840,    -3,  -303,   387,  -303,   388,  -303,  -303,  -303,   393,
     403,   392,   332,   -18,   386,   402,   399,  -303,   406,  -303,
     403,   403,  -303,  -303,   401,  -303,  -303
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
       0,     0,     0,     0,    86,    87,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    98,
      99,     0,     0,    15,     0,     0,     6,     7,    19,     0,
      17,    21,     0,   115,     0,     0,     0,     0,   130,     0,
       0,   143,    81,     0,     0,   153,     0,   118,     0,     0,
     188,   190,     0,     0,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,   173,   172,
     171,   174,     0,   148,     0,    52,    57,    59,    61,    64,
      66,    68,    69,    73,    74,    71,    72,    77,    76,    80,
      79,    82,    83,    84,    53,     0,     9,   100,   101,     0,
       0,     0,     0,     0,     0,    50,     0,    40,     0,     0,
      34,    39,    37,    38,    36,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   164,   165,
       0,     0,   166,   167,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,    43,
      42,     0,     0,    41,     0,     0,   103,    18,    33,    49,
      20,   116,   113,     0,     0,   120,     0,   129,     0,   132,
       0,   142,     0,   145,     0,   152,     0,   155,     0,   117,
     187,   189,   175,   176,   177,   178,   179,   180,     0,   183,
     184,   103,   185,     0,   182,   147,     0,   150,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   186,     0,     0,   127,   146,    14,
       0,     0,     0,   114,   119,     0,   122,     0,   131,     0,
     140,     0,   138,   139,   144,     0,   154,     0,   157,     0,
     149,     0,     0,     0,     0,     0,    46,     0,     0,     0,
     128,     0,     0,     0,     0,     0,   125,    47,     0,     0,
     121,     0,   124,     0,   135,     0,   137,     0,   156,     0,
     159,     0,     0,    48,    45,     0,   111,     0,     0,   141,
       0,     0,   126,     0,   123,     0,   134,   136,   158,     0,
       0,     0,     0,     0,     0,   162,     0,   151,     0,   133,
       0,     0,   161,    44,     0,   163,   160
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,    73,   166,     2,  -114,  -303,   348,   267,  -303,   460,
    -201,  -290,  -303,  -303,  -303,  -234,   -16,   376,   -63,   395,
     385,   390,   394,   396,   150,   121,   161,   169,  -303,   -20,
    -303,   459,    -9,   -11,   465,   -82,  -303,  -124,  -303,   187,
     143,  -302,  -303,  -303,  -303,  -303,  -251,  -303,  -303,  -303,
    -287,  -303,  -303,   -76,  -303,  -303,  -303,  -303,  -303,  -127,
    -303,  -303,  -303,  -303,  -303,  -303,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   207,   208,   122,    13,   130,    82,    14,    25,
     209,   210,   211,   212,   213,   214,   215,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   142,
      62,    63,    64,    65,    66,    67,   136,   148,   266,   327,
     363,   318,    68,   139,   270,   331,   332,    69,   143,   274,
      70,   174,   298,    71,   146,   278,   339,   371,   391,   396,
      72,   167,   168,   169,   170,   171,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      61,    22,    12,    21,    48,   255,   147,   195,   133,   258,
     218,    30,    31,    12,   151,    12,   172,   300,    15,    94,
      95,   333,    32,   141,   145,   365,    24,    33,   134,   350,
      81,   385,   346,    34,    35,    36,    37,   389,   264,   330,
     119,   120,   118,    76,   329,   135,   268,    83,   126,    38,
      18,    19,   147,   357,    61,    61,    61,   330,   123,   124,
     125,   376,   333,   330,   333,   379,   320,    20,   373,    61,
     265,    84,    61,   149,   390,    47,   155,   330,    61,    85,
     173,   269,   175,    26,    16,    47,    23,    27,    28,   316,
     333,   333,   317,    47,   191,   192,   193,    61,   364,    47,
     366,    61,   262,   279,     1,   123,   333,     2,    29,    61,
       3,    86,     4,    47,     5,     6,     7,   325,     8,    33,
     104,   105,   263,    87,    26,    88,   386,   387,    27,    97,
      34,    35,    36,    37,    89,   106,   107,   110,   111,   304,
      90,   150,   399,    91,   359,   147,    38,    18,    19,    29,
      96,    39,    40,    98,   151,   151,     9,   108,   109,    99,
     271,   273,   275,   277,    20,   151,    11,   119,   120,    41,
      42,    43,    44,    45,    46,   100,    80,    11,    92,    11,
     102,   147,    93,    61,   297,   319,    61,   253,   128,   129,
      61,   398,   280,   281,   137,   138,   103,    22,    29,    21,
     101,    30,    31,   288,   117,   156,   157,   158,   159,   160,
     161,   162,    32,   163,   164,   165,    75,    33,    81,    17,
      18,    19,   127,    34,    35,    36,    37,   183,   184,   185,
     186,    61,    61,   293,    61,   131,   301,    20,   302,    38,
      18,    19,   153,   326,    39,    40,   334,   326,   336,   338,
      30,    31,   340,   342,   181,   182,   166,    20,   154,   291,
      18,    19,    41,    42,    43,    44,    45,    46,   256,    18,
      19,   187,   188,   404,   405,    47,   132,    20,   292,    61,
      61,   189,   190,   123,   360,   362,    20,   196,   197,   362,
     368,   370,   372,   198,    73,   216,   228,   219,    74,   220,
      61,    75,    61,   221,   344,   222,   229,   223,     1,   224,
     226,     2,   384,   225,     3,   227,     4,   388,     5,     6,
       7,   230,     8,    61,   231,    61,   112,   113,   114,   115,
     116,   232,   233,   234,   235,   199,     1,   200,    61,     2,
     201,   202,     3,   203,     4,   204,     5,     6,     7,   236,
       8,    30,    31,   237,   238,   239,   240,   241,   242,   243,
       9,   244,    32,   245,   246,   247,   248,    33,   249,   250,
     251,   252,    61,    34,    35,    36,    37,   254,   257,   259,
     267,   261,   295,   282,   283,   299,   284,   285,     9,    38,
      18,    19,   286,   287,    39,    40,   289,   290,   294,   303,
     305,   306,   205,   206,   307,   309,   308,    20,    30,    31,
     310,   312,    41,    42,    43,    44,    45,    46,   311,    32,
      29,   313,   314,   315,    33,    47,   321,   322,   324,   328,
      34,    35,    36,    37,   323,   345,   347,   349,   348,   351,
     352,   377,   353,   354,   374,   383,    38,    18,    19,   355,
     356,    39,    40,   358,   375,   378,   380,   381,   392,   382,
     121,   395,   393,   400,    20,    30,    31,   394,   397,    41,
      42,    43,    44,    45,    46,   401,    32,   402,   403,   406,
     217,    33,    47,   260,    77,   177,    78,    34,    35,    36,
      37,   178,    79,   194,   176,   367,   179,   335,     0,   180,
       0,     0,     0,    38,    18,    19,     0,     0,    39,    40,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,    20,    30,    31,     0,     0,    41,    42,    43,    44,
      45,    46,     0,    32,     0,     0,     0,     0,    33,    47,
       0,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
      38,    18,    19,     0,     0,    39,    40,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,     0,    20,   343,
       0,    30,    31,    41,    42,    43,    44,    45,    46,    38,
      18,    19,    32,     0,    39,    40,    47,    33,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    20,     0,     0,
       0,     0,    41,    42,    43,    44,    45,    46,     0,    38,
      18,    19,     0,     0,    39,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   361,    20,     0,     0,
       0,     0,    41,    42,    43,    44,    45,    46,    34,    35,
      36,    37,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    18,    19,   140,     0,    39,
      40,     0,     0,     0,     0,     0,     0,    34,    35,    36,
      37,     0,    20,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    38,    18,    19,     0,   272,    39,    40,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
       0,    20,     0,     0,     0,     0,    41,    42,    43,    44,
      45,    46,    38,    18,    19,     0,     0,    39,    40,   296,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
      20,     0,     0,     0,     0,    41,    42,    43,    44,    45,
      46,     0,    38,    18,    19,     0,     0,    39,    40,     0,
     144,     0,     0,     0,     0,    34,    35,    36,    37,     0,
      20,     0,     0,     0,     0,    41,    42,    43,    44,    45,
      46,    38,    18,    19,     0,     0,    39,    40,     0,     0,
     276,     0,     0,     0,    34,    35,    36,    37,     0,    20,
       0,     0,     0,     0,    41,    42,    43,    44,    45,    46,
      38,    18,    19,     0,     0,    39,    40,     0,     0,     0,
     337,     0,     0,    34,    35,    36,    37,     0,    20,     0,
       0,     0,     0,    41,    42,    43,    44,    45,    46,    38,
      18,    19,     0,     0,    39,    40,     0,     0,     0,     0,
     369,     0,    34,    35,    36,    37,     0,    20,     0,     0,
       0,     0,    41,    42,    43,    44,    45,    46,    38,    18,
      19,     0,     0,    39,    40,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,     0,    20,     0,     0,     0,
       0,    41,    42,    43,    44,    45,    46,    38,    18,    19,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
      41,    42,    43,    44,    45,    46
};

static const yytype_int16 yycheck[] =
{
      20,    12,     0,    12,    20,   206,    88,   121,    57,   210,
     134,    19,    20,    11,    90,    13,    33,   251,     0,    39,
      40,   308,    30,    86,    87,    25,    85,    35,    77,   331,
      28,    25,   322,    41,    42,    43,    44,    40,    27,    57,
      62,    63,    62,    77,    24,    94,    23,    57,    70,    57,
      58,    59,   134,   343,    74,    75,    76,    57,    74,    75,
      76,   363,   349,    57,   351,   367,   300,    75,   358,    89,
      59,    75,    92,    89,    77,    93,    92,    57,    98,    75,
      97,    58,    98,    70,    11,    93,    13,    74,    75,    73,
     377,   378,    76,    93,   114,   115,   116,   117,   349,    93,
     351,   121,    57,   227,     4,   121,   393,     7,    95,   129,
      10,    75,    12,    93,    14,    15,    16,    28,    18,    35,
      68,    69,    77,    75,    70,    75,   377,   378,    74,    76,
      41,    42,    43,    44,    75,    66,    67,    60,    61,   263,
      75,    57,   393,    75,   345,   227,    57,    58,    59,    95,
      75,    62,    63,    73,   230,   231,    56,    88,    89,    65,
     223,   224,   225,   226,    75,   241,     0,    62,    63,    80,
      81,    82,    83,    84,    85,    64,    76,    11,    75,    13,
      90,   263,    79,   203,   247,   299,   206,   203,    70,    71,
     210,   392,   230,   231,    21,    22,    80,   208,    95,   208,
      91,    19,    20,   241,    74,    45,    46,    47,    48,    49,
      50,    51,    30,    53,    54,    55,    77,    35,   216,    57,
      58,    59,    70,    41,    42,    43,    44,   106,   107,   108,
     109,   251,   252,   244,   254,    57,   252,    75,   254,    57,
      58,    59,    57,   306,    62,    63,   309,   310,   311,   312,
      19,    20,   315,   316,   104,   105,    96,    75,    76,    57,
      58,    59,    80,    81,    82,    83,    84,    85,    57,    58,
      59,   110,   111,   400,   401,    93,    76,    75,    76,   299,
     300,   112,   113,   299,   347,   348,    75,    70,    78,   352,
     353,   354,   355,    78,    70,    73,    76,    74,    74,    73,
     320,    77,   322,    74,   320,    73,    76,    74,     4,    73,
      73,     7,   375,    74,    10,    73,    12,   380,    14,    15,
      16,    73,    18,   343,    73,   345,    83,    84,    85,    86,
      87,    76,    76,    76,    75,     3,     4,     5,   358,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    75,
      18,    19,    20,    75,    75,    75,    75,    75,    75,    75,
      56,    75,    30,    75,    74,    73,    72,    35,    70,    70,
      75,    75,   392,    41,    42,    43,    44,    75,    72,    70,
      22,    78,    97,    76,    76,    73,    76,    76,    56,    57,
      58,    59,    76,    76,    62,    63,    76,    76,    76,    72,
      74,    73,    70,    71,    74,    74,    73,    75,    19,    20,
      73,    73,    80,    81,    82,    83,    84,    85,    74,    30,
      95,    76,    76,    74,    35,    93,    76,    76,    59,    58,
      41,    42,    43,    44,    78,    71,    74,    74,    73,    17,
      73,    17,    74,    73,    72,     6,    57,    58,    59,    74,
      76,    62,    63,    76,    74,    74,    74,    73,    71,    76,
      71,    58,    74,    77,    75,    19,    20,    74,    76,    80,
      81,    82,    83,    84,    85,    73,    30,    78,    72,    78,
     132,    35,    93,   216,    24,   100,    27,    41,    42,    43,
      44,   101,    27,   117,    99,   352,   102,   310,    -1,   103,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    75,    19,    20,    -1,    -1,    80,    81,    82,    83,
      84,    85,    -1,    30,    -1,    -1,    -1,    -1,    35,    93,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      57,    58,    59,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    -1,    75,    76,
      -1,    19,    20,    80,    81,    82,    83,    84,    85,    57,
      58,    59,    30,    -1,    62,    63,    93,    35,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    -1,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    41,    42,
      43,    44,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    31,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    -1,    75,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    57,    58,    59,    -1,    32,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      -1,    75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    57,    58,    59,    -1,    -1,    62,    63,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    -1,    57,    58,    59,    -1,    -1,    62,    63,    -1,
      36,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    -1,
      75,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    57,    58,    59,    -1,    -1,    62,    63,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    44,    -1,    75,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      57,    58,    59,    -1,    -1,    62,    63,    -1,    -1,    -1,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    75,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    -1,    75,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    57,    58,
      59,    -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    -1,    75,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    57,    58,    59,
      -1,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,    10,    12,    14,    15,    16,    18,    56,
      99,   100,   101,   103,   106,     0,    99,    57,    58,    59,
      75,   130,   131,    99,    85,   107,    70,    74,    75,    95,
      19,    20,    30,    35,    41,    42,    43,    44,    57,    62,
      63,    80,    81,    82,    83,    84,    85,    93,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   140,   145,
     148,   151,   158,    70,    74,    77,    77,   107,   129,   132,
      76,   101,   105,    57,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    79,   127,   127,    75,    76,    73,    65,
      64,    91,    90,    80,    68,    69,    66,    67,    88,    89,
      60,    61,    83,    84,    85,    86,    87,    74,   127,    62,
      63,    71,   102,   114,   114,   114,    70,    70,    70,    71,
     104,    57,    76,    57,    77,    94,   134,    21,    22,   141,
      31,   116,   127,   146,    36,   116,   152,   133,   135,   114,
      57,   151,   164,    57,    76,   114,    45,    46,    47,    48,
      49,    50,    51,    53,    54,    55,    96,   159,   160,   161,
     162,   163,    33,    97,   149,   114,   117,   118,   119,   120,
     121,   122,   122,   123,   123,   123,   123,   124,   124,   125,
     125,   127,   127,   127,   115,   102,    70,    78,    78,     3,
       5,     8,     9,    11,    13,    70,    71,   100,   101,   108,
     109,   110,   111,   112,   113,   114,    73,   104,   135,    74,
      73,    74,    73,    74,    73,    74,    73,    73,    76,    76,
      73,    73,    76,    76,    76,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    74,    73,    72,    70,
      70,    75,    75,   114,    75,   108,    57,    72,   108,    70,
     105,    78,    57,    77,    27,    59,   136,    22,    23,    58,
     142,   116,    32,   116,   147,   116,    37,   116,   153,   135,
     164,   164,    76,    76,    76,    76,    76,    76,   164,    76,
      76,    57,    76,   131,    76,    97,    34,   116,   150,    73,
     113,   114,   114,    72,   135,    74,    73,    74,    73,    74,
      73,    74,    73,    76,    76,    74,    73,    76,   139,   102,
     113,    76,    76,    78,    59,    28,   116,   137,    58,    24,
      57,   143,   144,   148,   116,   137,   116,    38,   116,   154,
     116,    26,   116,    76,   114,    71,   109,    74,    73,    74,
     139,    17,    73,    74,    73,    74,    76,   109,    76,   108,
     116,    29,   116,   138,   144,    25,   144,   138,   116,    39,
     116,   155,   116,   109,    72,    74,   139,    17,    74,   139,
      74,    73,    76,     6,   116,    25,   144,   144,   116,    40,
      77,   156,    71,    74,    74,    58,   157,    76,   108,   144,
      77,    73,    78,    72,   157,   157,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   110,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   115,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     123,   123,   123,   123,   123,   124,   124,   124,   125,   125,
     125,   126,   126,   126,   126,   127,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   139,   140,   141,
     141,   142,   142,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   146,   146,   147,   147,   148,   149,   149,   150,
     150,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   159,   160,   161,   161,   161,   161,
     162,   162,   162,   162,   162,   163,   163,   164,   164,   164,
     164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     5,     5,     3,     5,
       3,     2,     1,     3,     5,     1,     6,     5,     3,     1,
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
       1,     3,     1,     3,     1,     3,     5,     1,     8,     3,
       1,     3,     1,     7,     5,     3,     5,     3,     1,     1,
       1,    10,     3,     1,     3,     1,     6,     3,     1,     3,
       1,    12,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     3,     1,     3,     4,     4,     4,     4,     3,     4,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     3,     4,     3,     1,     3,
       1
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
#line 104 "mylang.y" /* yacc.c:1646  */
    {func("Start->Function_declaration Start\n");}
#line 1709 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 105 "mylang.y" /* yacc.c:1646  */
    {func("Start->Object_declaration Start\n");}
#line 1715 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 106 "mylang.y" /* yacc.c:1646  */
    {func("Start->Function_declaration\n");}
#line 1721 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 107 "mylang.y" /* yacc.c:1646  */
    {func("Start->Object_declaration\n");}
#line 1727 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 110 "mylang.y" /* yacc.c:1646  */
    {func("Object_declaration->Dec_specifier IDENTIFIER ASGN_OP postfix_expression SEMI_COLON\n");}
#line 1733 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "mylang.y" /* yacc.c:1646  */
    {func("Object_declaration->Dec_specifier IDENTIFIER ASGN_OP object_expression SEMI_COLON\n");}
#line 1739 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 112 "mylang.y" /* yacc.c:1646  */
    {func("Object_declaration->Dec_specifier IDENTIFIER SEMI_COLON\n");}
#line 1745 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 113 "mylang.y" /* yacc.c:1646  */
    {func("Object_declaration->Dec_specifier array_expression ASGN_OP array_initialiser SEMI_COLON\n");}
#line 1751 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "mylang.y" /* yacc.c:1646  */
    {func("Object_declaration->Dec_specifier array_expression SEMI_COLON\n");}
#line 1757 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "mylang.y" /* yacc.c:1646  */
    {func("Dec_specifier->Type_specifier pointer\n");}
#line 1763 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 119 "mylang.y" /* yacc.c:1646  */
    {func("Dec_specifier->Type_specifier\n");}
#line 1769 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 123 "mylang.y" /* yacc.c:1646  */
    {func("array_initialiser->LEFT_CURLY array_initialiser RIGHT_CURLY\n");}
#line 1775 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 124 "mylang.y" /* yacc.c:1646  */
    {func("array_initialiser->array_initialiser COMMA LEFT_CURLY array_initialiser RIGHT_CURLY\n");}
#line 1781 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 125 "mylang.y" /* yacc.c:1646  */
    {func("array_initialiser->expression\n");}
#line 1787 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 129 "mylang.y" /* yacc.c:1646  */
    {func("Function_declaration->Dec_specifier IDENTIFIER LEFT_PARENTHESIS argument_list RIGHT_PARENTHESIS body_or_proto\n");}
#line 1793 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 130 "mylang.y" /* yacc.c:1646  */
    {func("Function_declaration->Dec_specifier IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS body_or_proto\n");}
#line 1799 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 133 "mylang.y" /* yacc.c:1646  */
    {func("body_or_proto->LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1805 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 134 "mylang.y" /* yacc.c:1646  */
    {func("body_or_proto->SEMI_COLON\n");}
#line 1811 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "mylang.y" /* yacc.c:1646  */
    {func("argument_list->Dec_specifier IDENTIFIER COMMA argument_list\n");}
#line 1817 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 138 "mylang.y" /* yacc.c:1646  */
    {func("argument_list->Dec_specifier IDENTIFIER\n");}
#line 1823 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 141 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->INT\n");}
#line 1829 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 142 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->VOID\n");}
#line 1835 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 143 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->FLOAT\n");}
#line 1841 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 144 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->CHAR\n");}
#line 1847 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 145 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->PROC\n");}
#line 1853 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 146 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->CLUST\n");}
#line 1859 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 147 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->JB\n");}
#line 1865 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 148 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->MEM\n");}
#line 1871 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 149 "mylang.y" /* yacc.c:1646  */
    {func("type_specifier->LNK\n");}
#line 1877 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 152 "mylang.y" /* yacc.c:1646  */
    {func("pointer->MUL_OP pointer\n");}
#line 1883 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 153 "mylang.y" /* yacc.c:1646  */
    {func("pointer->MUL_OP\n");}
#line 1889 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 156 "mylang.y" /* yacc.c:1646  */
    {func("statement_list->Statement statement_list\n");}
#line 1895 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 157 "mylang.y" /* yacc.c:1646  */
    {func("statement_list->Statement\n");}
#line 1901 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 161 "mylang.y" /* yacc.c:1646  */
    {func("Statement->LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1907 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 162 "mylang.y" /* yacc.c:1646  */
    {func("Statement->Expression_Statement\n");}
#line 1913 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 163 "mylang.y" /* yacc.c:1646  */
    {func("Statement->Selection_statement\n");}
#line 1919 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 164 "mylang.y" /* yacc.c:1646  */
    {func("Statement->Iteration_statement\n");}
#line 1925 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 165 "mylang.y" /* yacc.c:1646  */
    {func("Statement->Jump_statement\n");}
#line 1931 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 166 "mylang.y" /* yacc.c:1646  */
    {func("Statement->Object_declaration\n");}
#line 1937 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 169 "mylang.y" /* yacc.c:1646  */
    {func("Jump_statement->RETURN expression\n");}
#line 1943 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 170 "mylang.y" /* yacc.c:1646  */
    {func("Jump_statement->CONTINUE SEMI_COLON\n");}
#line 1949 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 171 "mylang.y" /* yacc.c:1646  */
    {func("Jump_statement->BREAK SEMI_COLON\n");}
#line 1955 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "mylang.y" /* yacc.c:1646  */
    {func("Select_statement->IF LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY else LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1961 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 175 "mylang.y" /* yacc.c:1646  */
    {func("Select_statement->IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY\n");}
#line 1967 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 178 "mylang.y" /* yacc.c:1646  */
    {func("Iteration_Statement->WHILE LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS Statement\n");}
#line 1973 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 179 "mylang.y" /* yacc.c:1646  */
    {func("Iteration_Statement->FOR LEFT_PARENTHESIS Expression_statement Expression_statement RIGHT_PARENTHESIS Statement\n");}
#line 1979 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 180 "mylang.y" /* yacc.c:1646  */
    {func("Iteration_Statement->FOR LEFT_PARENTHESIS Expression_statement Expression_statement expression RIGHT_PARENTHESIS Statement\n");}
#line 1985 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 183 "mylang.y" /* yacc.c:1646  */
    {func("Expression_Statement->expression SEMI_COLON\n");}
#line 1991 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 184 "mylang.y" /* yacc.c:1646  */
    {func("Expression_Statement->SEMI_COLON\n");}
#line 1997 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 187 "mylang.y" /* yacc.c:1646  */
    {func("expression->assignment_expression\n");}
#line 2003 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 188 "mylang.y" /* yacc.c:1646  */
    {func("expression->assignment_expression COMMA expression\n");}
#line 2009 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 191 "mylang.y" /* yacc.c:1646  */
    {func("assignment_expression->unary_expression ASGN_OP assignment_expression\n");}
#line 2015 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 192 "mylang.y" /* yacc.c:1646  */
    {func("assignment_expression->conditional_expression\n");}
#line 2021 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 193 "mylang.y" /* yacc.c:1646  */
    {func("assignment_expression->object_expression\n");}
#line 2027 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 196 "mylang.y" /* yacc.c:1646  */
    {func("conditional_expression->logical_or_expression\n");}
#line 2033 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 199 "mylang.y" /* yacc.c:1646  */
    {func("logical_or_expression->logical_or_expression OR_OP logical_and_expression\n");}
#line 2039 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 200 "mylang.y" /* yacc.c:1646  */
    {func("logical_or_expression->logical_and_expression\n");}
#line 2045 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 204 "mylang.y" /* yacc.c:1646  */
    {func("logical_and_expression->logical_and_expression AND_OP bitwise_or_expression\n");}
#line 2051 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 205 "mylang.y" /* yacc.c:1646  */
    {func("logical_and_expression->bitwise_or_expression\n");}
#line 2057 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 208 "mylang.y" /* yacc.c:1646  */
    {func("bitwise_or_expression->bitwise_or_expression BTW_OR bitwise_xor_expression\n");}
#line 2063 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 209 "mylang.y" /* yacc.c:1646  */
    {func("bitwise_or_expression->bitwise_xor_expression\n");}
#line 2069 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 212 "mylang.y" /* yacc.c:1646  */
    {func("bitwise_xor_expression->and_expression\n");}
#line 2075 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 213 "mylang.y" /* yacc.c:1646  */
    {func("bitwise_xor_expression->bitwise_xor_expression XOR_OP and_expression\n");}
#line 2081 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 216 "mylang.y" /* yacc.c:1646  */
    {func("and_expression->equality_expression\n");}
#line 2087 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 217 "mylang.y" /* yacc.c:1646  */
    {func("and_expression->equality_expression AMPERSAND and_expression\n");}
#line 2093 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 220 "mylang.y" /* yacc.c:1646  */
    {func("equality_expression->relational_expression\n");}
#line 2099 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 221 "mylang.y" /* yacc.c:1646  */
    {func("equality_expression->equality_expression EQ_OP relational_expression\n");}
#line 2105 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 222 "mylang.y" /* yacc.c:1646  */
    {func("equality_expression->equality_expression NE_OP relational_expression\n");}
#line 2111 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 225 "mylang.y" /* yacc.c:1646  */
    {func("relational_expression->shift_expression\n");}
#line 2117 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 226 "mylang.y" /* yacc.c:1646  */
    {func("relational_expression->relational_expression LESS_THAN shift_expression\n");}
#line 2123 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 227 "mylang.y" /* yacc.c:1646  */
    {func("relational_expression->relational_expression GREATER_THAN shift_expression\n");}
#line 2129 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 228 "mylang.y" /* yacc.c:1646  */
    {func("relational_expression->relational_expression LE_OP shift_expression\n");}
#line 2135 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 229 "mylang.y" /* yacc.c:1646  */
    {func("relational_expression->relational_expression GE_OP shift_expression\n");}
#line 2141 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 232 "mylang.y" /* yacc.c:1646  */
    {func("shift_expression->additive_expression\n");}
#line 2147 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 233 "mylang.y" /* yacc.c:1646  */
    {func("shift_expression->shift_expression LEFT_OP additive_expression\n");}
#line 2153 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 234 "mylang.y" /* yacc.c:1646  */
    {func("shift_expression->shift_expression RIGHT_OP additive_expression\n");}
#line 2159 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 237 "mylang.y" /* yacc.c:1646  */
    {func("additive_expression->multiplicative_expression\n");}
#line 2165 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 238 "mylang.y" /* yacc.c:1646  */
    {func("additive_expression->additive_expression PLUS multiplicative_expression\n");}
#line 2171 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 239 "mylang.y" /* yacc.c:1646  */
    {func("additive_expression->additive_expression MINUS multiplicative_expression\n");}
#line 2177 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 242 "mylang.y" /* yacc.c:1646  */
    {func("multiplicative_expression->unary_expression\n");}
#line 2183 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 243 "mylang.y" /* yacc.c:1646  */
    {func("multiplicative_expression->multiplicative_expression MUL_OP unary_expression\n");}
#line 2189 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 244 "mylang.y" /* yacc.c:1646  */
    {func("multiplicative_expression->multiplicative_expression DIV_OP unary_expressionn\n");}
#line 2195 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 245 "mylang.y" /* yacc.c:1646  */
    {func("multiplicative_expression->multiplicative_expression MOD_OP unary_expression\n");}
#line 2201 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 248 "mylang.y" /* yacc.c:1646  */
    {func("unary_expression->postfix_expressoin\n");}
#line 2207 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 249 "mylang.y" /* yacc.c:1646  */
    {func("unary_expression->INC_OP unary_expressoin\n");}
#line 2213 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 250 "mylang.y" /* yacc.c:1646  */
    {func("unary_expression->DEC_OP unary_expression\n");}
#line 2219 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 251 "mylang.y" /* yacc.c:1646  */
    {func("unary_expression->unary_operator unary_expression\n");}
#line 2225 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 254 "mylang.y" /* yacc.c:1646  */
    {func("unary_operator->PLUS\n");}
#line 2231 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 255 "mylang.y" /* yacc.c:1646  */
    {func("unary_operator->MINUS\n");}
#line 2237 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 256 "mylang.y" /* yacc.c:1646  */
    {func("unary_operator->BTW_NOT\n");}
#line 2243 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 257 "mylang.y" /* yacc.c:1646  */
    {func("unary_operator->NOT_OP\n");}
#line 2249 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 258 "mylang.y" /* yacc.c:1646  */
    {func("unary_operator->MUL_OP\n");}
#line 2255 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 259 "mylang.y" /* yacc.c:1646  */
    {func("unary_operator->AMPERSAND\n");}
#line 2261 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 262 "mylang.y" /* yacc.c:1646  */
    {func("postfix_expression->primary_expression\n");}
#line 2267 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 263 "mylang.y" /* yacc.c:1646  */
    {func("postfix_expression->array_expression\n");}
#line 2273 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 264 "mylang.y" /* yacc.c:1646  */
    {func("postfix_expression->function_expression\n");}
#line 2279 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 265 "mylang.y" /* yacc.c:1646  */
    {func("postfix_expression->postfix_expression INC_OP\n");}
#line 2285 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 266 "mylang.y" /* yacc.c:1646  */
    {func("postfix_expression->postfix_expression DEC_OP\n");}
#line 2291 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 269 "mylang.y" /* yacc.c:1646  */
    {func("array_expression->array_expression LEFT_BRACKET expression RIGHT_EXPRESSION\n");}
#line 2297 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 270 "mylang.y" /* yacc.c:1646  */
    {func("array_expression->Primary_expression LEFT_BRACKET expression RIGHT_BRACKET\n");}
#line 2303 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 273 "mylang.y" /* yacc.c:1646  */
    {func("primary_expression->IDENTIFIER DEREF_OP IDENTIFIER\n");}
#line 2309 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 274 "mylang.y" /* yacc.c:1646  */
    {func("primary_expression->IDENTIFIER\n");}
#line 2315 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 275 "mylang.y" /* yacc.c:1646  */
    {func("primary_expression->CONSTANT\n");}
#line 2321 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 276 "mylang.y" /* yacc.c:1646  */
    {func("primary_expression->STRING_LITERAL\n");}
#line 2327 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 277 "mylang.y" /* yacc.c:1646  */
    {func("primary_expression->LEFT_PARENTHESIS expression RIGHT_PARENTHESIS\n");}
#line 2333 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 280 "mylang.y" /* yacc.c:1646  */
    {func("object_expression->link_object\n");}
#line 2339 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 281 "mylang.y" /* yacc.c:1646  */
    {func("object_expression->memory_object\n");}
#line 2345 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 282 "mylang.y" /* yacc.c:1646  */
    {func("object_expression->job_object\n");}
#line 2351 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 283 "mylang.y" /* yacc.c:1646  */
    {func("object_expression->cluster_object\n");}
#line 2357 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 286 "mylang.y" /* yacc.c:1646  */
    {func("cluster_object->CLUSTER LEFT_PARENTHESIS proc_arr_arg COMMA topology_arg COMMA link_band_arg COMMA link_cap_arg narp\n");}
#line 2363 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 287 "mylang.y" /* yacc.c:1646  */
    {func("cluster_object->processor_object\n");}
#line 2369 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 290 "mylang.y" /* yacc.c:1646  */
    {func("proc_arr_arg->PROCESSORS ASGN_OP IDENTIFIER\n");}
#line 2375 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 291 "mylang.y" /* yacc.c:1646  */
    {func("proc_arr_arg->PROCESSORS ASGN_OP LEFT_BRACKET cluster_list RIGHT BRACKET\n");}
#line 2381 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 292 "mylang.y" /* yacc.c:1646  */
    {func("proc_arr_arg->IDENTIFIER\n");}
#line 2387 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 293 "mylang.y" /* yacc.c:1646  */
    {func("proc_arr_arg->LEFT BRACKET cluster_list RIGHT_BRACKET\n");}
#line 2393 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 296 "mylang.y" /* yacc.c:1646  */
    {func("cluster_list->cluster_object COMMA cluster_list\n");}
#line 2399 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 297 "mylang.y" /* yacc.c:1646  */
    {func("cluster_list->cluster_object\n");}
#line 2405 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 300 "mylang.y" /* yacc.c:1646  */
    {func("topology_arg->TOPOLOGY ASGN_OP STRING_LITERAL\n");}
#line 2411 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 301 "mylang.y" /* yacc.c:1646  */
    {func("topology_arg->STRING_LITERAL\n");}
#line 2417 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 304 "mylang.y" /* yacc.c:1646  */
    {func("link_band_arg->LINK_BANDWIDTH ASGN_OP conditional_expression\n");}
#line 2423 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 305 "mylang.y" /* yacc.c:1646  */
    {func("link_band_arg->conditional_expression\n");}
#line 2429 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 308 "mylang.y" /* yacc.c:1646  */
    {func("link_cap_arg->LINK_CAPACITY ASGN_OP conditional_expression\n");}
#line 2435 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 309 "mylang.y" /* yacc.c:1646  */
    {func("link_cap_arg->conditional_expression\n");}
#line 2441 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 312 "mylang.y" /* yacc.c:1646  */
    {func("narp->COMMA conditional_expression RIGHT_PARENTHESIS\n");}
#line 2447 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 313 "mylang.y" /* yacc.c:1646  */
    {func("narp->COMMA NAME ASGN_OP conditional_expression\n");}
#line 2453 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 314 "mylang.y" /* yacc.c:1646  */
    {func("narp->RIGHT PARENTHESIS\n");}
#line 2459 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 317 "mylang.y" /* yacc.c:1646  */
    {func("processor_object->PROCESSOR LEFT_PARENTHESIS isa_args COMMA Clock_args COMMA mem_args narp\n");}
#line 2465 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 320 "mylang.y" /* yacc.c:1646  */
    {func("isa_args->ISA ASGN_OP PROC_TYPE\n");}
#line 2471 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 321 "mylang.y" /* yacc.c:1646  */
    {func("isa_args->PROC_TYPE\n");}
#line 2477 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 324 "mylang.y" /* yacc.c:1646  */
    {func("Clock_args->CLOCK_SPEED ASGN_OP CONSTANT\n");}
#line 2483 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 325 "mylang.y" /* yacc.c:1646  */
    {func("Clock_args->CONSTANT\n");}
#line 2489 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 328 "mylang.y" /* yacc.c:1646  */
    {func("mem_args->MEM1 ASGN_OP memory COMMA MEM2 ASGN_OP Memory\n");}
#line 2495 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 329 "mylang.y" /* yacc.c:1646  */
    {func("mem_args->MEM1 ASGN_OP memory COMMA memory\n");}
#line 2501 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 330 "mylang.y" /* yacc.c:1646  */
    {func("mem_args->MEM1 ASGN_OP memory\n");}
#line 2507 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 331 "mylang.y" /* yacc.c:1646  */
    {func("mem_args->memory COMMA MEM2 ASGN_OP memory\n");}
#line 2513 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 332 "mylang.y" /* yacc.c:1646  */
    {func("mem_args->memory COMMA memory\n");}
#line 2519 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 333 "mylang.y" /* yacc.c:1646  */
    {func("mem_args->memory\n");}
#line 2525 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 336 "mylang.y" /* yacc.c:1646  */
    {func("memory->memory_object\n");}
#line 2531 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 337 "mylang.y" /* yacc.c:1646  */
    {func("memory->IDENTIFIER\n");}
#line 2537 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 340 "mylang.y" /* yacc.c:1646  */
    {func("link_object->LINK LEFT_PARENTHESIS start_args COMMA end_args COMMA link_band_arg COMMA link_cap_arg narp\n");}
#line 2543 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 343 "mylang.y" /* yacc.c:1646  */
    {func("start_args->START_POINT ASGN_OP conditional expression\n");}
#line 2549 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 344 "mylang.y" /* yacc.c:1646  */
    {func("start_args->conditional_expression\n");}
#line 2555 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 347 "mylang.y" /* yacc.c:1646  */
    {func("end_args->END_POINT ASGN_OP conditional_expression\n");}
#line 2561 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 348 "mylang.y" /* yacc.c:1646  */
    {func("end_args->conditional_expression\n");}
#line 2567 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 351 "mylang.y" /* yacc.c:1646  */
    {func("memory_object->MEMORY LEFT_PARENTHESIS mem_type_args COMMA mem_size_args narp\n");}
#line 2573 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 354 "mylang.y" /* yacc.c:1646  */
    {func("mem_type_args->MEMORY_TYPE ASGN_OP MEM_TYPES\n");}
#line 2579 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 355 "mylang.y" /* yacc.c:1646  */
    {func("mem_type_args->MEM_TYPES\n");}
#line 2585 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 358 "mylang.y" /* yacc.c:1646  */
    {func("mem_size_args->MEMORY_SIZE ASGN_OP conditional_expression\n");}
#line 2591 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 359 "mylang.y" /* yacc.c:1646  */
    {func("mem_size_args->conditional_expression\n");}
#line 2597 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 362 "mylang.y" /* yacc.c:1646  */
    {func("job_object->JOB LEFT_PARENTHESIS job_id_args COMMA flop_args COMM deadline_args COMMA mem_required_args COMMA affinity_args RIGHT_PARENTHESIS\n");}
#line 2603 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 365 "mylang.y" /* yacc.c:1646  */
    {func("job_id_args->JOB_ID ASGN_OP conditional_expression\n");}
#line 2609 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 366 "mylang.y" /* yacc.c:1646  */
    {func("job_id_args->conditional_expression\n");}
#line 2615 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 369 "mylang.y" /* yacc.c:1646  */
    {func("flops_args->JOB_ID ASGN_OP conditional_expression\n");}
#line 2621 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 370 "mylang.y" /* yacc.c:1646  */
    {func("flops_args->conditional_expression\n");}
#line 2627 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 373 "mylang.y" /* yacc.c:1646  */
    {func("deadline_args->DEADLINE ASGN_OP conditional_expression\n");}
#line 2633 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 374 "mylang.y" /* yacc.c:1646  */
    {func("deadline_args->conditional_expression\n");}
#line 2639 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 377 "mylang.y" /* yacc.c:1646  */
    {func("mem_required_args->MEM_REQUIRED ASGN_OP conditional_expression\n");}
#line 2645 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 378 "mylang.y" /* yacc.c:1646  */
    {func("mem_required_args->conditional_expression\n");}
#line 2651 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 381 "mylang.y" /* yacc.c:1646  */
    {func("affinity_args->AFFINITY ASGN_OP LEFT_BRACKET list RIGHT_BRACKET\n");}
#line 2657 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 382 "mylang.y" /* yacc.c:1646  */
    {func("affinity_args->LEFT_BRACKET list RIGHT_BRACKET\n");}
#line 2663 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 385 "mylang.y" /* yacc.c:1646  */
    {func("list->CONSTANT\n");}
#line 2669 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 386 "mylang.y" /* yacc.c:1646  */
    {func("list->CONSTANT COMMA list\n");}
#line 2675 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 389 "mylang.y" /* yacc.c:1646  */
    {func("function_expression->RUN LEFT_PARENTHESIS cluster_list RIGHT_PARENTHESIS\n");}
#line 2681 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 390 "mylang.y" /* yacc.c:1646  */
    {func("function_expression->WAIT LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2687 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 391 "mylang.y" /* yacc.c:1646  */
    {func("function_expression->DISCARD_JOB LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
#line 2693 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 392 "mylang.y" /* yacc.c:1646  */
    {func("function_expression->STOP LEFT_PARETHESIS IDENTIFIER RIGHT_PARENTHESIS\n");}
#line 2699 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 393 "mylang.y" /* yacc.c:1646  */
    {func("function_expression->IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2705 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 394 "mylang.y" /* yacc.c:1646  */
    {func("function_expression->IDENTIFIER LEFT_PARENTHESIS expression RIGHT_PARENTHESIS\n");}
#line 2711 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 395 "mylang.y" /* yacc.c:1646  */
    {func("function_expression->IDENTIFIER DOT object_function\n");}
#line 2717 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 398 "mylang.y" /* yacc.c:1646  */
    {func("object_function->processor_function\n");}
#line 2723 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 399 "mylang.y" /* yacc.c:1646  */
    {func("object_function->job_function\n");}
#line 2729 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 400 "mylang.y" /* yacc.c:1646  */
    {func("object_function->memory_function\n");}
#line 2735 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 401 "mylang.y" /* yacc.c:1646  */
    {func("object_function->cluster_function\n");}
#line 2741 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 404 "mylang.y" /* yacc.c:1646  */
    {func("memory_function->GET_AVAILABLE_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2747 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 407 "mylang.y" /* yacc.c:1646  */
    {func("job_function->GET_JOB_AFFINITY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2753 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 408 "mylang.y" /* yacc.c:1646  */
    {func("job_function->GET_JOB_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2759 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 409 "mylang.y" /* yacc.c:1646  */
    {func("job_function->GET_FLOPS LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2765 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 410 "mylang.y" /* yacc.c:1646  */
    {func("job_function->GET_DEADLINE LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2771 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 413 "mylang.y" /* yacc.c:1646  */
    {func("processor_function->IS_RUNNING LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2777 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 414 "mylang.y" /* yacc.c:1646  */
    {func("processor_function->SUBMIT_JOBS LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
#line 2783 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 415 "mylang.y" /* yacc.c:1646  */
    {func("processor_function->GET_CLOCK_SPEED LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2789 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 416 "mylang.y" /* yacc.c:1646  */
    {func("processor_function->GET_PROC_TYPE LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2795 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 417 "mylang.y" /* yacc.c:1646  */
    {func("processor_function->IS_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2801 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 420 "mylang.y" /* yacc.c:1646  */
    {func("cluster_function->GET_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
#line 2807 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 421 "mylang.y" /* yacc.c:1646  */
    {func("cluster_function->GET_PROCESSOR  LEFT_PARENTHESIS primary_expression RIGTH_PARENTHESIS \n");}
#line 2813 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 424 "mylang.y" /* yacc.c:1646  */
    {func("job_list->IDENTIFIER COMMA job_list\n");}
#line 2819 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 425 "mylang.y" /* yacc.c:1646  */
    {func("job_list->IDENTIFIER\n");}
#line 2825 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 426 "mylang.y" /* yacc.c:1646  */
    {func("job_list->job_object COMMA job_list\n");}
#line 2831 "mylang.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 427 "mylang.y" /* yacc.c:1646  */
    {func("job_list->job_object\n");}
#line 2837 "mylang.tab.c" /* yacc.c:1646  */
    break;


#line 2841 "mylang.tab.c" /* yacc.c:1646  */
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
#line 430 "mylang.y" /* yacc.c:1906  */


extern char yytext[];
extern int column;
extern int yylineno;
extern int yyleng;
void func(char * s)
{
	printf("%s",s);
}
int yyerror(s)
char *s;
{
	fflush(stdout);
	printf("At Line No. %d Column No. %d : %s\n",yylineno,column-yyleng,s);
	return 0;
}
FILE * fp;
int main()
{
	fp=fopen("lex_file","w");
	yyparse();
	fclose(fp);
	return 0;
}
