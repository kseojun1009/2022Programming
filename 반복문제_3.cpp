#include<stdio.h>
int main()
{
	int i=1,su,cnt=0;
	printf("���� �Է� : ");
	scanf("%d",&su);
	
	while(i<=su)
	{
		if(su%i==0)
			cnt++;
		i++;
	}
	if(cnt==2)
		printf("%d��(��) �Ҽ�",su);
	else
		printf("%d��(��) �Ҽ��� �ƴ�",su);
}
