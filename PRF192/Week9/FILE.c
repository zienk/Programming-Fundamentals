#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0

int exist (char* zienk) 
{
	int existed = FALSE;
	FILE* f = fopen(zienk, "r");
	if (f != NULL)
	{
		existed = TRUE;
		fclose(f);
	}
	return existed;
}

int writeFile (char* zienk)
{
	char c;
	int CTRL_Z = -1;
	if(exist(zienk) == TRUE)
	{
		if(toupper(getchar()) == 'N') return FALSE;
	}
	FILE* f = fopen(zienk, "w");
	fflush(stdin);
	do
	{
		c = getchar();
		if(c != CTRL_Z) fputc(c, f);
	}
	while(c != CTRL_Z);
	fclose(f);
	return TRUE;
}

int printFile(char* zienk)
{
	char c;
	if(exist(zienk) == FALSE)
	{
		printf("The file %s does not exist.\n", zienk);
		return FALSE;
	}
	FILE* f = fopen(zienk, "r");
	while ((c = fgetc(f)) != EOF) putchar(c);
	fclose(f);
	return TRUE;
}

int main(int argCount, char* args[])
{
	if(argCount != 2) printf("Syntax: copy_con zienk\n");
	else if(writeFile(args[1]) == TRUE)
		printf("Writing the file %s: done\n", args[1]);
	else printf("Can not write the file %s\n", args[1]);
	return 0;
}

