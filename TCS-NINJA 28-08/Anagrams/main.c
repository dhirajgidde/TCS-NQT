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
	char *c=argv[1];
	char *c1=argv[2];
	
	int n=strlen(c);
	int n1=strlen(c1);
	
	if(n1!=n)
	{
		printf("The given string is not anagrams");
		return 0;	
	}
	int i;
	sort(c,n);
	sort(c1,n);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(c[i]==c1[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	
	if(flag==1)
	{
		printf("The given string is a anagrams");
	}
	else
	{
		printf("The string is not a anagrams");
	}
	
	return 0;
}
