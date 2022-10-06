#include<stdio.h>
int main()
{
	int n,a1=0,a2=1,a3;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a1);
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	
}
