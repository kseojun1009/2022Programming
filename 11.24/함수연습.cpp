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
	myPrint("10605김준서",3);
	myPrint("서울로봇",2);
	myPrint("시스템과",1);
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	myPrint("합의 결과",add(a,b));
}
