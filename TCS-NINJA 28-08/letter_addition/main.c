#include <stdio.h>

int main(int argc, char *argv[])
{
	char c[200];
	printf("Enter the string:");
	gets(c);
	int n=strlen(c);
	int i=0;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+(c[i]-96);	
	}
	printf("The sum of the letter is : %d",sum);
	//int a='a'-96;
	//printf("%d",a);
	return 0;
}
