#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{

	char* s=argv[1];
	//printf("%s",s);
	
	char c[20],d[20];
	int i;
	int j=0;
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		c[i]=s[i];
		if(c[i]>=65 && c[i]<=90)
		{
			d[j]=c[i]+32;
			j++;		
		}
		else
		{
			d[j]=c[i];
			j++;
		}
		
	}
	
	
		
//	printf("%s",c);
	for(i=0;i<j;i++)
	{
		printf("%c",d[i]);
	}
	return 0;
}
