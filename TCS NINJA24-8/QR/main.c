#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	int n1=atoi(argv[2]);
	
	int rem=0,que=0;
	
	que=n/n1;
	rem=n%n1;
	
	printf("que: %d and rem: %d",que,rem);
	return 0;
}
