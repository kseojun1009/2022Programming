#include<stdio.h>
int main() 
{
	int i=1,sum=0;
	while(1)
	{
		sum+=i;
		i+=2;
		if(i>100)break;
	}
	printf("1���� 100���� Ȧ���� �� = %d\n",sum);
} 
