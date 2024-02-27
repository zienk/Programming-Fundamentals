#include<stdio.h>

void Input(int a[], int n);
void Output(int a[], int n);
void OutReverse(int a[], int n);

int main() {
	int n;
	int a[50];
	printf("Input number of array: ");
	scanf("%d", &n); //Nhap so luong phan tu cua mang a[]
	Input(a, n);
	Output(a, n);
	printf("\n");
	OutReverse(a, n);
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

void OutReverse(int a[], int n) {
	int i;
	for(i = n - 1; i >= 0; i-- ){
		printf("%d ", a[i]);
	}
}
