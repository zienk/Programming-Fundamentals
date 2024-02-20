#include <stdio.h>
int findDivisor(int n);
//int checkPerfect(int n);
int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(findDivisor(n) == 1)
		printf("%d is perfect numbers", n);
	else
		printf("%d is not perfect numbers", n);
	return 0;
	
}

int findDivisor(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0)
			sum += i;
	}
	if (sum == n)
		return 1;
	else
		return 0;
}
/*int checkPerfect(int n){
	if (findDivisor(n) == n)
		return 1;
	else
		return 0;
}

*/
