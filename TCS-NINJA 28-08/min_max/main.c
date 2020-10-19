#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	int arr[n];
	int i,k=2;
	for(i=0;i<n;i++)
	{
		arr[i]=atoi(argv[k]);
		k++;
	}
	int temp=0,j;
	
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(arr[i]>=arr[j])
 	{
     	temp=arr[i];
     	arr[i]=arr[j];
     	arr[j]=temp;
    }	
	}
	}
	
	printf("\nThe min number is:%d",arr[0]);
	printf("The max number is:%d\n",arr[i]);	
	return 0;
}
