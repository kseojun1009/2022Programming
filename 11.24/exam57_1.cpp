#include<stdio.h>
int main()
{
	int arr[5];
	int max,min;
	for(int i=0;i<=4;i++)
	{
		printf("�Է� : ");
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(int i=1;i<=4;i++)
	{
		if(max<arr[i])	max=arr[i];
		if(min>arr[i])	min=arr[i];
	}
	printf("�ִ밪 : %d\n�ּҰ� : %d",max,min);
}
