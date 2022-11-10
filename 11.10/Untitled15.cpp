#include<stdio.h>
int main()
{
	int length=0;
	char str[50];
	gets(str);
	
	int i=0;
	for(i=0;str[i];i++)
		length++;
	printf("%d",length);
}
