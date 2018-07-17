#include<stdio.h>
#include<string.h>
int main()
{
int i;
char a[200],c;
printf("Enter the string");
scanf("%s",a);
int l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]>=65 && a[i]<=90|| a[i]>=97 && a[i]<=122)
{
 c=a;
printf("\n");
}
break;
printf("identifier %c",c);
/
if(a[i]==42)
{
printf("* it multipliocation operator\n");
}
if(a[i]==43)
{
printf("+ it Addition operator\n");
}
if(a[i]==45)
{
printf("- it subtraction oprator\n");
}
if(a[i]==47)
{
printf("/ it multiplication operator\n");
}
if(a[i]==61)
{
printf("= it asignment operator\n");	
}
}
}

