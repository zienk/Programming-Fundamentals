#include<stdio.h>
int main()
{
	int n,S=1;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
		S=S+(2*i+1);
	printf("%d",S);
}
