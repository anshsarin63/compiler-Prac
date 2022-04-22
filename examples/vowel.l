%{
    #include<stdio.h>
%}
%%
"a"|"e"|"i"|"o"|"u"|"A"|"E"|"I"|"O"|"U"     {printf("is a vowel");}
.                                           {printf("is a consonent");}
%%
int yywrap(){
    return 1;
}
int main(){
    printf("Enter Character\n");
    yylex();
}