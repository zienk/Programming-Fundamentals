#include<stdio.h>

void Input(int a[], int n);
void Output(int a[], int n);
int findLastPrime(int a[], int n);
int isPrime(int n);

int main() {
	int n;
	int a[50];
	
	printf("Input number of array: ");
	scanf("%d", &n); //Nhap so luong phan tu cua mang a[]
	Input(a, n);
	Output(a, n);	
	int lastPrime = findLastPrime(a, n);
	if(lastPrime != -1)
		printf("\nLast prime number: %d", lastPrime);
	else
		printf("\nNo prime. Last number: %d", a[n-1]);
}

void Input(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void Output(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int isPrime(int n) {
	if(n <= 1)
		return 0;
	int i;
	for(i = 2; i < n; i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int findLastPrime(int a[], int n) {
	int lastPrime = -1; //Tao 1 bien gia tri cuoi cung 
	int i;
	for(i = 0; i < n; i++) {
		if(isPrime(a[i]) == 1 ) //Check neu co so nguyen to trong mang
			lastPrime = a[i];   //Thi gan so nguyen to do vao lastPrime
	}
	return lastPrime;
}


