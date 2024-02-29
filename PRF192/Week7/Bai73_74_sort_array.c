#include<stdio.h>

void IputArray(int a[], int n);
void sort_ascending(int a[], int n);
void Output(int a[], int n);

int main() {
	int n;
	int a[50];
	printf("Input number of array: ");
	scanf("%d", &n);
	IputArray(a, n);
	sort_ascending(a, n);
	Output(a, n);
}

void IputArray(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void sort_ascending(int a[], int n) {
	int i, j, min_index, temp;
	for (i = 0; i < n; i++) {
		min_index = i;
		for (j = i + 1; j < n; j++) {
			if(a[j] < a[min_index]) {
				min_index = j;
			}
		}
		if (min_index != i) {
		temp = a[i];
		a[i] = a[min_index];
		a[min_index] = temp;
	}
	
	}
}

void Output(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
