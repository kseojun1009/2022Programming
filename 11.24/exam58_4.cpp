#include<stdio.h>
int main()
{
	int b[10]={25,7,25,7,3,25,3,7,25,1};
	int su,count;
	
	printf("������ : ");
	scanf("%d",&su);
	for(int i=0;i<=9;i++)
	{
		if(su==b[i])	count++;
	}
	printf("%d��(��) %d�� �ֽ��ϴ�.",su,count);
}
