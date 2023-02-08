#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	/////  Writing on the file
	FILE* cptr1 = NULL;
	cptr1 = fopen("task4.txt", "w");
	if (cptr1 == NULL)
	{
		printf("File could not be opend\n");
		return 1;
	}
	else
	{

		fprintf(cptr1, "Welcome to FCIT\nWelcome to Programming");

	}
	fclose(cptr1);
	

	FILE* cptr2 = NULL;
	cptr2= fopen("task4.txt", "r");
	if (cptr2 == NULL)
	{
		printf("File could not be opend\n");
		return 1;
	}
	else
	{

		fscanf(cptr2, "Welcome to FCIT\nWelcome to Programming");
		fseek(cptr2, -1, SEEK_SET);
		printf("%d\n", ftell(cptr1));

		fseek(cptr2, 1, SEEK_END);
		printf("%d", ftell(cptr1));

	}
	fclose(cptr2);
}