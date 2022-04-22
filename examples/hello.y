%{
    #include<stdio.h>
    #include<stdlib.h>
    int yylex();
    int yyerror(char *errormsg);
%}

%token HI BYE

%%
program: hi bye
        ;
hi: HI   { printf("Hello world\n"); }
        ;
bye: BYE { printf("Bye world\n"); exit(0); }
        ;