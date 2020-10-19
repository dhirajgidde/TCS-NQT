#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("Enter the year:");
	scanf("%d",&n);
	
	if(n%400==0)
	{
		printf("The year is leap year");
	}
	else
	{
		if(n%100==0)
		{
			printf("The year is not leap year");
		}
		else
		{
			if(n%4==0)
			{
				printf("The year is leap year");
			}
			else
			{
			printf("The year is not leap year");
			}
		}
	
		
	}
	return 0;
}
