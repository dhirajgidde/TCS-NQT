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
	
	float f=(float)sum/n;
	
	printf("The average of the given number is : %f", f);
	
	return 0;
}
