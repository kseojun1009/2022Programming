#include<stdio.h>
int main()
{
	char voca[50];
	int len=0;
	printf("���ܾ� �Է� : ");
	scanf("%s",&voca);
	
	while(voca[len]!='\0')
		len++;
	printf("�Է��� ���ܾ��� ���̴� %d\n",len);
}
