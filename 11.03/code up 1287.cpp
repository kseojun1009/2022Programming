#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			for(int l=1;l<=n;l++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
