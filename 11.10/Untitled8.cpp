#include<stdio.h>
int main()
{
	int i,n;
	int a[10]={65,45,73,5,82,25,3,34,12,20};
	printf("�˻��� ������ : ");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
		if(a[i]==n)
		{
			printf("%d�� a[%d]�� �ֽ��ϴ�\n",n,i);
			break;
		}
		
		
	}
	if(i==10)
	{
		printf("%d��(��) ã�� �� �����ϴ�.\n",n);
	}
}
