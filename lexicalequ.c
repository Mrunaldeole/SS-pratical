#include<stdio.h>
#include<string.h>
int i=0,len,current=0,prev=0;

int check(char s[])
{
  if(65<=s[i] && s[i]<=90 || 97<=s[i] && s[i]<=122)
  {
    return(0);
  }

  if(32<=s[i] && s[i]<=46 || 58<=s[i] && s[i]<=64)
  {
    return(1);
  }
  if(48<=s[i] && s[i]<=57)
  {
    return(2);
  }
}
void main()
{ char string[100];
  printf("Enter the string:");
  scanf("%s",string);
  prev=check(string);
  current=check(string);

  while(string[i] != '\0')
  {
    if(prev==current)
    {
      printf("%c",string[i]);
    }
    else
    {
      if(prev==0)
      {
        printf(" is an identifier\n");
        printf("%c",string[i]);
      }
      if(prev==1)
      {
        printf(" is an arithmetic operator\n");
        printf("%c",string[i]);
      }
      if(prev==2)
      {
        printf(" is a constant\n");
        printf("%c",string[i]);
      }
    }
    prev=current;
    i++;
    current=check(string);
  }
}
