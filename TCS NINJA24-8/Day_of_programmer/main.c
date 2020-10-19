#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("Enter the year:");
	scanf("%d",&n);
	int a[12];
	if(n%400==0)
	{
		a[1]=29;	
	}
	else
	{
		if(n%100==0)
		{
			a[1]=28;
		}
		else
		{
			if(n%4==0)
			{
				a[1]=29;
			}
			else
			{
				a[1]=28;
			}
		}
	}
	
	a[0]=31;
	a[2]=31;
	a[3]=30;
	a[4]=31;
	a[5]=30;
	a[6]=31;
	a[7]=31;
	a[9]=30;
	int i=0;
	int sum=0;
	int cnt=0;
	for(i=0;i<8;i++)
	{
		sum=sum+a[i];
		cnt++;	
	}
	sum=256-sum;
	printf("%d:%d:%d\n",sum,(cnt+1),n);
	return 0;
}
