#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Enter the number:");
	int num;
	scanf("%d",&num);
	int cnt=2;
	while(cnt<num)
	{
		if(num%cnt==0)
		{
			printf("The number is not prime");
			return;
		}
		cnt++;
	}
	if(num%num==0 && num%1==0)
	{
		printf("The number is prime");
	}
	
	return 0;
}
