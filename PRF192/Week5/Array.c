#include <stdio.h>
void inputArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Input a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void printArray(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("a[%d]: %d\n", i, a[i]);
		
	}
}
int main(){
	int n, a[n];
	printf("Input n: ");
	scanf("%d", &n);
	
	inputArray(a, n);
	printArray(a, n);
}
