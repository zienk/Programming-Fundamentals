/* 
1. Nhap xuat mang 1 chieu array cac so nguyen
*/
#include<stdio.h>
void Input(int a[], int n);
void Output(int a[], int n);
void OutEven(int a[], int n);
void OutOdd(int a[], int n);
void OutPrime(int a[], int n);
void OutPerfect(int a[], int n);

//Ham main
int main(){
	int a[50];
	int n;
	printf("Iput n: ");
	scanf("%d", &n);
	Input(a, n);
	Output(a, n);
	printf("\n");
	OutEven(a, n);
	printf("\n");
	OutOdd(a, n);
	printf("\n");
	OutPrime(a, n);
	printf("\n");
	OutPerfect(a, n);
	return 0;
}
//Ham nhap mang
void Input(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Iput a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

//Ham xuat mang
void Output(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

//Ham xuat chan
void OutEven(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(a[i]%2==0)
			printf("%d ", a[i]);
	}
}

//Ham xuat le
void OutOdd(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(a[i]%2!=0)
			printf("%d ", a[i]);
	}
}

//Ham checkPrime
int checkPrime(int n){
	int i;
	if(n<=1)
		return 0;
	for(i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

//Ham out prime
void OutPrime(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(checkPrime(a[i])==1)
			printf("%d ", a[i]);
	}
}



//Ham outPerfect
void OutPerfect(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(checkPerfect(a[i])==1)
			printf("%d ", a[i]);
	}
}

//Ham checkPerfect
int checkPerfect(int n){
	int sum = 0;
	int i;
	for(i = 1; i < n; i++){
		if(n % i == 0)
			sum += i;
	}
	if(sum==n)
		return 1;
	else
		return 0;
}
