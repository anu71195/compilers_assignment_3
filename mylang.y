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
	:Function_declaration Start 						{printf("Start->Function_declaration Start\n");} 
	|Object_declaration Start 							{printf("Start->Object_declaration Start\n");}
	|Function_declaration								{printf("Start->Function_declaration\n");}
	|Object_declaration 								{printf("Start->Object_declaration\n");}
	;
Object_declaration
	:Dec_specifier IDENTIFIER ASGN_OP postfix_expression SEMI_COLON			{printf("Object_declaration->IDENTIFIER ASGN_OP postfix_expression SEMI_COLON\n");}
	|Dec_specifier IDENTIFIER ASGN_OP object_expression SEMI_COLON			{printf("Object_declaration->IDENTIFIER ASGN_OP object_expression SEMI_COLON\n");}
	|Dec_specifier IDENTIFIER SEMI_COLON									{printf("Object_declaration->IDENTIFIER SEMI_COLON\n");}
	|Dec_specifier array_expression ASGN_OP array_initialiser SEMI_COLON {printf("Object_declaration->array_expression ASGN_OP array_initialiser SEMI_COLON\n");}
	|Dec_specifier array_expression SEMI_COLON								{printf("Object_declaration->array_expression SEMI_COLON\n");}
	;

Dec_specifier
	:Type_specifier pointer				{printf("Dec_specifier->Type_specifier pointer\n");}
	|Type_specifier						{printf("Dec_specifier->Type_specifier\n");}
	;

array_initialiser
	:LEFT_CURLY array_initialiser RIGHT_CURLY			{printf("array_initialiser->LEFT_CURLY array_initialiser RIGHT_CURLY\n");}
	|expression COMMA array_initialiser					{printf("array_initialiser->expression COMMA array_initialiser\n");}
	|expression											{printf("array_initialiser->expression\n");}
	;

Function_declaration
	:Dec_specifier IDENTIFIER LEFT_PARENTHESIS argument_list RIGHT_PARENTHESIS body_or_proto {printf("Function_declaration->Dec_specifier IDENTIFIER LEFT_PARENTHESIS argument_list RIGHT_PARENTHESIS body_or_proto\n");}
	|Dec_specifier IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS body_or_proto {printf("Function_declaration->Dec_specifier IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS body_or_proto\n");}
	;
body_or_proto
	:LEFT_CURLY statement_list RIGHT_CURLY	 	{printf("body_or_proto->LEFT_CURLY statement_list RIGHT_CURLY\n");}
	|SEMI_COLON							    	{printf("body_or_proto->SEMI_COLON\n");}
	;
argument_list
	:Dec_specifier identifier COMMA argument_list	{printf("argument_list->Dec_specifier identifier COMMA argument_list\n");}
	|Dec_specifier identifier	{printf("argument_list->Dec_specifier identifier\n");}
	;
type_specifier
	:INT		{printf("type_specifier->INT\n");}
	|VOID		{printf("type_specifier->VOID\n");}
	|FLOAT		{printf("type_specifier->FLOAT\n");}
	|CHAR		{printf("type_specifier->CHAR\n");}
	|PROC		{printf("type_specifier->PROC\n");}
	|CLUST		{printf("type_specifier->CLUST\n");}
	|JB		{printf("type_specifier->JB\n");}
	|MEM		{printf("type_specifier->MEM\n");}
	|LNK		{printf("type_specifier->LNK\n");}
	;
pointer
	:MUL_OP pointer		{printf("pointer->MUL_OP pointer\n");}
	|MUL_OP		{printf("pointer->MUL_OP\n");}
	;
statement_list
	:statement statement_list	{printf("statement_list->statement statement_list\n");}
	|statement	{printf("statement_list->statement\n");}
	;

Statement
	:LEFT_CURLY statement_list RIGHT_CURLY		{printf("Statement->LEFT_CURLY statement_list RIGHT_CURLY\n");}
	|Expression_statement 		{printf("Statement->Expression_statement\n");}
	|Selection_statement 		{printf("Statement->Selection_statement\n");}
	|Iteration_statement 		{printf("Statement->Iteration_statement\n");}
	|Jump_statement		{printf("Statement->Jump_statement\n");}
	|Object_Declaration		{printf("Statement->Object_Declaration\n");}
	;
Jump_statement
	:RETURN expression	{printf("Jump_statement->RETURN expression\n");}
	|CONTINUE SEMI_COLON	{printf("Jump_statement->CONTINUE SEMI_COLON\n");}
	|BREAK SEMI_COLON	{printf("Jump_statement->BREAK SEMI_COLON\n");}
	;
Selection_statement
	:IF LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY else LEFT_CURLY statement_list RIGHT_CURLY	{printf("Select_statement->IF LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY else LEFT_CURLY statement_list RIGHT_CURLY\n");}
	|IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY	{printf("Select_statement->IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS LEFT_CURLY statement_list RIGHT_CURLY\n");}
	;
Iteration_Statement
	:WHILE LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS statement 	{printf("Iteration_Statement->WHILE LEFT_PARENTEHSIS expression RIGHT_PARENTHESIS Statement\n");}
	|FOR LEFT_PARENTHESIS Expression_statement Expression_statement RIGHT_PARENTHESIS statement 	{printf("Iteration_Statement->FOR LEFT_PARENTHESIS Expression_statement Expression_statement RIGHT_PARENTHESIS Statement\n");}
	|FOR LEFT_PARENTHESIS Expression_statement Expression_statement expression RIGHT_PARENTHESIS statement 	{printf("Iteration_Statement->FOR LEFT_PARENTHESIS Expression_statement Expression_statement expression RIGHT_PARENTHESIS Statement\n");}
	;
Expression_Statement
	:expression SEMI_COLON	{printf("Expression_Statement->expression SEMI_COLON\n");}
	|SEMI_COLON	{printf("Expression_Statement->SEMI_COLON\n");}
	;
expression
	:assignment_expression {printf("expression->assignment_expression\n");}
	|expression COMMA Assignment_expression {printf("expression->expression COMMA Assignment_expression\n");}
	;
assignment_expression
	:unary_expression ASGN_OP assignment_expression	{printf("assignment_expression->unary_expression ASGN_OP assignment_expression\n");}
	|conditional_expression	{printf("assignment_expression->conditional_expression\n");}
	|object_expression	{printf("assignment_expression->object_expression\n");}
	;
conditional_expression
	:logical_or_expression {printf("conditional_expression->logical_or_expression\n");}
	;
logical_or_expression
	:logical_or_expression OR_OP logical_and_expression	{printf("logical_or_expression->logical_or_expression OR_OP logical_and_expression\n");}
	|logical_and_expression	{printf("logical_or_expression->logical_and_expression\n");}
	;

logical_and_expression
	:logical_and_expression AND_OP bitwise_or_expression	{printf("logical_and_expression->logical_and_expression AND_OP bitwise_or_expression\n");}
	|bitwise_or_expression	{printf("logical_and_expression->bitwise_or_expression\n");}
	;
bitwise_or_expression
	:bitwise_or_expression BTW_OR bitwise_xor_expression	{printf("bitwise_or_expression->bitwise_or_expression BTW_OR bitwise_xor_expression\n");}
	|bitwise_xor_expression	{printf("bitwise_or_expression->bitwise_xor_expression\n");}
	;
bitwise_xor_expression
	:and_expression 	{printf("bitwise_xor_expression->and_expression\n");}
	|bitwise_xor_expression XOR_OP and_expression 	{printf("bitwise_xor_expression->bitwise_xor_expression XOR_OP and_expression\n");}
	;
and_expression
	:equality_expression	{printf("and_expression->equality_expression\n");}
	|and_expression AMPERSAND equality_expression	{printf("and_expression->and_expression AMPERSAND equality_expression\n");}
	;
equality_expression
	:relational_expression	{printf("equality_expression->relational_expression\n");}
	|equality_expression EQ_OP relational_expression	{printf("equality_expression->equality_expression EQ_OP relational_expression\n");}
	|equality_expression NE_OP relational_expression	{printf("equality_expression->equality_expression NE_OP relational_expression\n");}
	;
relational_expression
	:shift_expression 	{printf("relational_expression->shift_expression\n");}
	|relational_expression LESS_THAN shift_expression 	{printf("relational_expression->relational_expression LESS_THAN shift_expression\n");}
	|relational_expression GREATER_THAN shift_expression 	{printf("relational_expression->relational_expression GREATER_THAN shift_expression\n");}
	|relational_expression LE_OP shift_expression 	{printf("relational_expression->relational_expression LE_OP shift_expression\n");}
	|relational_expression GE_OP shift_expression 	{printf("relational_expression->relational_expression GE_OP shift_expression\n");}
	;
shift_expression
	:additive_expression	{printf("shift_expression->additive_expression\n");}
	|shift_expression LEFT_OP additive_expression	{printf("shift_expression->shift_expression LEFT_OP additive_expression\n");}
	|shift_expression RIGHT_OP additive_expression	{printf("shift_expression->shift_expression RIGHT_OP additive_expression\n");}
	;
additive_expression
	:multiplicative_expression 	{printf("additive_expression->multiplicative_expression\n");}
	|additive_expression PLUS multiplicative_expression 	{printf("additive_expression->additive_expression PLUS multiplicative_expression\n");}
	|additive_expression MINUS multiplicative_expression 	{printf("additive_expression->additive_expression MINUS multiplicative_expression\n");}
	;
multiplicative_expression
	:unary_expression 	{printf("multiplicative_expression->unary_expression\n");}
	|multiplicative_expression MUL_OP unary_expression 	{printf("multiplicative_expression->multiplicative_expression MUL_OP unary_expression\n");}
	|multiplicative_expression DIV_OP unary_expressionn 	{printf("multiplicative_expression->multiplicative_expression DIV_OP unary_expressionn\n");}
	|multiplicative_expression MOD_OP unary_expression 	{printf("multiplicative_expression->multiplicative_expression MOD_OP unary_expression\n");}
	;
unary_expression
	:postfix_expressoin	{printf("unary_expression->postfix_expressoin\n");}
	|INC_OP unary_expressoin	{printf("unary_expression->INC_OP unary_expressoin\n");}
	|DEC_OP unary_expression	{printf("unary_expression->DEC_OP unary_expression\n");}
	|unary_operator unary_expression	{printf("unary_expression->unary_operator unary_expression\n");}
	;
unary_operator
	:PLUS 	{printf("unary_operator->PLUS\n");}
	|MINUS 	{printf("unary_operator->MINUS\n");}
	|BTW_NOT 	{printf("unary_operator->BTW_NOT\n");}
	|NOT_OP 	{printf("unary_operator->NOT_OP\n");}
	|MUL_OP 	{printf("unary_operator->MUL_OP\n");}
	|AMPERSAND 	{printf("unary_operator->AMPERSAND\n");}
	;
postfix_expression
	:primary_expression 	{printf("postfix_expression->primary_expression\n");}
	|array_expression 	{printf("postfix_expression->array_expression\n");}
	|function_expression 	{printf("postfix_expression->function_expression\n");}
	|postfix_expression INC_OP 	{printf("postfix_expression->postfix_expression INC_OP\n");}
	|postfix_expression DEC_OP 	{printf("postfix_expression->postfix_expression DEC_OP\n");}
	;
array_expression
	:array_expression LEFT_BRACKET expression RIGHT_EXPRESSION	{printf("array_expression->array_expression LEFT_BRACKET expression RIGHT_EXPRESSION\n");}
	|Primary_expression LEFT_BRACKET expression RIGHT_BRACKET	{printf("array_expression->Primary_expression LEFT_BRACKET expression RIGHT_BRACKET\n");}
	;
primary_expression
	:IDENTIFIER DEREF_OP IDENTIFIER 	{printf("primary_expression->IDENTIFIER DEREF_OP IDENTIFIER\n");}
	|IDENTIFIER 	{printf("primary_expression->IDENTIFIER\n");}
	|CONSTANT 	{printf("primary_expression->CONSTANT\n");}
	|STRING_LITERAL 	{printf("primary_expression->STRING_LITERAL\n");}
	|LEFT_PARENTHESIS expression RIGHT_PARENTHESIS 	{printf("primary_expression->LEFT_PARENTHESIS expression RIGHT_PARENTHESIS\n");}
	;
object_expression
	:link_object 	{printf("object_expression->link_object\n");}
	|memory_object 	{printf("object_expression->memory_object\n");}
	|job_object 	{printf("object_expression->job_object\n");}
	|cluster_object 	{printf("object_expression->cluster_object\n");}
	;
cluster_object
	:CLUSTER LEFT_PARENTHESIS proc_arr_arg COMMA topology_arg COMMA link_band_arg COMMA link_cap_arg narp 	{printf("cluster_object->CLUSTER LEFT_PARENTHESIS proc_arr_arg COMMA topology_arg COMMA link_band_arg COMMA link_cap_arg narp\n");}
	|processor_object 	{printf("cluster_object->processor_object\n");}
	;
proc_arr_arg
	:PROCESSORS ASGN_OP IDENTIFIER 	{printf("proc_arr_arg->PROCESSORS ASGN_OP IDENTIFIER\n");}
	|PROCESSORS ASGN_OP LEFT_BRACKET cluster_list RIGHT BRACKET 	{printf("proc_arr_arg->PROCESSORS ASGN_OP LEFT_BRACKET cluster_list RIGHT BRACKET\n");}
	|IDENTIFIER 	{printf("proc_arr_arg->IDENTIFIER\n");}
	|LEFT BRACKET cluster_list RIGHT_BRACKET 	{printf("proc_arr_arg->LEFT BRACKET cluster_list RIGHT_BRACKET\n");}
	;
cluster_list
	:cluster_object COMMA cluster_list {printf("cluster_list->cluster_object COMMA cluster_list\n");}
	|cluster_object {printf("cluster_list->cluster_object\n");}
	;
topology_arg
	:TOPOLOGY ASGN_OP STRING_LITERAL {printf("topology_arg->TOPOLOGY ASGN_OP STRING_LITERAL\n");}
	|STRING_LITERAL {printf("topology_arg->STRING_LITERAL\n");}
	;
link_band_arg
	:LINK_BANDWIDTH ASGN_OP conditional_expression {printf("link_band_arg->LINK_BANDWIDTH ASGN_OP conditional_expression\n");}
	|conditional_expression {printf("link_band_arg->conditional_expression\n");}
	;
link_cap_arg
	:LINK_CAPACITY ASGN_OP conditional_expression {printf("link_cap_arg->LINK_CAPACITY ASGN_OP conditional_expression\n");}
	|conditional_expression {printf("link_cap_arg->conditional_expression\n");}
	;
narp
	:COMMA conditional_expression RIGHT_PARENTHESIS  {printf("narp->COMMA conditional_expression RIGHT_PARENTHESIS\n");}
	|COMMA NAME ASGN_OP conditional expression  {printf("narp->COMMA NAME ASGN_OP conditional expression\n");}
	|RIGHT PARENTHESIS  {printf("narp->RIGHT PARENTHESIS\n");}
	;
processor_object
	:PROCESSOR LEFT_PARENTHESIS isa_args COMMA clock_args COMMA mem_args narp {printf("processor_object->PROCESSOR LEFT_PARENTHESIS isa_args COMMA clock_args COMMA mem_args narp\n");}
	;
isa_args
	:ISA ASGN_OP PROC_TYPE {printf("isa_args->ISA ASGN_OP PROC_TYPE\n");}
	|PROC_TYPE {printf("isa_args->PROC_TYPE\n");}
	;
Clock_args
	:CLOCK_SPEED ASGN_OP CONSTANT 	{printf("Clock_args->CLOCK_SPEED ASGN_OP CONSTANT\n");}
	|CONSTANT 	{printf("Clock_args->CONSTANT\n");}
	;
mem_args
	:MEM1 ASGN_OP memory COMMA MEM2 ASGN_OP Memory  {printf("mem_args->MEM1 ASGN_OP memory COMMA MEM2 ASGN_OP Memory\n");}
	|MEM1 ASGN_OP memory COMMA memory  {printf("mem_args->MEM1 ASGN_OP memory COMMA memory\n");}
	|MEM1 ASGN_OP memory  {printf("mem_args->MEM1 ASGN_OP memory\n");}
	|memory COMMA MEM2 ASGN_OP memory  {printf("mem_args->memory COMMA MEM2 ASGN_OP memory\n");}
	|memory COMMA memory  {printf("mem_args->memory COMMA memory\n");}
	|memory  {printf("mem_args->memory\n");}
	;
memory
	:memory_object  {printf("memory->memory_object\n");}
	|IDENTIFIER  {printf("memory->IDENTIFIER\n");}
	;
link_object
	:LINK LEFT_PARENTHESIS start_args COMMA end_args COMMA link_band_args COMMA link_cap_args narp  {printf("link_object->LINK LEFT_PARENTHESIS start_args COMMA end_args COMMA link_band_args COMMA link_cap_args narp\n");}
	|IDENTIFIER  {printf("link_object->IDENTIFIER\n");}
	;
start_args
	:START_POINT ASGN_OP conditional expression {printf("start_args->START_POINT ASGN_OP conditional expression\n");}
	|conditional_expression {printf("start_args->conditional_expression\n");}
	;
end_args
	:END_POINT ASGN_OP conditional_expression {printf("end_args->END_POINT ASGN_OP conditional_expression\n");}
	|conditional_expression {printf("end_args->conditional_expression\n");}
	;
memory_object
	:MEMORY LEFT_PARENTHESIS mem_type_args COMMA mem_size_args narp {printf("memory_object->MEMORY LEFT_PARENTHESIS mem_type_args COMMA mem_size_args narp\n");}
	;
mem_type_args	
	:MEMORY_TYPE ASGN_OP MEM_TYPES {printf("mem_type_args->MEMORY_TYPE ASGN_OP MEM_TYPES\n");}
	|MEM_TYPES {printf("mem_type_args->MEM_TYPES\n");}
	;
mem_size_args
	:MEMORY_SIZE ASGN_OP conditional_expression {printf("mem_size_args->MEMORY_SIZE ASGN_OP conditional_expression\n");}
	|conditional_expression {printf("mem_size_args->conditional_expression\n");}
	;
job_object
	:JOB LEFT_PARENTHESIS job_id_args COMMA flops_args COMMA deadline_args COMMA mem_required_args COMMA affinity_args RIGHT_PARENTHESIS {printf("job_object->JOB LEFT_PARENTHESIS job_id_args COMMA flop_args COMM deadline_args COMMA mem_required_args COMMA affinity_args RIGHT_PARENTHESIS\n");}
	;
job_id_args
	:JOB_ID ASGN_OP conditional_expression {printf("job_id_args->JOB_ID ASGN_OP conditional_expression\n");}
	|conditional_expression {printf("job_id_args->conditional_expression\n");}
	;
flops_args	
	:FLOPS_REQUIRED ASGN_OP conditional_expressoin  {printf("flops_args->JOB_ID ASGN_OP conditional_expression\n");}
	|conditional_expression  {printf("flops_args->conditional_expression\n");}
	;
deadline_args
	:DEADLINE ASGN_OP conditional_expression  {printf("deadline_args->DEADLINE ASGN_OP conditional_expression\n");}
	|conditional_expression  {printf("deadline_args->conditional_expression\n");}
	;
mem_required_args
	:MEM_REQUIRED ASGN_OP conditional_expression  {printf("mem_required_args->MEM_REQUIRED ASGN_OP conditional_expression\n");}
	|conditional_expression  {printf("mem_required_args->conditional_expression\n");}
	;
affinity_args
	:AFFINITY ASGN_OP LEFT_BRACKET list RIGHT_BRACKET  {printf("affinity_args->AFFINITY ASGN_OP LEFT_BRACKET list RIGHT_BRACKET\n");}
	|LEFT_BRACKET list RIGHT_BRACKET  {printf("affinity_args->LEFT_BRACKET list RIGHT_BRACKET\n");}
	;
list
	:CONSTANT  {printf("list->CONSTANT\n");}
	|CONSTANT COMMA list  {printf("list->CONSTANT COMMA list\n");}
	;
function_expression
	:RUN LEFT_PARENTHESIS cluster_list RIGHT_PARENTHESIS  {printf("function_expression->RUN LEFT_PARENTHESIS cluster_list RIGHT_PARENTHESIS\n");}
	|WAIT LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("function_expression->WAIT LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|DISCARD_JOB LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS  {printf("function_expression->DISCARD_JOB LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
	|STOP LEFT_PARETHESIS IDENTIFIER RIGHT_PARENTHESIS  {printf("function_expression->STOP LEFT_PARETHESIS IDENTIFIER RIGHT_PARENTHESIS\n");}
	|IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("function_expression->IDENTIFIER LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|IDENTIFIER LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS  {printf("function_expression->IDENTIFIER LEFT_PARENTHESIS argument_expression_list RIGHT_PARENTHESIS\n");}
	|IDENTIFIER DOT object_function  {printf("function_expression->IDENTIFIER DOT object_function\n");}
	;
object_function
	:processor_function  {printf("object_function->processor_function\n");}
	|job_function  {printf("object_function->job_function\n");}
	|link_function  {printf("object_function->link_function\n");}
	|memory_function  {printf("object_function->memory_function\n");}
	;
memory_function
	:GET_AVAILABLE_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("memory_function->GET_AVAILABLE_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	;
job_function
	:GET_JOB_AFFINITY LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("job_function->GET_JOB_AFFINITY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|GET_JOB_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("job_function->GET_JOB_MEMORY LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|GET_FLOPS LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("job_function->GET_FLOPS LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|GET_DEADLINE LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("job_function->GET_DEADLINE LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	;
processor_function
	:IS_RUNNING LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("processor_function->IS_RUNNING LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|SUBMIT_JOBS LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS  {printf("processor_function->SUBMIT_JOBS LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
	|GET_CLOCK_SPEED LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("processor_function->GET_CLOCK_SPEED LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|GET_PROC_TYPE LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("processor_function->GET_PROC_TYPE LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	|IS_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS  {printf("processor_function->IS_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
	;
cluster_function
	:GET_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS  	{printf("cluster_function->GET_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
 	|GET_PROCESSOR  LEFT_PARENTHESIS primary_expression RIGTH_PARENTHESIS  	{printf("cluster_function->GET_PROCESSOR  LEFT_PARENTHESIS primary_expression RIGTH_PARENTHESIS \n");}
 	|IS_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS  	{printf("cluster_function->IS_PROCESSOR LEFT_PARENTHESIS RIGHT_PARENTHESIS\n");}
 	|SUBMIT_JOBS LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS  	{printf("cluster_function->SUBMIT_JOBS LEFT_PARENTHESIS job_list RIGHT_PARENTHESIS\n");}
 	;
 job_list
 	:IDENTIFIER COMMA job_list  {printf("job_list->IDENTIFIER COMMA job_list\n");}
 	|IDENTIFIER  {printf("job_list->IDENTIFIER\n");}
 	|job_object COMMA job_list  {printf("job_list->job_object COMMA job_list\n");}
 	|job_object  {printf("job_list->job_object\n");}
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
