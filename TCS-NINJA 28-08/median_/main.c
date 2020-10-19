#include <stdio.h>
#include<string.h>
void sort(int c[],int n)
{
	int i,j;
	int t;
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(c[i]>=c[j])
    {
     	t=c[i];
     	c[i]=c[j];
     	c[j]=t;
    }	
	}
	}
}
int main(int argc, char *argv[])
{
	int n;
	printf("Enter the number the element the:");
	scanf("%d",&n);
	int arr[n];
	int i=0,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	if(n%2==0)
	{
			for(i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		//printf("%d",sum);
		float f=(float)sum/n;
		printf("The median is: %f", f);
	}
	else
	{
			int n1=(n/2);
			printf("The median is: %d",arr[n1]);
	}

	return 0;
}
