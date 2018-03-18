D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "table.h"

void count();
%}

%%

"break"			{ printf("<"); count(); printf(",%s> ","BREAK"); return(BREAK);}
"char"			{ printf("<"); count(); printf(",%s> ","CHAR"); return(CHAR);}
"continue"		{ printf("<"); count(); printf(",%s> ","CONTINUE"); return(CONTINUE);}
"else"			{ printf("<"); count(); printf(",%s> ","ELSE"); return(ELSE);}
"float"			{ printf("<"); count(); printf(",%s> ","FLOAT"); return(FLOAT);}
"for"			{ printf("<"); count(); printf(",%s> ","FOR"); return(FOR);}
"if"			{ printf("<"); count(); printf(",%s> ","IF"); return(IF);}
"int"			{ printf("<"); count(); printf(",%s> ","INT"); return(INT);}
"return"		{ printf("<"); count(); printf(",%s> ","RETURN"); return(RETURN);}
"void"			{ printf("<"); count(); printf(",%s> ","VOID"); return(VOID);}
"while"			{ printf("<"); count(); printf(",%s> ","WHILE"); return(WHILE);}
"proc"			{ printf("<"); count(); printf(",%s> ","PROC"); return(PROC);}
"lnk"			{ printf("<"); count(); printf(",%s> ","LNK"); return(LNK);}
"jb"			{ printf("<"); count(); printf(",%s> ","JB"); return(JB);}
"clust"			{ printf("<"); count(); printf(",%s> ","CLUST"); return(CLUST);}
"Cluster"		{ printf("<"); count(); printf(",%s> ","CLUSTER"); return(CLUSTER);}
"Processor"		{ printf("<"); count(); printf(",%s> ","PROCESSOR"); return(PROCESSOR);}
"processors"	{ printf("<"); count(); printf(",%s> ","PROCESSORS"); return(PROCESSORS);}
"isa"			{ printf("<"); count(); printf(",%s> ","ISA"); return(ISA);}
('ARM')|('AMD')|('CDC')|('MIPS') { printf("<"); count(); printf(",%s> ","PROC_TYPE"); return(PROC_TYPE);}
"clock_speed"	{ printf("<"); count(); printf(",%s> ","CLOCK_SPEED"); return(CLOCK_SPEED);}
"l1_memory"		{ printf("<"); count(); printf(",%s> ","MEM1"); return(MEM1);}
"l2_memory"		{ printf("<"); count(); printf(",%s> ","MEM2"); return(MEM2);}
"name"			{ printf("<"); count(); printf(",%s> ","NAME"); return(NAME);}
"topology"		{ printf("<"); count(); printf(",%s> ","TOPOLOGY"); return(TOPOLOGY);}
"link_bandwidth"  { printf("<"); count(); printf(",%s> ","LINK_BANDWIDTH"); return(LINK_BANDWIDTH);}
"link_capacity"	{ printf("<"); count(); printf(",%s> ","LINK_CAPACITY"); return(LINK_CAPACITY);}
"Link"			{ printf("<"); count(); printf(",%s> ","LINK"); return(LINK);}
"start_point"	{ printf("<"); count(); printf(",%s> ","START_POINT"); return(START_POINT);}
"end_point"		{ printf("<"); count(); printf(",%s> ","END_POINT"); return(END_POINT);}
"memory_type"	{ printf("<"); count(); printf(",%s> ","MEMORY_TYPE"); return(MEMORY_TYPE);}
('primary')|('secondary')|('cache') { printf("<"); count(); printf(",%s> ","MEM_TYPE"); return(MEM_TYPE);}
"mem_size" 		{ printf("<"); count(); printf(",%s> ","MEMORY_SIZE"); return(MEMORY_SIZE);}
"Job"			{ printf("<"); count(); printf(",%s> ","JOB"); return(JOB);}
"job_id"		{ printf("<"); count(); printf(",%s> ","JOB_ID"); return(JOB_ID);}
"flops_required" { printf("<"); count(); printf(",%s> ","FLOPS_REQUIRED"); return(FLOPS_REQUIRED);}
"deadline"		{ printf("<"); count(); printf(",%s> ","DEADLINE"); return(DEADLINE);}
"mem_required"	{ printf("<"); count(); printf(",%s> ","MEM_REQUIRED"); return(MEM_REQUIRED);}
"affinity"		{ printf("<"); count(); printf(",%s> ","AFFINITY"); return(AFFINITY);}
"run"			{ printf("<"); count(); printf(",%s> ","RUN"); return(RUN);}
"wait"			{ printf("<"); count(); printf(",%s> ","WAIT"); return(WAIT);}
"discard_job" 	{ printf("<"); count(); printf(",%s> ","DISCARD_JOB"); return(DISCARD_JOB);}
"stop" 			{ printf("<"); count(); printf(",%s> ","STOP"); return(STOP);}
"get_available_memory" { printf("<"); count(); printf(",%s> ","GET_AVAILABLE_MEMORY"); return(GET_AVAILABLE_MEMORY);}
"get_job_affinity"		{ printf("<"); count(); printf(",%s> ","GET_JOB_AFFINITY"); return(GET_JOB_AFFINITY);}
"get_memory"		{ printf("<"); count(); printf(",%s> ","GET_JOB_MEMORY"); return(GET_JOB_MEMORY);}
"get_flops"				{ printf("<"); count(); printf(",%s> ","GET_FLOPS"); return(GET_FLOPS);}
"get_deadline"			{ printf("<"); count(); printf(",%s> ","GET_DEADLINE"); return(GET_DEADLINE);}
"is_running"			{ printf("<"); count(); printf(",%s> ","IS_RUNNING"); return(IS_RUNNING);}
"submit_jobs"			{ printf("<"); count(); printf(",%s> ","SUBMIT_JOBS"); return(SUBMIT_JOBS);}
"get_flops_speed"		{ printf("<"); count(); printf(",%s> ","GET_FLOPS_SPEED"); return(GET_FLOPS_SPEED);}
"get_proc_type"			{ printf("<"); count(); printf(",%s> ","GET_PROC_TYPE"); return(GET_PROC_TYPE);}
"is_processor"			{ printf("<"); count(); printf(",%s> ","IS_PROCESSOR"); return(IS_PROCESSOR);}
"get_processor"			{ printf("<"); count(); printf(",%s> ","GET_PROCESSOR"); return(GET_PROCESSOR);}
"Memory"				{ printf("<"); count(); printf(",%s> ","MEMORY"); return(MEMORY);}
"mem"			{ printf("<"); count(); printf(",%s> ","MEM"); return(MEM);}

{L}({L}|{D})*		{ printf("<"); count(); printf(",%s> ","IDENTIFIER"); return(IDENTIFIER);}

0[xX]{H}+{IS}?		{ printf("<"); count(); printf(",%s> ","CONSTANT"); return(CONSTANT);}
0{D}+{IS}?		{ printf("<"); count(); printf(",%s> ","CONSTANT"); return(CONSTANT);}
{D}+{IS}?		{ printf("<"); count(); printf(",%s> ","CONSTANT"); return(CONSTANT);}
L?'(\\.|[^\\'])+'	{ printf("<"); count(); printf(",%s> ","CONSTANT"); return(CONSTANT);}

{D}+{E}{FS}?		{ printf("<"); count(); printf(",%s> ","CONSTANT"); return(CONSTANT);}
{D}*"."{D}+({E})?{FS}?	{ printf("<"); count(); printf(",%s> ","CONSTANT"); return(CONSTANT);}
{D}+"."{D}*({E})?{FS}?	{ printf("<"); count(); printf(",%s> ","CONSTANT"); return(CONSTANT);}

\"(\\.|[^\\"])*\"	{ printf("<"); count(); printf(",%s> ","STRING_LITERAL"); return(STRING_LITERAL);}

">>"			{ printf("<"); count(); printf(",%s> ","RIGHT_OP"); return(RIGHT_OP);}
"<<"			{ printf("<"); count(); printf(",%s> ","LEFT_OP"); return(LEFT_OP);}
"++"			{ printf("<"); count(); printf(",%s> ","INC_OP"); return(INC_OP);}
"--"			{ printf("<"); count(); printf(",%s> ","DEC_OP"); return(DEC_OP);}
"->"			{ printf("<"); count(); printf(",%s> ","DREF_OP"); return(DREF_OP);}
"&&"			{ printf("<"); count(); printf(",%s> ","AND_OP"); return(AND_OP);}
"||"			{ printf("<"); count(); printf(",%s> ","OR_OP"); return(OR_OP);}
"<="			{ printf("<"); count(); printf(",%s> ","LE_OP"); return(LE_OP);}
">="			{ printf("<"); count(); printf(",%s> ","GE_OP"); return(GE_OP);}
"=="			{ printf("<"); count(); printf(",%s> ","EQ_OP"); return(EQ_OP);}
"!="			{ printf("<"); count(); printf(",%s> ","NE_OP"); return(NE_OP);}
";"				{ printf("<"); count(); printf(",%s> ","SEMI_COLON"); return(SEMI_COLON);}
("{"|"<%")		{ printf("<"); count(); printf(",%s> ","LEFT_CURLY"); return(LEFT_CURLY);}
("}"|"%>")		{ printf("<"); count(); printf(",%s> ","RIGHT_CURLY"); return(RIGHT_CURLY);}
","			{ printf("<"); count(); printf(",%s> ","COMMA"); return(COMMA);}
"="			{ printf("<"); count(); printf(",%s> ","ASGN_OP"); return(ASGN_OP);}
":"			{ printf("<"); count(); printf(",%s> ","ASGN_OP"); return(ASGN_OP);}
"("			{ printf("<"); count(); printf(",%s> ","LEFT_PARENTEHSIS"); return(LEFT_PARENTEHSIS);}
")"			{ printf("<"); count(); printf(",%s> ","RIGHT_PARENTHESIS"); return(RIGHT_PARENTHESIS);}
("["|"<:")		{ printf("<"); count(); printf(",%s> ","LEFT_BRACKET"); return(LEFT_BRACKET);}
("]"|":>")		{ printf("<"); count(); printf(",%s> ","RIGHT_BRACKET"); return(RIGHT_BRACKET);}
"."			{ printf("<"); count(); printf(",%s> ","DOT"); return(DOT);}
"&"			{ printf("<"); count(); printf(",%s> ","AMPERSAND"); return(AMPERSAND);}
"!"			{ printf("<"); count(); printf(",%s> ","NOT_OP"); return(NOT_OP);}
"~"			{ printf("<"); count(); printf(",%s> ","BTW_NOT"); return(BTW_NOT);}
"-"			{ printf("<"); count(); printf(",%s> ","MINUS"); return(MINUS);}
"+"			{ printf("<"); count(); printf(",%s> ","PLUS"); return(PLUS);}
"*"			{ printf("<"); count(); printf(",%s> ","MUL_OP"); return(MUL_OP);}
"/"			{ printf("<"); count(); printf(",%s> ","DIV_OP"); return(DIV_OP);}
"%"			{ printf("<"); count(); printf(",%s> ","MOD_OP"); return(MOD_OP);}
"<"			{ printf("<"); count(); printf(",%s> ","LESS_THAN"); return(LESS_THAN);}
">"			{ printf("<"); count(); printf(",%s> ","GREATER_THAN"); return(GREATER_THAN);}
"^"			{ printf("<"); count(); printf(",%s> ","XOR_OP"); return(XOR_OP);}
"|"			{ printf("<"); count(); printf(",%s> ","BTW_OR"); return(BTW_OR);}

[ \t\v\n\f]		{ count();}
.			{ printf("<"); count(); printf(",%s> ","INVALID"); return(INVALID);}

%%

int yywrap()
{
	return(1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


