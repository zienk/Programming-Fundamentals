#include<stdio.h>

void Input(int a[], int n);
void Output(int a[], int n);
int sumPrime(int a[], int n);
float averagePrime(int a[], int n);

int main() {
	int n;
	int a[50];
	printf("Input number of array: ");
	scanf("%d", &n); //Nhap so luong phan tu cua mang a[]
	Input(a, n);
	Output(a, n);
	printf("\n");
	printf("Sum = %d", sumPrime(a, n));
	printf("\n");
	printf("Average = %.2f", averagePrime(a, n));
}

void Input(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("Iput a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void Output(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int sum(int a[], int n) {
	int i;
	int sum = 0;
	for(i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int checkPrime(int n) {
	int i;
	if(n<=1)
		return 0;
	for(i=2; i<n; i++) {
		if(n%i==0)
			return 0;
	}
	return 1;
}

int sumPrime(int a[], int n) {
	int i;
	int sum = 0;
	for(i = 0; i < n; i++) {
		if(checkPrime(a[i]) == 1) {
			sum += a[i];
		}
	}
	return sum;
}

float averagePrime(int a[], int n) {
	int i;
	float count = 0;
	float avg = 0;
	for(i = 0; i < n; i++) {
		if(checkPrime(a[i]) == 1) {
			count ++;
		}
	}
	if(count == 0)
		return 0;
	avg = sumPrime(a, n) / count;
	return avg;
}
