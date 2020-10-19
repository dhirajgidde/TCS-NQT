#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
//	printf("%d",num1);
	int l;
	if(num1>num2)
	{
		l=num1;	
	}
	else
	{
		l=num2;
	}
	int i,lcm=0;
	int k=num1*num2;
	for(i=l;i<=k;i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			lcm=i;
			break;
		}
	}
	printf("The LCM of the given number:%d",lcm);
	return 0;
}
