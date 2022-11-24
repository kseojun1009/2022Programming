#include<stdio.h>
void star(int a)
{
	if(a-->0)	printf("*");
	star(a);
}


int main()
{
	int a;
	scanf("%d",&a);
	star(a);
}
