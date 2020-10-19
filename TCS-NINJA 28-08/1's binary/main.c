#include <stdio.h>

int main(int argc, char *argv[])
{
	int num,digit=0,bin=0,a=1,cnt=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%2;
		if(digit==1)
		{
			cnt++;
		}
		bin=bin+digit*a;
		a=a*10;
		num=num/2;
	}
	printf("The number of 1's in a given number is : %d\n",cnt);
	return 0;
}
