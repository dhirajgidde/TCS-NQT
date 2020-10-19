#include <stdio.h>

int main(int argc, char *argv[])
{
	int num;
	scanf("%d",&num);
	int digit=0,bin=0,r=0;	
	while(num>0)
	{
		digit=num%10;
		//bin=bin+digit*r;
		bin=bin+digit*pow(8,r);
		r++;
		num=num/10;	
	}
	
	printf("%d",bin);
	return 0;
}
