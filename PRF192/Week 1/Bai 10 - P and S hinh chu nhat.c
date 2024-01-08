#include<stdio.h>
int main ()
{
	float a, b, c, s;
	printf("Input length and width: ");
	scanf("%f%f",&a, &b);
	c = (a+b)*2;
	s = a*b;
	printf("Perimeter: %f Area: %f", c, s);
	return 0;
}
