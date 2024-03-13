#include <stdio.h>
#include <string.h>
//
int main() {
	char c[1000];
	gets(c);
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	strlwr(c);
	int vowel = 0;
	int consonant = 0;
	int i;
	for (i = 0; i < strlen(c); i++) {
		if(c[i] == 'u' && c[i] == 'e' && c[i] == 'o' && c[i] == 'a' && c[i] == 'i') {
			vowel++;
		}
		else if(c[i] != ' ' && c[i] != a){
			consonant++;
		}
	}
	printf("Vowel:%d\nConsonat:%d", vowel, consonant);
}
