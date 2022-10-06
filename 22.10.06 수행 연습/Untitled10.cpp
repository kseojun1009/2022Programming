#include<stdio.h>
int main()
{
	int sum=0,i=1;
	while(1)
	{
		if(i>10)	break;
		if(i%5!=0)	sum+=i;
		i++;
	}
	printf("sum = %d",sum);
	
}
