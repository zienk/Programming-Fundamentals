#include<stdio.h>
int main()
{
	int a;
	printf("Iput ur number:");
	scanf("%d",&a);
	int c= a/10;
	int b= a%10;
	int t = c+b;
	printf("Sum:%d",t);
	return 0;
}
