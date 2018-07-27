#include<stdio.h>
#include<string.h>
main()
{
int i,cs=0;
  char a[20];
  printf("Enter the string\n");
  scanf("%s",a);
  int len=strlen(a);
  for(i=0;i<len;i++)
{
if(cs==0)
          {
           if(a[i]=='c')
               cs=1;
           else if(a[i]=='b')
                cs=0;
           else if(a[i]=='a')
                cs=0;
           else
                cs=0;
          }
else if(cs==1)
{
         if(a[i]=='b')
          cs=2;
         else if(a[i]='c')
           cs=1;
         else if(a[i]='a')
          cs=0;
          else
         cs=0;
} 
else if(cs==2)
{
       if(a[i]=='a')
       cs=3;
       else if(a[i]=='c')
       cs=1;
       else 
       cs=0; 
}
else if(cs==3)
{
if(a[i]=='c')
cs=3;
else if(a[i]=='b')
cs=3;
else if(a[i]=='a')
cs=3;
}
}
if(cs==3)
printf("String is accepted");
else 
printf("String is not accepted");
}
