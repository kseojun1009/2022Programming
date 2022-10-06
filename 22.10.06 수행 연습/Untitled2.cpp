#include<stdio.h>
int main()
{
	int sum=0,n;
	for(n=1;sum<100;n++)
	{
		sum+=n;
	}
	printf("sum = %d, n = %d",sum,n-1);
	
}
