#include<stdio.h>

void func8()
{
	int i,n,fact=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d! = %d\n",n,fact);
}

void func9()
{
	int i,dan;
	printf("���ϴ� ����? ");
	scanf("%d",&dan);
	
	printf("\n*** %d�� ***\n",dan);
	for(i=1;i<=9;i++)
	{
		printf("%d * %d = %d\n",dan,i,dan*i);
	}
}


void func10()
{
	int n1,n2,i;
	printf("�� �� �Է� : ");
	scanf("%d %d",&n1,&n2);
	if(n1<n2)
	{
		for(i=n1;i<=n2;i++)
			printf("%d ",i);
	}
	else
	{
		for(i=n2;i<=n1;i++)
			printf("%d ",i);
	}
}

void func11()
{
	int num1,num2,i;
	
	printf("������� ���� �� ���� �Է� : ");
	scanf("%d %d",&num1,&num2);
	
	for(i=1;i<=100;i++)
	{
		if(i%num1==0&&i%num2==0)
			printf("%d ",i);
	}
}

int main()
{
	int no;
	while(1)
	{
		printf("���� ��ȣ : ");
		scanf("%d",&no);
		printf("%d�� ����\n",no);
		switch(no)
		{
			case 8: func8();break;
			case 9: func9();break;
			case 10: func10();break;
			case 11: func11();break;
			default:
				printf("�߸��� ��ȣ\n");
				return 0;
		}
		printf("\n\n");
	}
}
