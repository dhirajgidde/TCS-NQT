#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=argc;

	int i=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		a[i]=atoi(argv[i+1]);	
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];	
	}
	
	printf("The sum of thenumbers: %d",sum);
	return 0;
}
