#include<stdio.h>
#include<string.h>

int main() {
    char c[100];
    gets(c);
    int i;
    int len = strlen(c);
    for (i = 0; i < len; i++) {
        if(c[i] == '3'){
            c[i] = 'e';
        }
    }
    puts(c);
    return 0;
}

