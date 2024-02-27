#include<stdio.h>

void Input(int a[], int n);
void Output(int a[], int n);
int findndPrime(int a[], int n);
int isPrime(int n);

int main() {
	int n;
	int a[50];
	printf("Input number of array: ");
	scanf("%d", &n); //Nhap so luong phan tu cua mang a[]
	Input(a, n);
	Output(a, n);	
	printf("\n");
	int ndPrime = findndPrime(a, n);
	printf("%d", ndPrime);
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

int findndPrime(int a[], int n) {
	int i;
	int count = 0;
	
	for(i = 0; i < n; i++) {
		if(isPrime(a[i]) == 1)
			count++;
		if(count == 2)
			return i;
	}
	return -1;
}


