#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	strlen(str);
	printf("str�� ���ڱ��� : %d\n",sizeof(str));
	
	for(i=sizeof(str)-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

