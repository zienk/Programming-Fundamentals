#include <stdio.h>
int checkPerfect(int n){
	int sum = 0;
	int i;
	for(i = 1; i < n; i++){
		if(n % i == 0)
			sum += i;
	}
	if(sum==n)
		return 1;
	else
		return 0;
}

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	int i;
	for(i = 1; i < n; i++){
		if(checkPerfect(i) == 1)
			printf("%d ", i);
	}
	return 0;
	
}
