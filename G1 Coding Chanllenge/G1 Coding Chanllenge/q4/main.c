#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	printf("Enter the number:");
	int num;
	scanf("%d",&num);
	int a;
	float b=pow(num,0.5);
	printf("The square root of the number:%f",b);
	float m,n;
	n=0.0001;
	for(m=0;m<num;m=m+n)
	{
		if((m*m)>num)
		{
			m=m-n;
			break;
		}
	}
	printf("\nthe square root is :%f",round(m));
	return 0;
}
