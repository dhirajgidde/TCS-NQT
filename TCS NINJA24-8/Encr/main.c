#include <stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[])
{
	char s[200];
	gets(s);

	char c[200];
	int i;
	int j=strlen(s);
	int cnt=0,adg=0;
	for(i=0;i<j;i++)
	{
		if(s[i]==32)
		{
			c[adg]=s[i+1];
			adg++;
			i++;
			//continue;
			
			//cnt++;
		}
		else
		{
			c[adg]=s[i];
			adg++;
		//	cnt++;
		}
	}
	int l;
	for(l=0;l<adg;l++)
	{
			printf("%c",c[l]);
			cnt++;
	}
	int d=cnt-1;
	printf("%d\n",d);
	float d1=sqrt(d);
	printf("%f",d1);
	int d2=round(d1);
	//printf("%d",d2);
	int m=0,n=0;
	if(d2>d1)
	{
		m=d2-1;
		n=d2;	
	}
	else
	{
		m=d2;
		n=d2+1;
	}
	printf("\nThe number is between %d and %d",m,n);
	char arr[m][n];	
	int x,y,z=0;
	for(x=0;x<m;x++)
	{
		for(y=0;y<n;y++)
		{
			arr[x][y]=c[z];
			z++;
		}
	}
	
	for(x=0;x<m;x++)
	{
		printf("\n");
		for(y=0;y<n;y++)
		{
			printf("%c",arr[x][y]);
		}
	}
	char dhan[200];
	z=0;
	for(x=0;x<n;x++)
	{
		for(y=0;y<m;y++)
		{
			dhan[z]=arr[y][x];
			z++;
		}
	}
	printf("\nThe encrypted string is : ");
	for(x=0;x<z;x++)
	{
		printf("%c",dhan[x]);
	}
	
	
	return 0;
}
d