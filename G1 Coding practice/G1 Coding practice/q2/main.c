 #include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	printf("Enter a number:");
	int num;
	scanf("%d",&num);
	int digit,reminder,s,sum=0,cnt=0;
	int array[10],j=0;
	while(num>0)
	{
		digit=num%1000;
		cnt=0;
		sum=0;
		while(digit>0)
		{
			s=digit%10;
			sum=sum+(s)*(pow(2,cnt));
			cnt++;
			digit=digit/10;				
		}
		array[j]=sum;
		j++;
		
		num=num/1000;	
	}
	int i;
	//printf("%d\n",j);
	for(i=j-1;i>=0;i--)
	{
		printf("%d",array[i]);
	}
	return 0;
}
