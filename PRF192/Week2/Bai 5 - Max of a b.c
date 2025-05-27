#include<stdio.h>
int main()
{
	int a,b;
	printf("Input a b:");
	scanf("%d%d",&a, &b);
	int max;
	if(a>b)
		max=a;
	else
		max=b;
	printf("Max: %d",max);
	return 0;
}
