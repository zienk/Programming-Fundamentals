#include<stdio.h>

void inputMatrix(int matrix[50][50], int rows, int cols);
void outputMatrix(int matrix[50][50], int rows, int cols);

int main() {
	int matrix[50][50];
	int rows, cols; // khai bao bien hang va cot
	printf("Iput rows and cols: ");
	scanf("%d %d", &rows, &cols);
	inputMatrix(matrix, rows, cols);
	outputMatrix(matrix, rows, cols);
}

void inputMatrix(int matrix[50][50], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			printf("Input rows %d and cols %d: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void outputMatrix(int matrix[50][50], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("[%d]", matrix[i][j]);
		}
		printf("\n");
	}
	}

