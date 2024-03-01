/*Cho xâu s và ký t? c du?c nh?p t? bàn phím, 
b?n hãy vi?t chuong trình in ra v? trí d?u tiên mà ký t? c xu?t hi?n trong xâu s, 
n?u ký t? c không xu?t hi?n trong s thì in ra -1.*/
#include<stdio.h>
#include<string.h>
//Input: codelearn o
//Output: 1

int main() {
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int len = strlen(s);
    int i;
    int index = -1;
    for (i=0; i < len; i++){
        if(c == s[i]){
            index = i;
            break;
        }  
    }
    printf("%d", index);
    return 0;
}

