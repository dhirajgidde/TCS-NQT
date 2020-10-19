#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char c[200];
	gets(c);
	int l=strlen(c);
	int i=0,j=0;
	char t;
	for(i=0;i<l-1;i++)
	{
	for(j=i+1;j<l;j++)
	{
		if(c[i]>=c[j])
    {
     	t=c[i];
     	c[i]=c[j];
     	c[j]=t;
    }	
	}
	}
//	printf("%s\n",c);
	char str[200];
	int m=0;
	for(i=0;i<l;i++)
	{
		str[m]=c[i];
		m++;
		printf("%c,",c[i]);
		for(j=0;j<l;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				str[m]=c[i];
			 	m++;
			 	str[m]=c[j];
			 	m++;
				printf("%c%c,",c[i],c[j]);			
			}
			
		}
	}
	printf("\n");
	printf("\nnumber of the letter want ot print:");
	int andhi;
	scanf("%d",&andhi);
	printf("\nThe letter is:%c",str[andhi-1]);
	return 0;
}
