#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int temp;
	for(int i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	temp=a[0];
	
	for(int i=0;i<=3;i++)
	{
		a[i]=a[i+1];
	}
	
	a[4]=temp;
	
	for(int i=0;i<=4;i++)
	{
		printf("%d",a[i]);
	}
}
