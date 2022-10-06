#include<stdio.h>
int main()
{
	int a,b,t;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n두 수 입력 : ");
	scanf("%d %d",&a,&b);
	if(b<a)
	{
		t=a;
		a=b;
		b=t;
	}
	for(int i=a;i<=b;i++)
	{
		printf("%d ",i);
	}
	
}
