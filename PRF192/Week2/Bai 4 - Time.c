#include<stdio.h>
int main()
{
	int h,m,s,r;
	printf("Input time:");
	scanf("%d%d%d",&h, &m, &s);
	r=(h*3600) + (m*60) + s ;
	printf("%d seconds",r);
	return 0;
}
