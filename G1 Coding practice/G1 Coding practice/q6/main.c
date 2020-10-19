#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Enter the base of traingle:");
	float a,b,c;
	scanf("%f",&b);
	printf("Enter the height of traingle:");
	scanf("%f",&a);
	c=0.5*b*a;
	printf("The area of traingle is:%f",c);
	return 0;
}
