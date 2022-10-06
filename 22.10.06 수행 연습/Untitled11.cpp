#include<stdio.h>
int main()
{
	int i=1,su,count=0;
	printf("숫자 입력 : ");
	scanf("%d",&su);
	
	while(i<=su)
	{
		if(su%i++==0)	count++;
	}
	
	if(count==2)
	{
		printf("%d은(는) 소수\n",su);
	}
	else
	{
		printf("%d은(는) 소수가 아님\n",su);
	}
}
