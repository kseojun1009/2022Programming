#include<stdio.h>
int main()
{
	char s[10001]={};
	int count=0;
	printf("영단어 입력 : ");
	scanf("%s",s);
	
	while(s[count]!='\0')	count++;
	
	printf("입력한 영단어의 길이는 %d\n",count);
}
