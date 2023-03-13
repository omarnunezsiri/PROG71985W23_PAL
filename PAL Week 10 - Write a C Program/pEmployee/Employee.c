#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // exit() functionality
#include <string.h>
#include "Employee.h"

/* Placeholder Employee.c file. Write your code here! */

// Credits - Dr. Hendrikse
void removeTrailingNewLine(char* buffer)
{
	for (int i = 0; i < strlen(buffer); i++)
		if (buffer[i] == '\n')
			buffer[i] = '\0';
}

void ReadEmployee(EMPLOYEE* e, char* filename)
{
	char id[MAXSTR];
	char firstName[MAXSTR];
	char lastName[MAXSTR];
	int eAccess;
	double wage;

	FILE* fp = fopen(filename, "r");

	if (fp)
	{
		// Read employee data

		// Reads the id
		fgets(id, MAXSTR, fp);
		removeTrailingNewLine(id);

		// Reads the first name
        fgets(firstName, MAXSTR, fp);
        removeTrailingNewLine(firstName);

		// Reads the last name
		fgets(lastName, MAXSTR, fp);
		removeTrailingNewLine(lastName);

		// Reads the eAccess
		fscanf(fp, "%d\n", &eAccess);

		// Reads the wage
        fscanf(fp, "%lf\n", &wage);


		// Edit employee through pointer. We will refactor this code during the next session!
		strcpy(e->id, id);
		strcpy(e->firstName, firstName);
		strcpy(e->lastName, lastName);
		e->eAccess = eAccess;
		e->wage = wage;

		fclose(fp);
	}
	else
	{
		fprintf(stderr, "Unable to open %s.\n", filename);
		exit(EXIT_FAILURE);
	}
}