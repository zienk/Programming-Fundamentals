#include<stdio.h>

void inputMatrix(int a[50][50], int rows, int cols);
void outputMatrix(int a[50][50], int rows, int cols);
void outMax(int a[50][50], int rows, int cols);

int main() {
	int a[50][50];
	int rows, cols;
	printf("Iput rows and cols: ");
	scanf("%d%d", &rows, &cols);
	inputMatrix(a, rows, cols);
	outputMatrix(a, rows, cols);
	outMax(a, rows, cols);
	getchar();
}

void inputMatrix(int a[50][50], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("Input rows: %d and cols: %d ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void outputMatrix(int a[50][50], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void outMax(int a[50][50], int rows, int cols) {
	int i, j;
	int max = a[0][0];
	int min = a[0][0];
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++){
			if (a[i][j] > max){
				max = a[i][j];
			}
			if (a[i][j] < min){
				min = a[i][j];
			}
		}
	}
	printf("\nMax:%d\nMin:%d", max, min);
}
