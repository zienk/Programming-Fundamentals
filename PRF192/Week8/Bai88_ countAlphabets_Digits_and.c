#include <stdio.h>
#include <string.h>

int main() {
	char c[1000];
	gets(c);
	int word = 0;
	int digit = 0;
	int i;
	for(i = 0; i < strlen(c); i++){
		if(isalpha(c[i])){
			word++;
		}
		else if(isdigit(c[i])){
			digit++;
		}
	}
	printf("Word:%d\nDigit:%d\nSpecial character:%d", word, digit, strlen(c) - word - digit);
}
