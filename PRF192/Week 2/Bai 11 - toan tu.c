#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Input 2 numbers: ");
	scanf("%d%d",&a,&b);
	max = a>b ? a:b	;
	printf("%d",max);
	return 0;
}
