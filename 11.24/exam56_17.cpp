#include<stdio.h>
int main()
{
	int arr[4][2];
	int tot;
	double avg;
	
	for(int i=0;i<=3;i++)
	{
		printf("%d�� �л��� ����,C��� ���� �Է� : ",i+1);
		for(int j=0;j<=1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<=3;i++)
	{
		tot=0;
		for(int j=0;j<=1;j++)
		{
			tot+=arr[i][j];
		}
		avg=tot/2.0;
		printf("%d�� �л��� ���� : %d, ��� : %.2lf\n",i+1,tot,avg);
	}
	
	
}
