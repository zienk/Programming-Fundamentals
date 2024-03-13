#include <stdio.h>
void func1(int (*a)[10])
{
	printf("Good");
}
void func2(int a[][10])
{
	printf("What");
}
int main()
{
	int a[10][10];
	func1(a);
	func2(a);
}
