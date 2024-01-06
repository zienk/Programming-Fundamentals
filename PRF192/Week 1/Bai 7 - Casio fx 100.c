#include<stdio.h>
int main()
{
	int a, b , q, m, t, h, p;
	printf("Input a, b:");
	scanf("%d%d", &a, &b);
	t= a+b;
	h= a-b;
	p= a*b;
	q= a/b;
	m= a%b;
	printf("Sum:%d, Difference:%d, Product:%d, Quotient:%d, Modulus:%d",t, h, p, q, m);
	return 0;
}
