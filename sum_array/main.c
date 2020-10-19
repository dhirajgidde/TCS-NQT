#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];	
	}
	
	printf("The sum of the numbers: %d",sum);
	return 0;
}
