#include<stdio.h>
//ipart phan so nguyen 
//fraction phan phan so
double makeDouble(int ipart, int fraction){
	double d_f = fraction;
	while(d_f >= 1)
		d_f = d_f / 10.0;
	if(ipart < 0)
		return ipart - d_f;
	return ipart + d_f;
}

int main(){
	int ipart, fraction;
	double realnumber;
	scanf("%d", &ipart);
	do{
		scanf("%d", &fraction);
	}while(fraction < 0);
	realnumber = makeDouble(ipart, fraction);
	printf("%lf", realnumber);
}
