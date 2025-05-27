#include<stdio.h>
int main()
{
	int n;
	printf("Input number:");
	scanf("%d",&n);
	if(n==0)
			printf("n=0");
	else
		if(n>0)
			printf("n is positive number");
		else
			printf("n is negative number");
		
	return 0;
}
