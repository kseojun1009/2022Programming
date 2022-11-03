#include<stdio.h>
int main()
{
	char str1[6]={'H','e','l','l','o','\0'};
	char str2[]="world!";
	int i;
	
	printf("%s\n",str1);
	for(i=0;i<6;i++)
	{
		printf("%c",str2[i]);
	}
	//printf("%s\n",str2);
	
	printf("\nstr1의 크기 : %d\n",sizeof(str1));
	printf("\nstr2의 크기 : %d\n",sizeof(str2));
	str2[5]='~';
	printf("%s\n",str2);
}
