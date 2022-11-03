#include<stdio.h>
int main()
{
	char str[6]="apple";
	int i=0;
	printf("한 문자씩 출력\n");
	while(i<=5)
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n\n문자열로 한꺼번에 출력\n");
	printf("%s",str);
}
