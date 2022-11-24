#include<stdio.h>
int main()
{
	char mark[5][5]={};
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			if(i==j||i+j==4)	mark[i][j]='X';
		}
	}
	
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			printf("%c ",mark[i][j]);
		}
		printf("\n");
	}
}
