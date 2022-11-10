#include<stdio.h>
int main()
{
	int num[10]={29,24,56,42,35,41,64,79,51,14};
	int sum=0;
	int i;
	for(i=0;i<9;i+=2)
	{
		sum+=num[i];
	}
	printf("%d",sum);
	return 0;
}
