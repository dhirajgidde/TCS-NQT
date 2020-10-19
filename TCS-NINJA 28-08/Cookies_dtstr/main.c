#include <stdio.h>

int main(int argc, char *argv[])
{
	int m,n;
	printf("Enter the number of the cookies:");
	scanf("%d",&m);
	printf("\nEnter the number of the guest:");
	scanf("%d",&n);
	int i=1;
	int k=0;
	while(1)
	{
		k=n*i;
		if(k>m)
		{
			m=k-m;
			break;		
		}
		i++;	
	}
	printf("\nThe distribution is:%d",m);
	return 0;
}
