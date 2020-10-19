#include <stdio.h>

int main(int argc, char *argv[])
{
	int rupees;
	printf("Enter the amount:");
	scanf("%d",&rupees);
	int n;
	printf("\n how many types u want to convert:");
	scanf("%d",&n);
	
	int arr[n];
	
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	int j=0;
	int num=0;
	for(i=rupees;i>0;i--)
	{
		if(i%arr[j]==0)
		{
			num=rupees/arr[j];
			printf("We required %d note of %d rupees\n\n",num,arr[j]);
			j++;		
			rupees=rupees-i;
			i=rupees+1;
			
		}
		if(rupees==0)
		{
			break;
		}
	}
	
	return 0;
}
