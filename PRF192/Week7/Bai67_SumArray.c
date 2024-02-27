#include<stdio.h>

void Input(int a[], int n);
void Output(int a[], int n);
int sum(int a[], int n);

int main() {
	int n;
	int a[50];
	printf("Input number of array: ");
	scanf("%d", &n); //Nhap so luong phan tu cua mang a[]
	Input(a, n);
	Output(a, n);
	printf("\n");
	printf("Sum = %d", sum(a, n));
}

void Input(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Iput a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void Output(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
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

