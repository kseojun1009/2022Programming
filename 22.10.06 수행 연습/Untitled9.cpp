#include<stdio.h>
int main()
{
	int sum=0,i=1,n;
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n",n,sum);
}
