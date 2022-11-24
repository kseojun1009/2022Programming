#include<stdio.h>
int main()
{
	int arr[4][2];
	int tot;
	double avg;
	
	for(int i=0;i<=3;i++)
	{
		printf("%d번 학생의 수학,C언어 성적 입력 : ",i+1);
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
		printf("%d번 학생의 총점 : %d, 평균 : %.2lf\n",i+1,tot,avg);
	}
	
	
}
