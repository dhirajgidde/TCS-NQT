#include <stdio.h>

int main(int argc, char *argv[])
{
	int num;
//	printf("Enter the number:");
	scanf("%d",&num);
	
	int cnt=0,i,j=0,l=1,m=0;
	int a[1000];
	for(i=1;i<=num;i++)
	{
		cnt=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				cnt++;
				break;
			
			}	
		}
		
		if(cnt==0 && i!=1)
		{
			//printf("%d ",i);
			a[l]=i;
			l=l+2;
			
		}
	}
	int first=0,second=1;
	int next;
	
	for(i=0;i<num;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		a[m]=next;
		m=m+2;
	//	printf("%d, ",next);
	}
	//l=0;
	//printf("\n\nthe combi of fobicii and prime series is giveen as :\n");
	for(i=0;i<l;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n\n");
	return 0;
}
