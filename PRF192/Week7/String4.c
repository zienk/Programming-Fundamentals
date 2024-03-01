#include<stdio.h>
#include<string.h>

int main() {
    char c[100];
    gets(c);
    printf("%d", strlen(c));
	return 0;
}

