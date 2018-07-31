#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,k=0;
	char a[50];
	printf("Enter the input:");
	scanf("%s",a);
	int len=strlen(a);
    for(i=0;i<len;i++)
	{
	  if(a[i]=='(')
        	j++;
     	  else if(a[i]==')')
		k++;
	}
    if(j==k)
	printf("THE STRING IS BALANCED, with %d opening braces & %d closing braces\n",j,k);
    else
	printf("THE STRING IS NOT BALANCED, with %d opening braces & %d closing braces\n",j,k);
}
