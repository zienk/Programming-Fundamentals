#include<stdio.h>
int main(){
	int x,y;
	do{
		scanf("%d %d", &x, &y);
		int t;
		t=x;
		x=y;
		y=t;
		printf("%d %d", x, y);
	}
	while(x!=0 && y!=0);	
}
