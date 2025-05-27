#include<stdio.h>
int main()
{
	char ho[10], ten[10];
	int namsinh;

	printf("Input your firstname:");
	scanf("%s", ho);
	
	printf("Input your lastname:");
	scanf("%s", ten);
	
	printf("Input your year of birth:");
	scanf("%d", &namsinh);
	
	printf("%s %s %d", ho, ten, namsinh);

	return 0;
	
}
