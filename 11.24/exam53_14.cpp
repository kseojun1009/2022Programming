#include<stdio.h>
#include<string.h>
int main()
{
	char sen[10001]={};
	gets(sen);
	printf("���� ���� : %d\n",strlen(sen));
	for(int i=strlen(sen)-1;i>=0;i--)	printf("%c",sen[i]);
}
