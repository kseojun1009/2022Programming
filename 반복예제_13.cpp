#include<stdio.h> 
int main()
{
	int sum=0,i=1;
	do
	{
		if(i%2)	sum+=i;
		i++;
	}while(i<=50);
	printf("1���� 50���� Ȧ�� �� : %d",sum);
}
