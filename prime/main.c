#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	
	int i;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("The is not prime");
			return 0;
		}
	}
	if(n%n==0 && n%1==0)
	{
		printf("The number is prime");
	}
	
	return 0;
}
