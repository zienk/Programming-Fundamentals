#include<stdio.h>
int main()
{
	float c,f;
	printf("Input temperature:");
	scanf("%f",&c);
	f= c * ((float)9/5) + 32; 
	printf("Degrees Fahrenheit:%f",f);
	return 0;
}
