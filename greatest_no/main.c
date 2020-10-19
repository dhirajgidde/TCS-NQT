#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
	
	if(num1>num2)
	{
		printf("The greatest number is:%d",num1);
	}
	else
	{
		printf("The greatest number is:%d ",num2);
	}
	return 0;
}
