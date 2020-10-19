#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Enter the number:");
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}
