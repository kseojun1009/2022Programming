#include <stdio.h>

exam12(){
	int num=1, sum=0;
	for(;;)
	{
		sum=sum+num;
		printf("%d������ �� : %d\n",num,sum);
		num++;
		if(num>5)	break;
	}
} 

exam13(){
	
} 

exam14(){
	
} 

exam15(){
	
} 

exam16(){
	
} 


main(){
	int no;
	
	while(1){
		printf("\n������ȣ:");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
			case 16: exam16(); break;
		}
	}
}
