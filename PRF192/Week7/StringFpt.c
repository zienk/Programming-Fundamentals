#include<stdio.h>
#include<conio.h>


int main() {
	char s1[15] = "ABC";
	char s2[15]	= {'a', 'b', 'c', '\0',};
	int i;
	printf("Data luu tru cho s1: \n");
	for (i = 0; i < 15; i++) {
		printf("%d ", s1[i]);
	}
	printf("\n");
	printf("Data luu tru cho s2: \n");
	for (i = 0; i < 15; i++) {
		printf("%d ", s2[i]);
	}
	getch();
}
