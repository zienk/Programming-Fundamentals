#include<stdio.h>

void printMinMaxDigits(int n){
	int min, max, digit;
	digit = n % 10;
	n = n / 10;
	min = max = digit;
	while(n>0){
		digit = n % 10;
		n = n / 10;
	if(min > digit)
		min = digit;
	if(max < digit)
		max = digit;
	}
	printf("Min = %d /n Max = %d", min, max);
}

int main(){
	int n;
	do{
		scanf("%d", &n);
		printMinMaxDigits(n);
	}while(n<0);
}
