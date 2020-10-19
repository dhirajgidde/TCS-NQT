#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char str[200];
	
	printf("Enter the word:");
	gets(str);
	int i,cnt=0;
	char c[200];
	int arr[20],k=0;
	int len=strlen(str);
	strcat(str," ");
	for(i=0;str[i]!='\0';i++)
	{
		c[i]=str[i];
		cnt++;
		if(c[i]==32)
		{
			c[i]="r";
			arr[k]=(cnt-1);
			//printf("%d\n",(cnt-1));
			cnt=0;
			k++;			
		}		
	}
	int j;
	int sum=arr[0],ly=0,ty=0,ad=0;
	for(j=0;j<k;j++)
	{
		if(sum>=arr[j])
		{
			ly=sum;
			ad++;
						
		}
		else
		{
			ly=arr[j];
			ad++;	
			
		}
		
	}

//	printf("%d",ad);
	int z=0;
	for(z=0;z<ad-1;z++)
	{
		ty=ty+arr[z]+1;	
	}
		
	if(arr[0]>=ly)
	{
		ty=0;
	}
	printf("The largest word in the string is:");
	for(j=ty;j<ty+ly;j++)
	{
		printf("%c",c[j]);	
	}

	return 0;
}
