#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char* s=(argv[1]);
 //	char s[200]="dasd";	
	char c[20];
	
	int l=strlen(s);
	int m=l-1;
	int i;
	for(i=0;i<l;i++)
	{
		c[m]=s[i];
		m--;
		//printf("%c",c[m]);		
	}
	
	for(i=0;i<l;i++)
	{
		if(c[i]==s[i])
		{
			continue;
		}
		else
		{
			printf("The given string is not palindrome");
			return 0;
		}

//		printf("%c",c[i]);		
	}
	printf("The given string is palindrome");
	return 0;
}
