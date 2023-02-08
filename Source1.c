#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# define MAX 30

int main()
{
	
	char fl1[20], fl2[20], fl3[20];


	printf("enter file1.txt name:");
	scanf("%s",fl1);



	printf("enter file2.txt name:");
	scanf("%s",fl2);


	printf("enter file3.txt name:");
	scanf("%s",fl3);



	FILE* cptr1 = NULL;
	cptr1 = fopen("fl1", "w");
	if (cptr1 == NULL)
	{
		printf("File could not be opend\n");
		return 1;
	}
	else
	{

		fprintf(cptr1, "Welcome to FCIT\nWelcome to Programming\n");

	}
	fclose(cptr1);

	FILE* cptr2 = NULL;
	cptr2 = fopen("fl2", "w");
	if (cptr2 == NULL)
	{
		printf("File could not be opend\n");
		return 1;
	}
	else
	{

		fprintf(cptr2, "My Name is saeen\n");

	}
	

	fclose(cptr2);
	FILE* cptr4 = NULL;
	FILE* cptr5 = NULL;
	FILE* cptr3 = NULL;
	char buff[30];
	char buffer[30];
	cptr4 = fopen("fl1", "r");
	if (cptr4 == NULL)
	{
		printf("File could not be opend\n");
		return 1;
	}
	cptr5 = fopen("fl2", "r");
	if (cptr5 == NULL)
	{
		printf("File could not be opend\n");
		return 1;
	}


	cptr3 = fopen("fl3", "w");
	char ch = fgetc(cptr4);
	char ch1 = fgetc(cptr4);

	if (cptr3 == NULL)
	{
		printf("File could not be opend\n");
		return 1;
	}
	else
	{

		while ((fgets(buff, MAX, cptr4) != 0))
		{
			fputs(buff, cptr3);

		}
		while ((fgets(buffer, MAX, cptr5) != 0))
		{
			fputs(buffer, cptr3);
		}


	}
	fclose(cptr4);
	fclose(cptr5);
	fclose(cptr3);
}