#include<stdio.h>

int main() {
	char c1[100];
    char c2[100];
    gets(c1);
    gets(c2);
    printf("Name: ");
    puts(c1);
    printf("Address: ");
    puts(c2);
	return 0;
}

