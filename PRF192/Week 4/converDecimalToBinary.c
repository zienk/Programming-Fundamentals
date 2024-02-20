#include<stdio.h>
void convert(int dn){
	int bn[32];
	int i = 0;
	while(dn > 0){
		bn[i] = dn % 2;
		dn = dn / 2;
		i++;
	}
	
	printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bn[j]);
    }
    printf("\n");
}

int main(){
	int dn;
	scanf("%d", &dn);
	
	convert(dn);
	
	return 0;
}
