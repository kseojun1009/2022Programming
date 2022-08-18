#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("첫번째 수와 마지막 수 입력 : ");
	scanf("%d %d",&i,&n);
	
	printf("%d부터 ",i);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d까지의 합은 %d입니다\n",n,sum);
}
