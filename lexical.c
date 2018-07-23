#include<stdio.h>
#include<string.h>
int main()
{
int i;
char a[20],b[20]; //anotner array
printf("Enter the string");
scanf("%s",a);
int l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]>=65 && a[i]<=90|| a[i]>=97 && a[i]<=122)
{
   printf("%cis identifer",a[i]);
printf("\n");
}
while(a[i]>=33 && a[i]<=47 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<=126 ||a[i]>=48 && a[i]<=57)  // update while
{
   strcpy(b,a);         // here we're coping string from the loop and storing in 'array b' --strcpy(destination,source)
   i++
//printf(strcat(a[i]),"it is operator\n");
}
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

