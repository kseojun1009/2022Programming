#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i++;
	}
	printf("1부터 %d까지의 합은 %d입니다\n",n,sum);
}
