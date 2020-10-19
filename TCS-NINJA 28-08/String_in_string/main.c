#include <stdio.h>

int main(int argc, char *argv[])
{
	char *c=argv[1];
	char *c1=argv[2];
	
	int s=strlen(c);
	int s1=strlen(c1);
	int i,j=0,flag=0;
	
	for(i=0;i<s1;i++)
	{
		if(c[j]==c1[i])
		{
			flag=1;
			j++;
		}
		else
		{
			j=0;
			flag=0;
		}
		if(s==j && flag==1)
		{
			j=0;
			printf("Yes");
			return;
			
		}
	}
	printf("No");
	return 0;
}
