#include <stdio.h>
#include <string.h>
char* lTrim(char s[]);
char* rTrim(char s[]);
char* trim(char s[]);
int main() {
	char s[20];
	gets(s);
	trim(s);
	puts(s);
	getchar();
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
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {      // Khi 2 khoang trang xuat hien
		strcpy( ptr, ptr + 1); // Thi xoa 1 khoang trang
		ptr = strstr(s, "  ");
	}
	return s;
}

// Viet hoa chu cái dau` va xoa khoang trang thua`
char* nameStr(char s[]) {
	trim(s); // Xoa khoang trang thua
	strlwr(s); // dua tat ca thanh viet thuong`
	int L = strlen(s); // do dai cua chuoi~
	int i;
	for (i = 0; i < L; i++) {
		if (i == 0 || (i > 0 && s[i-1] == ' '))
			s[i] = toupper(s[i]);
	}
	return s;
}
