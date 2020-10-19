#include <stdio.h>

int main(int argc, char *argv[])
{
	char *c=argv[1];
	
	int l=strlen(c);
	int i;
	for(i=0;i<l;i++)
	{
		if(c[i]==97 || c[i]==101 || c[i]==105 || c[i]==111 || c[i]==117)
		{
			c[i]=c[i]-32;	
		}
			
	}
	printf("%s",c);
	
	return 0;
}
