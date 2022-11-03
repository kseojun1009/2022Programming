#include<stdio.h>
int main()
{
	int score[5];
	int i,min=100;
	for(i=0;i<=4;i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력 : ",i+1);
		scanf("%d",&score[i]);
	}
	for(i=0;i<5;i++)
	{
		if(score[i]<min)
			min=score[i];
	}
	printf("최저 점수 : %d\n",min);
	
}
