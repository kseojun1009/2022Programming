#include<stdio.h>
int main()
{
	int i,su,cnt=0;
	int b[10]={25,7,25,7,3,25,3,7,25,1};
	printf("������ : ");
	scanf("%d",&su);
	for(i=0;i<=9;i++)
	{
		if(b[i]==su)
			cnt++;
	}
	printf("%d��(��) %d�� �ֽ��ϴ�.\n",su,cnt);
}
