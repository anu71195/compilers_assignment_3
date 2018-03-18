%token BREAK					
%token	CHAR					
%token	CONTINUE				
%token	ELSE					
%token	FLOAT					
%token	FOR						
%token	IF						
%token	INT						
%token	RETURN					
%token	VOID					
%token	WHILE						
%token	PROC						
%token	LNK							
%token	JB							
%token	CLUST						
%token	CLUSTER						
%token	PROCESSOR					
%token	ISA							
%token	PROC_TYPE					
%token	CLOCK_SPEED					
%token	MEM1						
%token	MEM2						
%token	NAME  						
%token	TOPOLOGY					
%token	LINK_BANDWIDTH				
%token	LINK_CAPACITY				
%token	LINK						
%token	START_POINT					
%token	END_POINT					
%token	MEMORY_TYPE					
%token	MEM_TYPE					
%token	MEMORY_SIZE					
%token	JOB							
%token	JOB_ID						
%token	FLOPS_REQUIRED				
%token	DEADLINE					
%token	MEM_REQUIRED				
%token	AFFINITY					
%token	RUN							
%token	WAIT						
%token	DISCARD_JOB					
%token	STOP						
%token	GET_AVAILABLE_MEMORY		
%token	GET_JOB_AFFINITY			
%token	GET_JOB_MEMORY				
%token	GET_FLOPS					
%token	GET_DEADLINE				
%token	IS_RUNNING					
%token	SUBMIT_JOBS					
%token	GET_FLOPS_SPEED				
%token	GET_PROC_TYPE				
%token	IS_PROCESSOR				
%token	GET_PROCESSOR				
%token	MEM												
%token	IDENTIFIER					
%token	CONSTANT					
%token	STRING_LITERAL				
%token	RIGHT_OP					
%token	LEFT_OP						
%token	INC_OP						
%token	DEC_OP						
%token	DREF_OP						
%token	AND_OP						
%token	OR_OP											
%token	LE_OP						
%token	GE_OP						
%token	EQ_OP						
%token	NE_OP						
%token	SEMI_COLON					
%token	LEFT_CURLY					
%token	RIGHT_CURLY					
%token	COMMA						
%token	ASGN_OP						
%token	LEFT_PARENTEHSIS			
%token	RIGHT_PARENTHESIS			
%token	LEFT_BRACKET				
%token	RIGHT_BRACKET				
%token	DOT							
%token	AMPERSAND					
%token	NOT_OP						
%token	BTW_NOT						
%token	MINUS						
%token	PLUS						
%token	MUL_OP						
%token	DIV_OP						
%token	MOD_OP						
%token	LESS_THAN					
%token	GREATER_THAN				
%token	XOR_OP						
%token	BTW_OR						
%token	INVALID						
%token MEMORY 						
%token PROCESSORS					
%start Start
%%
Start
	:Function_declaration Start 						{printf("Start")} 
	|Object_declaration Start
	|Function_declaration
	|Object_declaration
	;


%%
#include <stdio.h>

extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
