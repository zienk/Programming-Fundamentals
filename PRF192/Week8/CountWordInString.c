//counting word in string
#include <stdio.h> 
#include <string.h>

//Input : aaa aaa aaa 
//       : count ++
//Output : count = 9

int main() {
	char s[100];
	
	gets(s);
	int count = 0;
	int i;
	for (i = 0; i < strlen(s); i++) {
		if(s[i] != ' '){
			count ++;
		}
	}
	printf("%d", count);
}
