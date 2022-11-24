#include<stdio.h>
int main()
{
	int arr[4][5]={};
	int count=1;
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=4;j++)
		{
			arr[i][j]=count++;
		}
	}
	
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=4;j++)
		{
			printf("%5d ",arr[i][j]);
		}
		printf("\n");
	}
}
