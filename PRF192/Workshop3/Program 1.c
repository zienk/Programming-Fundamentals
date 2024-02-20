#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n<2)
		return 0;
	int i;	
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main(){
	int n;
	do {
		
		scanf("%d", &n);
	}while(n<2);
	int i;
	for(i=2;i<=n;i++)
		if(checkPrime(i)==1)
			printf("%d\n", i);
	}

