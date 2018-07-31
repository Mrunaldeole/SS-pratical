%{
int flag;
%}
%%
[(] {flag++;}
[)] {flag--;}
[\n] {if(flag==0)
{printf("STRING IS BALANCED");}
if(flag<0)
{printf("STRING IS UNBALANCED NUMBER OF CLOSING PARENTHESIS IS MORE THAN OPENING PARENTHESIS");}
if(flag>0)
{printf("STRING IS UNBALANCED NUMBER OF OPENING PARENTHESIS IS MORE THAN CLOSING PARENTHESIS");}}
%%
int main()
{
printf("ENTER THE STRING");
yylex();
return 0;
}
int yywrap()
{
return 0;
}
