#include<stdio.h>
int main()
{
	long long n,g=1;
	printf("Iput n: ");
	scanf("%lld",&n);
	long long i;
	for(i=1;i<=n;i++)
	g=g*i;
	printf("Factorial of %lld = %lld",n,g);
}
