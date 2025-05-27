#include<stdio.h>
int main()
{
	int n,P=1;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
		P=P*(2*i+1);
	printf("%d",P);
}
