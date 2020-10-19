#include <stdio.h>

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	int f=0,s=1,n1=0;
	int i;
	
	for(i=0;i<n;i++)
	{
		if(i==0 || i==1)
		{
			n1=i;
		}
		else
		{
			n1=f+s;
			f=s;
			s=n1;
		}
		printf("%d,",n1);
	}
	return 0;
}
