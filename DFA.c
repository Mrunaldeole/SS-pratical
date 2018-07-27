#include<stdio.h>
#include<string.h>
void main()
{
 int len=0,i=0,state=0;
 char string[100];
 printf("Enter the string: ");
 scanf("%s",string);
 len=strlen(string);
 printf("q0 ");
 for(i=0;i<len;i++)
 {
   switch(state)
	{
	  case 0:
		if(string[i]=='a')
		{
			state++;
			printf("q1 ");		
		}
		break;

	  case 1:
		if(string[i]=='b')
		{
			state++;
			printf("q2 ");		
		}
		break;

	  case 2:
		if(string[i]=='b')
		{
			state=0;
			printf("q0 ");		
		}
		if(string[i]=='a')
		{
			state++;
			printf("q3 ");
		}
		break;

	  case 3:
		if(string[i]=='b')
		{
			state=2;
			printf("q2 ");		
		}
		if(string[i]=='a')
		{
			state=1;
			printf("q1 ");
		}
		break;
	}
 
 }
  if(state==3)
  {
	printf("\nstring is accepted\n");	
  }
  else
  {
	printf("\nString is not accepted\n");
  }
}
