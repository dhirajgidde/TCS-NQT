#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int a,b,x;
	printf("Enter the three inputs a,b, and x respectively:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&x);
	
	int n=pow(a,b);
	
	int i;
	for(i=n;i>0;i--)
	{
		if(i%x==0)
		{
			printf("%d",i);
			break;
		}
	}	
	return 0;
}
