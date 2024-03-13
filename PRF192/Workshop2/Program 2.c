#include<stdio.h>
int taxlevel(int ti) {
	int it;
	if(ti<=5000000)
		it = ti * (5.0 / 100);
	else if(ti<=10000000)
		it = 5000000 * (5.0 / 100) + (ti-5000000) * (10.0/100);
	else if(ti<=18000000)
		it = (5000000 * (5.0 / 100)) + (10000000-5000000)*(10.0/100) + (ti-10000000)* (15.0/100);
	else
		it = (5000000 * (5.0 / 100)) + (10000000-5000000)*(10.0/100) + (18000000-10000000)*(15.0/100)+(ti-18000000)*(20.0/100);
	return it;
}
int main() {
	int income, dependent;
	scanf("%d %d", &income, &dependent);
	printf("Your income of this year: %d\n", income);
	printf("Number of dependent: %d\n", dependent);
	int pa=9000000;
	int pd=3600000;
	int tf;
	tf=12*(pa + dependent*pd);
	printf("Tax-free income: %d\n", tf);
	int ti;
	ti = income - tf;
	if(ti<=0) {
		printf("Taxable income: 0\n");
		printf("Income tax: 0");
	} else {
		printf("Taxable income: %d\n", ti);
		ti = taxlevel(ti);
		printf("Income tax: %d", ti);
	}
}
