#include<stdio.h>
int main()
{
	int a[4][2];
	int i,j;
	int tot;
	double avg;
	
	for(i=0;i<=3;i++)
	{
		printf("%d�� �л��� ����, C��� ���� �Է� : ",i+1);
		for(int j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=3;i++)
	{
		tot=0;
		for(j=0;j<=1;j++)
		{
			tot+=a[i][j];
		}
		avg=tot/2.0;
		printf("%d�� �л��� ���� : %3d, ��� : %.2f\n",i+1,tot,avg);
		
	}
}
