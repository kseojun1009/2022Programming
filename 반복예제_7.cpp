#include<stdio.h>
int main()
{
	int dan,n=9;
	printf("¸î´Ü?");
	scanf("%d",&dan);
	
	while(n>=1)
	{
		printf("%d * %d = %d\n",dan,n,dan*n);
		n--;
	}
} 
