#include<stdio.h>

void Input(int a[], int n);
int findx(int a[], int n, int x);

int main() {
	int n;
	int a[50];
	printf("Input number of array: ");
	scanf("%d", &n);
	Input(a, n);
	printf("Input x: ");
	int x;
	scanf("%d", &x);
	int kq = findx(a, n, x);
	printf("%d", kq);
}

void Input(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("Iput a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int findx(int a[], int n, int x) {
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] == x) {
			return i;
		}
	}
	return -1;
}

