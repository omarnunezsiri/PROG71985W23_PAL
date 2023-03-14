// PAL Week 10 - Write a C Program - Employee ADT implementation
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial
// 1.1			2023-03-14		refactored 

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

void loadEmployeeFromFile(EMPLOYEE* e, char* filename)
{
	FILE* fp = fopen(filename, "r");

	if (!fp) // if something went wrong
	{
		fprintf(stderr, "Unable to open %s.\n", filename);
		exit(EXIT_FAILURE);
	}

	// Read employee data
	char id[MAXSTR];
	char firstName[MAXSTR];
	char lastName[MAXSTR];
	int eAccess;
	double wage;

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
	fscanf_s(fp, "%d\n", &eAccess);

	// Reads the wage
    fscanf_s(fp, "%lf\n", &wage);


	// Edit employee through pointer. We will refactor this code during the next session!
	strcpy(e->id, id);
	strcpy(e->firstName, firstName);
	strcpy(e->lastName, lastName);
	e->eAccess = eAccess;
	e->wage = wage;

	fclose(fp); // don't forget to close your files!
}