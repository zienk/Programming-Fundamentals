/*Cho x�u s v� k� t? c du?c nh?p t? b�n ph�m, 
b?n h�y vi?t chuong tr�nh in ra v? tr� d?u ti�n m� k� t? c xu?t hi?n trong x�u s, 
n?u k� t? c kh�ng xu?t hi?n trong s th� in ra -1.*/
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

