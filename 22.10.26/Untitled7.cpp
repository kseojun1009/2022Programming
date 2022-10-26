#include<stdio.h>
int main()
{
	int h[]={170,178,175,180,177,167,189};
	int i,h_min=h[0],num;
	
	for(i=1;i<=6;i++)
	{
		if(h_min>h[i])
		{
			h_min=h[i];
			num=i+1;
		}
	}
	
	printf("가장 키가 작은 학생번호 = %d번, 키 = %dcm\n",num,h_min);
}/
