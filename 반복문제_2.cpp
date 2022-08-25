#include<stdio.h>
int main()
{
	int i=1,num;
	
	printf("약수를 구할 수 입력 : ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		if(num%i==0) printf("%d ",i);
		i++;
	}
}   
