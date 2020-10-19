#include <stdio.h>

int fact(int n)
{
	int i=0,n1=1;
	for(i=1;i<=n;i++)
	{
		n1=n1*i;		
	}
	printf("%d\n",n1);
	return n1;
}
int main(int argc, char *argv[])
{
	int n;
	int r;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of r:");
	scanf("%d",&r);
	int ncr=fact(n)/(fact(r)*fact(n-r));
	int npr=fact(n)/fact(r);
	printf("ncr: %d\n",ncr);
	printf("npr: %d\n",npr);
	return 0;
}
