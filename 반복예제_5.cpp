#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("ù��° ���� ������ �� �Է� : ");
	scanf("%d %d",&i,&n);
	
	printf("%d���� ",i);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d������ ���� %d�Դϴ�\n",n,sum);
}
