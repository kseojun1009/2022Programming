#include<stdio.h>
int main()
{
	int b[10]={25,7,25,7,3,25,3,7,25,1};
	int su,count;
	
	printf("데이터 : ");
	scanf("%d",&su);
	for(int i=0;i<=9;i++)
	{
		if(su==b[i])	count++;
	}
	printf("%d은(는) %d개 있습니다.",su,count);
}
