#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[3],arr1[2];
	
	int i=0;
	printf("enter the first array:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the Second array:");
	for(i=0;i<2;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int j=0,cnt=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[j]<=arr1[i])
			{
				cnt++;			
			}		
		}
		printf("\n%d",cnt);
		cnt=0;	
	}
	return 0;
}
