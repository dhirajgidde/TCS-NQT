 #include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	printf("Enter the size of floyed traingle:");
	scanf("%d",&n);
	printf("\n");
	int k=1,i,j;
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}
