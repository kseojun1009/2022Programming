#include<stdio.h>
int main()
{
	int a,b,t;
	printf("*** �� �� ������ ���� ����ϱ� ***\n�� �� �Է� : ");
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
