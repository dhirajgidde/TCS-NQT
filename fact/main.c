#include <stdio.h>

int main(int argc, char *argv[])
{
	int fact=itoa(argv[1]);
	int n,k=1;
	for(n=5;n>0;n--)
	{
		k=k*n;	
	}
	printf("The fact of the given number is:%d",k);
	return 0;
}
