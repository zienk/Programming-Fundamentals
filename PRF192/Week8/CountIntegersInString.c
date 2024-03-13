//counting integers in string
#include <stdio.h> 
#include <string.h>

//Input : 123anah 223asdas2ds4
//       : 
//Output : 4



int main() {
	char s[100];
	gets(s);
	int count = 0;
	int i;
	for (i = 0; i < strlen(s); i++) {
		if(isdigit(s[i])){
			count ++;
		}
	}
	printf("%d", count);
}
