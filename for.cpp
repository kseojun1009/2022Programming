#include <stdio.h>
#include <stdlib.h>
#include <time.h>
exam12(){
	int num=1, sum=0;
	for(;;)
	{
		sum=sum+num;
		printf("%d까지의 합 : %d\n",num,sum);
		num++;
		if(num>5)	break;
	}
} 

exam13(){
	int i,j;
	for(i=1;i<=3;i++)
	{
		printf("%d(i)학년\n",i);
		for(j=1;j<=5;j++)
		{
			printf("\t%d(j)반\n",j);
		}
		printf("\n");
	}
} 

exam14(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("*");
		}
		printf("\n");
	}
} 

exam15(){
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
} 

exam16(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
} 

exam17(){
	int i,j,n;
	printf("출력할 행 입력 : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

exam18(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=i;j>=1;j--)
			printf("*");
		printf("\n");
	}
}


exam19(){
	int i,j;
	for(i=2;i<=9;i++)
	{
		printf("*** %d단 ***\n",i);
		for(j=1;j<=9;j++)
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
}

exam20(){
	int num=0;
	while(1)
	{
		num++;
		printf("%d \n",num);
		if(num==5)
			break;
	}
}


exam21(){
	printf("===1번===\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Be happy~\n");
		}
	}
	
	printf("\n\n===2번===\n");
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Be happy~\n");
			if(j==1)	break;
		}
	}
}

exam22(){
	int i;
	for(i=0;i<10;i++)
	{
		if(i%3==0)
			continue;
		printf("%d ",i);
	}
}


exam23(){
	int i=0;
	while(i<=20)
	{
		i++;
		if(i%2==1)	continue;
		
		printf("%d \n",i);
	}
}

exam100(){
	int n=1,sum=0;
	
	while(1)
	{
		sum+=n;
		if(sum>=100) break;
		n++;
	}
	printf("sum = %d, n = %d\n",sum,n);
}


exam200(){
	int n,count=0,sum=0;
	
	do
	{
		scanf("%d",&n);
		if(n<1)	continue;
		count++;
		sum+=n;
	}while(count<5);
	
	printf("합계 : %d \n",sum);
}


exam300(){
	int n,a;
	
	printf("4자리수 입력 : ");
	scanf("%d",&n);
	
	do{
		//
		printf("%d",n%10);
		n/=10;
	}while(n!=0);
}

exam400(){
	int n,a1=0,a2=1,a3,i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a1);
		a3=a1+a2;
		
		a1=a2;
		a2=a3;
	}
}

exam500(){
	
	int answer,cnt=0,guess;
	srand(time(NULL));
	answer=rand()%101;
	
	do
	{
		printf("1부터 100까지 숫자를 맞춰보세요>> ");
		scanf("%d",&guess);
		cnt++;
		
		if(guess>answer)
			printf("제시한 숫자가 높습니다.(%d보다 낮은 수)\n",guess);
		if(guess<answer)
			printf("제시한 숫자가 낮습니다.(%d보다 높은 수)\n",guess);
	}while(answer!=guess);
	
	printf("축하합니다! 정답은 %d이고, 시도횟수 = %d\n",answer,cnt);
}

exam600(){
	int a,b,temp,i;
	printf("*** 두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	
	for(i=a;i<=b;i++)
		printf("%d ",i);

}

exam700(){
	int i;
	
	for(i=1;i<=25;i++)
	{
		printf("%3d ",i);
		if(i%5==0)	printf("\n");
	}
}

exam800(){
	int num;
	while(1)
	{
		printf("숫자입력 : ");
		scanf("%d",&num);
		if(num<0)	break;
		if(num==0)	continue;
		if(num%2==0)
			printf("짝수\n");
		else
			printf("홀수\n");
	}
}

exam900_1(){
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("O");
		}
		printf("*\n");
	}
}

exam900_2(){
	int i=1,j;
	
	while(i<=5)
	{
		j=1;
		while(j<i)
		{
			printf("O");
			j++;
		}
		printf("*\n");
		i++;
	}
}

exam1000(){
	int n,i,jumsu;
	int max=0,min=100;
	printf("학생수를 입력하세요 : ");
	scanf("%d",&n);
	printf("점수를 입력하세요(0~100) : ");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&jumsu);
		if(max<jumsu)	max=jumsu;
		if(min>jumsu)	min=jumsu;
	}
	printf("1등은 %d점, 꼴찌는 %d점\n",max,min);
}

exam1100(){
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=2;j<=5;j++)
			printf("%2d *%2d = %2d\t",j,i,j*i);
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=9;i++)
	{
		for(j=6;j<=9;j++)
			printf("%2d * %2d = %2d\t",j,i,j*i);
		printf("\n");
	}
}

exam1200(){
	
}

exam1300(){
	
}

exam1400(){
	
}

exam1500(){
	
}

exam1600(){
	
}


main(){
	int no;
	
	while(1){
		printf("\n문제번호 : ");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
			case 19: exam19(); break;
			case 20: exam20(); break;
			case 21: exam21(); break;
			case 22: exam22(); break;
			case 23: exam23(); break;
			case 100: exam100(); break;
			case 200: exam200(); break;
			case 300: exam300(); break;
			case 400: exam400(); break;
			case 500: exam500(); break;
			case 600: exam600(); break;
			case 700: exam700(); break;
			case 800: exam800(); break;
			case 901: exam900_1(); break;
			case 902: exam900_2(); break;
			case 1000: exam1000(); break;
			case 1100: exam1100(); break;
			case 1200: exam1200(); break;
			case 1300: exam1300(); break;
			case 1400: exam1400(); break;
			case 1500: exam1500(); break;
			case 1600: exam1600(); break;
		}
	}
}
