#include<stdio.h>
int main()
{
	int sum[3]={},x,y;
	
	for(int i=0;i<=2;i++)
	{
		scanf("%d %d",&x,&y);
		sum[i]=x*y;
	}
	int t=sum[0];
	
	for(int i=1;i<=2;i++)
	{
		if(t<sum[i])	t=sum[i];
	}
	printf("%d",t);
	
	
}
