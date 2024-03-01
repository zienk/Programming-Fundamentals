#include<stdio.h>
#include<string.h>

int main() {
    char c1[100];
    char c2[100];
    gets(c1);
    gets(c2);
    if(strcmp(c1, c2) == 0) 
        printf("two people having the same name");
    else
        printf("two people don't have the same name");
    return 0;
}

