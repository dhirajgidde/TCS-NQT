#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	int arr[n];
	int i=0;
	int k=2;
	for(i=0;i<n;i++)
	{
		arr[i]=atoi(argv[k]);
		k++;	
	}
	int j=0;
	int arr1[n];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arr1[j]=arr[i];
			j++;		
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			continue;
		}
		else
		{
			arr1[j]=arr[i];
			j++;
		}
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d,",arr1[i]);
	}
	return 0;
}
