#include <stdio.h>
int count(int num)
{
	int digit=0,sum=0;
	
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	
	return sum;
}
int main(int argc, char *argv[])
{
	int num;
	scanf("%d",&num);
	int k;
	while(num>=9)
	{
		 k=count(num);
		 num=k;
	}
	printf("%d",k);
	return 0;
}
