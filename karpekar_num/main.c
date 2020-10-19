#include <stdio.h>

int main(int argc, char *argv[])
{
	int num=1234;
	int digit=0;
	int a[4];
	int i=0,j=0;
	int t=0;
	int sum=0,sum1=0,sum2=0,cnt=0;
	while(1)
	{
		
		while(num>0)
		{
		digit=num%10;
		a[i]=digit;
		i++;
	//	sum=sum*10+digit;
		num=num/10;	
		}
   
	for(i=0;i<4-1;i++)
	{
	for(j=i+1;j<4;j++)
	{
		if(a[i]>=a[j])
    {
     	t=a[i];
     	a[i]=a[j];
     	a[j]=t;
    }	
	}
	}
	
	
	 for(i=0;i<4;i++)
	{
	//	printf("%d",a[i]);
		sum=sum*10+a[i];
	}
	
	for(i=0;i<4-1;i++)
	{
	for(j=i+1;j<4;j++)
	{
		if(a[i]<=a[j])
    {
     	t=a[i];
     	a[i]=a[j];
     	a[j]=t;
    }	
	}
	}
    for(i=0;i<4;i++)
	{
	//	printf("%d",a[i]);
		sum1=sum1*10+a[i];
	}	
	
 	sum2=sum1-sum;
 	printf("%d\n",sum2);
 	if(sum2==6174)
 	{
	 	cnt++;
	 	break;
	 }
	 else
	 {
 		cnt++;
 		num=sum2;
 	}
 	i=0;
 	sum=0;
 	sum1=0;
 	sum2=0;
}
printf("%d",cnt);
	return 0;
}
