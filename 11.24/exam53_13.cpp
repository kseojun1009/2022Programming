#include<stdio.h>
int main()
{
	char s[10001]={};
	int count=0;
	printf("���ܾ� �Է� : ");
	scanf("%s",s);
	
	while(s[count]!='\0')	count++;
	
	printf("�Է��� ���ܾ��� ���̴� %d\n",count);
}
