#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
//	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	int a[n],b[n];
	int i;

		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	int j,k;
	int num=0,cnt=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>b[j])
			{
				num=b[j];			
			}	
			else
			{
				num=a[i];
			}
			for(k=num;k>1;k--)
			{
				if(a[i]%k==0 && b[j]%k==0)
				{
					cnt++;
				//	printf("(%d,%d)",a[i],b[j]);
					b[j]=-1;
				//	j++;
					i++;
					break;
				}
			}
		}
	}
	
	printf("%d",cnt);
	return 0;
}
