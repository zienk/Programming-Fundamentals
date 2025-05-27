#include<stdio.h>
int main()
{
	int n,S=0,P=1;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
		P=P*i;
		S=S+P;
	printf("%d",S);
}
