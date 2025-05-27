#include<stdio.h>
int main()
{
	int n,S;
	do{
		printf("Input n: ");
		scanf("%d",&n);
		S=S+n;
	}
	while(n!=0);
	printf("S= %d ",S);
}
