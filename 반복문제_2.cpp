#include<stdio.h>
int main()
{
	int i=1,num;
	
	printf("����� ���� �� �Է� : ");
	scanf("%d",&num);
	
	while(i<=num)
	{
		if(num%i==0) printf("%d ",i);
		i++;
	}
}   
