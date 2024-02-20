#include<stdio.h>

int sumDigits(int n){
	int sum = 0;
	do{
		int remainder = n % 10;
		n = n/10.0;
		sum += remainder;
	}while(n>0);
	return sum;
}

int main(){
	int n;
	int S = 0;
	do{
		scanf("%d", &n);
		if(n>=0){
			S = sumDigits(n);
			printf("%d", S);
		}
	}while(n>=0);
}
