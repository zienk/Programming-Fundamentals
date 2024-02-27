
#include<stdio.h>

void Input(int a[], int n);
void Output(int a[], int n);
void countEven(int a[], int n);
void countOdd(int a[], int n);

int main(){
	int n;
	int a[50];
	printf("Iput number of array: ");
	scanf("%d", &n);
	Input(a, n);
	Output(a, n);
	printf("\n");
	countEven(a, n);
	printf("\n");
	countOdd(a, n);

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

void countEven(int a[], int n){
	int i;
	int count = 0;
	for(i = 0; i < n; i++){
		if(a[i]%2==0){
			count++;
		}
	}
	printf("Even: %d", count);
}

void countOdd(int a[], int n){
	int i;
	int count = 0;
	for(i = 0; i < n; i++){
		if(a[i]%2!=0){
			count++;		
		}
	}
	printf("Odd: %d", count);
}
