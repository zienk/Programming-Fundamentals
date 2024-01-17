#include<stdio.h>
int main()
{
	int t;
	printf("Enter temperature: ");
	scanf("%d",&t);
	if(t<0)
	printf("Freezing weather");
	else if(t>=0 && t<10)
	printf("Very Cold weather");
	else if(t>=10 && t<20)
	printf("Cold weather");
	else if(t>=20 && t<30)
	printf(" Normal in Temp ");
	else if(t>=30 && t<40)
	printf(" Its Hot ");
	else
	printf("Its Very Hot");
}
