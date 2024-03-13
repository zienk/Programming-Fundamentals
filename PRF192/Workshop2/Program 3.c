#include<stdio.h>
int main(){
	int n;
	int s=0;
	while(n!=0){
		scanf("%d",&n);
		if (n!=0)
			s += n;
	}
	printf("%d",s);
}
