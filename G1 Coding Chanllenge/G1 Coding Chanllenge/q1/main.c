#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Enter the number:");
	int num;
	scanf("%d",&num);
	int num1=num;
	int digit=0,rev=10,sum=0;
	while(num>0)
	{
		digit=num%10;
		sum=sum*10+digit;
		//rev=rev*10;
		num=num/10;
	}
	if(num1==sum)
	{
		printf("The given number is palindrome",sum);
	}
	else
	{
		printf("The given number is not palindrome");
	}
	
	
	return 0;
}
