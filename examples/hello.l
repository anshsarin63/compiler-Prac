%{
    #include "y.tab.h"
    int yyerror(char *errormsg);
%}

%%
"hi"    {return HI;}
"bye"   {return BYE;}
.       {yyerror("Unknown Character");}
%%

int main(){
    yyparse();
    return 0;
}
int yywrap(){
    return 0;
}
int yyerror(char *errormsg){
    fprintf(stderr,"%s\n",errormsg);
    exit(1);
}