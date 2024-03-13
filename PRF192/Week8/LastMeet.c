#include <stdio.h>
#include <string.h>

int lastmeet(char c[], char a);

int main() {
	char a;
	scanf("%c", &a);
	getchar();
	char c[1000];
	gets(c);
	int index = lastmeet(c, a);
	printf("%d", index);
	
}

int lastmeet(char c[], char a) {
	int i;
	int last_index;
	for (i = 0; i < strlen(c); i++) {
		if(c[i] == a){
			last_index = i;
		}
	}
	return last_index;
}
