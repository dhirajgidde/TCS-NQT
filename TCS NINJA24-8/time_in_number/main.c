#include <stdio.h>
#include<string.h>

void timet(char *c5)
{
	char *c[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char *c1[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen",
                     "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *c2[] = {"", "", "twenty", "thirty", "forty", "fifty"};
 
	int sum=0;
	int h=strlen(c5);
	char *i;
	if(h==2)
	{
	if(*c5=='1')
	{
		sum=*c5-'0'+*(c5+1)-'0';
		//i=c1[sum];
		printf("%s",c1[sum]);
			
	}
	else
	{
		if(*c5=='2' && *(c5+1)=='0')
		{	
			printf("twenty");
			
		}
		else
		{
			int l=*c5-'0';
			int l1=*(c5+1)-'0';
			printf("%s ",c2[l]);
			if(l1!=0)
			printf("%s",c[l1]);
			
		}	
		
	}
	}
	else
	{
		printf("%s",c[*c5-'0']);
	}	
	
	
}
int main(int argc, char *argv[])
{
	char *minute="15";
	char *hour="7";
	int a=atoi(minute);
	int b=atoi(hour);
	if(a==0)
	{
		timet(hour);
		printf(" o'clock\n");
	}
	if(a==15)
	{
		printf(" quarter past ");
		timet(hour);	
	}
	else
	{
		if(a>=1 && a<30)
		{
		timet(minute);
		printf(" minute past ");
		timet(hour);	
		}
		else
		{
			if(a==30)
			{
				printf("half past ");
				timet(hour);
			}
		}	
	}
	
	
	if(a==45)
	{
		
		char c=(*hour)+1;
		char *vinayak=&c;
		printf("quarter to ");
		timet(vinayak);
	}
	else
	{
		if(a>30 && a<60)
		{
			
			timet(minute);
			printf(" minute past ");
			timet(hour);
			
		}
		
	}
	printf("\n");

	
	 
	
	
		

	return 0;
}
