#include<stdio.h>
int main()
{
	int y;
	printf("Enter year: ");
	scanf("%d",&y);
	if(y%400==0)
	printf("%d is a leap year",y);
	else if(y%4==0 && y%100!=0)
	printf("%d is a leap year",y);
	else
	printf("%d is not a leap year",y);
}

