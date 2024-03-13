#include <stdio.h>
#include <string.h>

void firstmeet(char c[], char a);

int main() {
	char a;
	scanf("%c", &a);
	getchar();
	char c[1000];
	gets(c);
	firstmeet(c, a);
	
}

void firstmeet(char c[], char a) {
	int i;
	for (i = 0; i < strlen(c); i++) {
		if(c[i] == a){
			printf("%d", i);
			break;
		}
	}
}
