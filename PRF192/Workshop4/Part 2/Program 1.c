#include<stdio.h>

void menu(){
	printf("1- Process primes\n");
	printf("2- Print min, max digit in an integer\n");
	printf("3- Quit\n");
	printf("Select an operation: \n");
}

int getUserChoice(){
	int choice;
	scanf("%d%*c", &choice);
	return choice;
}

void MinMaxDigits(int n){
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
	printf("Min = %d \n Max = %d \n", min, max);
}

int checkPrimes(int n){
	int i;
	if(n<=1)
		return 0;
	for(i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int Userchoice;
	int n;
	do{
		menu();
		Userchoice = getUserChoice();
		switch(Userchoice){
			case 1:
				do{
					printf("Input number: \n");
					scanf("%d", &n);
				}while(n<0);
				if(checkPrimes(n)==1)
					printf("It is a prime\n");
				else
					printf("It is not a prime\n");
				break;
			case 2:
				do{
					printf("Input number: \n");
					scanf("%d", &n);
				}while(n<0);
				MinMaxDigits(n);
				break;
			default:
				printf("Good Bye!\n");
		}
	}while(Userchoice > 0 && Userchoice < 3);
}
