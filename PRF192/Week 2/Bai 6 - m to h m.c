#include<stdio.h>
int main()
{
	int m, r,p ;
	printf("Iput minutes:");
	scanf("%d",&m);
	r= m/60;
	p= m%60;
	printf("%d hours %d minutes",r,p);
	return 0;
}
