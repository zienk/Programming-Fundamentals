#include<stdio.h>

int gcd(int a, int b){
	while(a!=b){
		if (a>b)
			a = a - b;
		else 
			b = b - a;
	}
	return a;
}

int lcm(int a, int b){
	return a*b/gcd(a,b);
}

int main(){
	int a,b;
	do{
		scanf("%d%d", &a, &b);
	}while (a <= 0 || b <= 0);
	int d = gcd(a, b);
	int m = lcm(a, b);
	printf("%d\n", d);
	printf("%d\n", m);
}
