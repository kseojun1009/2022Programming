#include<stdio.h>
int main()
{
	int arr[6];
	for(int i=0;i<=5;i++)
	{
		printf("정수를 입력 : ");
		scanf("%d",&arr[i]);
	}
	for(int i=5;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
