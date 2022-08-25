#include<stdio.h> 
int main()
{
	int sum=0,i=1;
	do
	{
		if(i%2)	sum+=i;
		i++;
	}while(i<=50);
	printf("1부터 50까지 홀수 합 : %d",sum);
}
