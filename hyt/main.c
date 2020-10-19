#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int n1=atoi(argv[1]);
	int n2=atoi(argv[2]);
	
	float n3=0;
	n3=pow(n1,2)+pow(n2,2);
	float f=pow(n3,0.5);
	printf("The hypotenus of the right angle triangle is:%f",f);
	return 0;
}
