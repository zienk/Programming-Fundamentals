#include <stdio.h>

int getUserChoice(){
	int choice;
	
	printf("\n1-Operation 1");
	printf("\n2-Operation 2");
	printf("\n3-Others-Quit");
	
	printf("\nChosse:");
	
	scanf("%d%*c", &choice);
	return choice;
}

int sumBetween(int a, int b){
	int t, sum = 0;
	
	if(a > b){
		t = a;
		a = b;
		b = t;
	}
	int i;
	for(i = a; i <= b; i++){
		 sum += i;
	}
	return sum;
}

void function1(){
	int n1, n2;
	printf("Enter 2 integer:");
	scanf("%d%d%*c", &n1, &n2);
	printf("Sum=%d\n", sumBetween(n1, n2));
}
void printAscii(char c1, char c2){
	char c;
	if (c1>c2){
		c = c1;
		c1 = c2;
		c2 = c;
	}
	int i;
	for(i = c1; i <= c2; i++){
		printf("%c,%3d,%3oq,%3Xh\n", i, i, i, i);
	}
	
}

void function2(){
	char c1, c2;
	printf("Enter 2 character contiguously: ");
	scanf("%c%c", &c1, &c2);
	printAscii(c1, c2);
}

int main(){
	int userChoice;
	do{
		userChoice = getUserChoice();
		switch(userChoice){
			case 1:
				function1();
				break;
			case 2:
				function2();
				break;
			default:
				printf("Bye!\n");
		}
	}while(userChoice > 0 && userChoice < 3);
	fflush(stdin);
	getchar();
	return 0;
}
