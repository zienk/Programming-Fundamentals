#include<stdio.h>
int main()
{
	char c='A'; int i=1; long l=100;
	float f=0.5f; double d=12.809;
	printf("Variable c: at addr: %u, value: %c, size: %d\n", &c, c, sizeof(c));
	printf("Variable i: at addr: %u, value: %d, size: %d\n", &i, i, sizeof(i));
	printf("Variable l: at addr: %u, value: %ld, size: %ld\n", &l, l, sizeof(l));
	printf("Variable f: at addr: %u, value: %f, size: %f\n", &f, f, sizeof(f));
	printf("Variable d: at addr: %u, value: %lf, size: %lf\n", &d, d, sizeof(d));
	getch();
}
