#include <stdio.h>
void sort(char c[],int n)
{
	int i,j;
	char t;
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(c[i]>=c[j])
    {
     	t=c[i];
     	c[i]=c[j];
     	c[j]=t;
    }	
	}
	}
}
int main(int argc, char *argv[])
{
	char c[200];
	printf("Enter the string:");
	gets(c);
	int n=strlen(c);
	sort(c,n);
	int i=0;
	int j=97,l=0;
	for(i=0;i<n;i++)
	{
		if(c[i]==j)
		{
			j++;
			l++;
			
		}
	}
	if(l==26)
	{
		printf("Yes, The given string is panagrams");
	}
	else
	{
		printf("No, The given string is not panagrams");
	}
	return 0;
}
