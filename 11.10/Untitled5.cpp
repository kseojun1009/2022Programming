#include<stdio.h>
int main()
{
	char ani1[4][10]={
		{'c','a','t','\0'},
		{'h','o','r','s','e','\0'},
		{'d','o','g','\0'},
		{'t','i','g','e','r','\0'}
	};
	
	char ani2[][10]={"cat","horse","dog","tiger"};
	int i;
	
	for(i=0;i<=3;i++)
	{
		printf("%s ",ani1[i]);
	}
	printf("\n");
	for(i=0;i<4;i++)
	{
		printf("%s ",ani2[i]);
	}
}
