#include<stdio.h>
int main()
{
	int i=1,su,count=0;
	printf("���� �Է� : ");
	scanf("%d",&su);
	
	while(i<=su)
	{
		if(su%i++==0)	count++;
	}
	
	if(count==2)
	{
		printf("%d��(��) �Ҽ�\n",su);
	}
	else
	{
		printf("%d��(��) �Ҽ��� �ƴ�\n",su);
	}
}
