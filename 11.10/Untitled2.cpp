#include<stdio.h>
int main()
{
	int a[2][3]={{100,90,80},{70,60,50}};
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=2;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
