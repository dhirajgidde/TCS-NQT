#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	int num=n;
	int num1=n;
	int digit=0;
	int sum=0;
	int cnt=0;
	while(num1>0)
	{
		num1=num1/10;
		cnt++;	
	}
	while(n>0)
	{
		digit=n%10;
		sum=sum+pow(digit,cnt);
		n=n/10;	
	}
	if(num==sum)
	{
		printf("The given number is the armstrong number");
	}
	else
	{
		printf("The number is not an armstrong");
	}
	return 0;
}
