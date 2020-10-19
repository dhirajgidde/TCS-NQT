#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Enter the number:");
	int num;
	scanf("%d",&num);
	int sum=0,digit=0;
	while(num>0)
	{
		digit=num%10;
		sum=sum*10+digit;
		num=num/10;	
	}
	printf("The reverse number is:%d",sum);
	return 0;
}
