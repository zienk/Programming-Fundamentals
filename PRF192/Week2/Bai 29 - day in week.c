#include<stdio.h>
int main()
{
	int d;
	printf("Input day in week (2-8): ");
	scanf("%d",&d);
	switch(d){
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		case 8:
			printf("Sunday");
			break;
		default:
			printf("Error");
	}
}
