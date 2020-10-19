#include <stdio.h>
void sort(int a[],int n)
{
	int temp=0;
	int i,j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(int argc, char *argv[])
{
	char c[200]="ankitadhiraj";
	
	int i,j;
	int k=strlen(c);
	int cnt=1,l=1;
	int arr[20],m=0;
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(c[i]==c[j])
			{
				cnt++;
				c[j]=l++;
			
			}
		}
		if(c[i]>=97 && c[i]<=122)
		{
			arr[m]=i+cnt;	
			m++;
			printf("%c=%d \n",c[i],cnt);	
		}
		
		cnt=1;
	}
	
	sort(arr,m);
	
	return 0;
}
