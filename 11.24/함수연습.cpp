#include<stdio.h>
void myPrint(char *str,int a)
{
	printf("[%d] %s\n",a,str);
	printf("==================\n\n");
}

int add(int a,int b)
{
	int sum=a+b;
	return sum;
}


int main()
{
	myPrint("10605���ؼ�",3);
	myPrint("����κ�",2);
	myPrint("�ý��۰�",1);
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	myPrint("���� ���",add(a,b));
}
