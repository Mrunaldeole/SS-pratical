%{
int flag,a,b;
%}
%%
[(] {flag++;}{a++;}
[)] {flag--;}{b++;}
[\n] {if(flag==0)
{printf("STRING IS BALANCED number of opening and closing braces is '%d' & '%d' resp.",a,b);}
if(flag<0)
{printf("STRING IS UNBALANCED NUMBER OF CLOSING PARENTHESIS IS MORE '%d' THAN OPENING PARENTHESIS '%d'",b,a);}
if(flag>0)
{printf("STRING IS UNBALANCED NUMBER OF OPENING PARENTHESIS IS MORE '%d' THAN CLOSING PARENTHESIS '%d'",a,b);}}
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
