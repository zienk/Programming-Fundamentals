#include<stdio.h>
#include<math.h>
int main()
{
	float d,a,b,c,x1,x2;
	scanf("%f%f%f",&a, &b, &c);
	d=b*b - (4*a*c);
	if(d<0)
		printf("Pt 0 n0");
	else if(d=0)
		printf("x1=x2=%f",-b/2*a);
	else
		printf("x1= %f x2 = %f", (-b+ sqrt(d))/(2*a), (-b- sqrt(d))/(2*a) );
}
