#include<stdio.h>
int main(){
	double num1, num2, result;
	char op;
	scanf("%lf%c%lf", &num1, &op, &num2);
	switch(op){
		case '+':
			result= num1 + num2;
			printf("%.0lf",result);
			break;
		case '-':
			result= num1 - num2;
			printf("%.0lf",result);
			break;
		case '*':
			result= num1 * num2;
			printf("%.0lf",result);
			break;
		case '/':
			if(num2==0)
				printf("Divide by 0"); 
			else{
				result= num1 / num2;
				printf("%.0lf",result);
			}			
	}
}

