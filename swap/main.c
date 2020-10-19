#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
	
	printf("before swapping:%d  %d",num1,num2);
	
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	
	printf("\nAfter swapping: %d %d",num1,num2);
	return 0;
}
