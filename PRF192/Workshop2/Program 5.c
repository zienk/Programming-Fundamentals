#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	int vowels=0;
	int consonant=0; 
	int other=0;
	while((ch = getchar()) != '\n'){
		
		ch = toupper(ch);
		if(ch >= 'A' && ch <='Z'){
			switch(ch){
				case 'U':
				case 'E':
				case 'O':
				case 'A':
				case 'I':
					vowels++;
					break;
				default:
					consonant++;
			}
		}
		else if(ch =! '\n')
			other++;	
		}
	printf("Vowels: %d\n", vowels);
	printf("Consonant: %d\n", consonant);
	printf("Other: %d", other);
}

