#include <stdio.h>

int main(int argc, char *argv[])
{
	char *c=argv[1];
	int n=strlen(c);
	
	int i=0,cnt=0;
	for(i=0;i<n;i++)
	{
		if(c[i]>=65 && c[i]<=90)
		{
			cnt++;
		}
	}
	
	printf("The number of letters ion camel case notation:%d",cnt);
	return 0;
}
