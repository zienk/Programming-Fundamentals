#include<stdio.h>
#include<string.h>

//Chuyen viet thuong thanh viet hoa

int main() {
	char c[100];
    gets(c);
    int i;
    int len = strlen(c);
    for (i = 0; i < len; i++){
        printf("%c", toupper(c[i]));
    }
    return 0;
}
//toupper : viet hoa
//tolower : viet thuong
