#include <stdio.h>
#include <string.h>

void reverse(char c[]);

int main() {
	char c[1000];
	gets(c);
	reverse(c);
	
}

void reverse(char c[]) {
	int i;
	for (i = strlen(c) - 1; i >= 0; i--) {
		printf("%c", c[i]);
	}
}
