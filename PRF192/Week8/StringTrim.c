#include <stdio.h>
#include <string.h>

char* lTrim(char s[]);
char* rTrim(char s[]);
char* trim(char s[]);

int main() {
	char s[20];
	gets(s);
	lTrim(s);
	puts(s);
	rTrim(s);
	printf("%s", s);
	trim(s);
	puts(s);
	printf("Check");
}

//Xoa khoang trang ben trái chuõi
char* lTrim(char s[]) {
	int i = 0;
	while (s[i] == ' ')
		i++;
	if (i > 0)
		strcpy(&s[0], &s[i]);
	return s;	
}

//Xoa khoang trang ben phai chuoi
char* rTrim(char s[]) {
	int i = strlen(s) - 1;
	while (s[i] == ' ')
		i--;
	s[i + 1] = '\0'; //ki tu null
	return s;
}

//Xoa khoang trang thua`
char* trim(char s[]) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, " ");
	while (ptr != NULL) {      // Khi 2 khoang trang xuat hien
		strcpy( ptr, ptr + 1); // Thi xoa 1 khoang trang
		ptr = strstr(s, " ");
	}
	return s;
}
