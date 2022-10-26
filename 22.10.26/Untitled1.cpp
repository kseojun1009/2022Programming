#include<stdio.h>
int main()
{
	int i;
	int num[3];
	
	num[0]=10;
	num[1]=20;
	num[2]=30;
	for(i=0;i<=2;i++)
	{
		printf("num[%d] = %d\n",i,num[i]);
	}
}
