#include<stdio.h>
int main()
{
	int i, even, odd;
	even=odd=0;
	
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
			even+=i;
		else
			odd+=i;
	}
	printf("¦���� = %d, Ȧ���� = %d\n",even,odd);
}
