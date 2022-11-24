#include<stdio.h>
int main()
{
	int arr[5];
	int max,min;
	for(int i=0;i<=4;i++)
	{
		printf("입력 : ");
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(int i=1;i<=4;i++)
	{
		if(max<arr[i])	max=arr[i];
		if(min>arr[i])	min=arr[i];
	}
	printf("최대값 : %d\n최소값 : %d",max,min);
}
