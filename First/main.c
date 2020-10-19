#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[3],b[3];
	printf("Enter the point of allice");
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]); 
	}
	printf("Enter the point of Bob");
	
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]); 
	}
	int a1=0,b1=0;	
	for(i=0;i<3;i++)
	{
		if(a[i]==b[i])
		{
			continue;
		}
		else
		{
			if(a[i]>b[i])
			{
				a1++;
			}
			else
			{
				b1++;
			}
		}
	}
	printf("The point of allice: %d",a1);
	printf("\nThe point of bob: %d",b1);
	return 0;
}
