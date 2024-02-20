#include<stdio.h>

void menu(){
	printf("\n1-Fibonacci sequence\n");
	printf("2-Check a date\n");
	printf("3-Quit\n");
	printf("Choose: \n");
}

int getUserChoice(){
	int choice;
	scanf("%d%*c", &choice);
	return choice;
}

double fibo (int n){
	int t1=1, t2=1, f=1, i;
	for(i=3;i<=n;i++){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}

int validDate(int d, int m, int y){
	
	if (d<1 || d>31 || m<1 || m>12)
		return 0;
	int maxd = 31; /*1,3,5,7,8,10,12*/
	if (m==4 || m==6 || m==9 || m==11)
		maxd = 30;
	else if(m==2){
		/*leap year*/
		if(y%400==0 || (y%4==0 && y%100!=0))
			maxd = 29;
		else 
			maxd = 28;
	}
	return d <= maxd;
}

int main(){
	int Userchoice;
	int n;
	int d, m, y;
	do{
		menu();
		Userchoice = getUserChoice();
	switch(Userchoice){
		case 1:
			do{
				printf("Input number: ");
				scanf("%d", &n);
			}while(n<0);
			printf("Fibonacci: %.0lf\n", fibo(n));
			break;
		case 2:
			do{
				printf("Input day: ");
				scanf("%d%d%d", &d, &m, &y);
			}while(n<0);
			if(validDate(d, m, y))
				printf("\nValid date\n");
			else
				printf("\nInvalid date\n");
			break;
		default:
			printf("Bye ~.~");
		}
	}while(Userchoice > 0 && Userchoice < 3);
}
