#include<stdio.h>
int main()
{
	char mark[5][5]={'\0'};
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i==j||i+j==4)	mark[i][j]='X';
		}
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%c ",mark[i][j]);
		}
		printf("\n");
	}
}
