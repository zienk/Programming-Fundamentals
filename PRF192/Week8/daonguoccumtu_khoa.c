#include<string.h>
#include<stdio.h>
void reverse_words (char *a){
    int l = strlen (a), i, s, e;
    //Dao nguoc toan bo chuoi
    for (i =0; i < l/2; i++){
        char temp = a[i];
        a[i] = a[l - i - 1];
        a[l - i - 1]= temp; 
    }
    //Dao nguoc tung chu trong chuoi
    i = 0;
    while (i < l){
        while (i < l && a[i] == ' '){// Bo qua khoang cach trang dau tu
        i++;
    }
    s = e = i;
    // Tim den ki tu cuoi cung cua tu
    while (i < l && a[i]!= ' ') {
        e++;
        i++;
    }
    //dao nguoc tu
    int j;
    for ( j = s; j < (s + e)/2; j++){
        char temp = a[j];
        a[j] = a[s+ e - j - 1];
        a[s+e-j-1] = temp;
    }
}
}
int main (){

    char a[100];
    printf ("Enter the string: ");
    fgets(a, sizeof (a), stdin);
     if (a[strlen(a) - 1] == '\n')
        a[strlen(a) - 1] = '\0';
    reverse_words (a);
    printf ("Reverse order of words in a  string: %s", a);
    return 0;
}
