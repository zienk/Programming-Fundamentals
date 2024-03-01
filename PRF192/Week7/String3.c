#include<stdio.h>

int main(){
    char a[100];
    int k;
    gets(a);
    scanf("%d", &k);
    printf("%c", a[k - 1]);
    return 0;
}
