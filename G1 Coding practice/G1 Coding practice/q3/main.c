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
		digit=num%8;
		array[j]=digit;
		j++;
		
		num=num/8;	
	}
	int i;
	//printf("%d\n",j);
	for(i=j-1;i>=0;i--)
	{
		printf("%d",array[i]);
	}
	return 0;
}
