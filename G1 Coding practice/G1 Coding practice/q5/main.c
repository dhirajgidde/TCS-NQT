#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Enter the radius:");
	float r;
	scanf("%f",&r);
	float a;
	a=3.14*r*r;
	printf("The area of circle is:%f",a);
	return 0;
}
