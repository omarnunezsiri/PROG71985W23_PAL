// PAL Week 10 - Write a C Program - Employee ADT implementation
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial
// 1.1			2023-03-14		refactored 

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h> // exit() functionality
#include <string.h>
#include "Employee.h"

/* Placeholder Employee.c file. Write your code here! */

void setEmployeeId(EMPLOYEE* pEmployee, char* id)
{
	strcpy(pEmployee->id, id);
}

void setEmployeeFirstName(EMPLOYEE* pEmployee, char* firstName)
{
	strcpy(pEmployee->firstName, firstName);
}

void setEmployeeLastName(EMPLOYEE* pEmployee, char* lastName)
{
	strcpy(pEmployee->lastName, lastName);
}

void setEmployeeEAccess(EMPLOYEE* pEmployee, int eAccess)
{
	pEmployee->eAccess = eAccess;
}

void setEmployeeWage(EMPLOYEE* pEmployee, double wage)
{
	pEmployee->wage = wage;
}

char* getEmployeeId(EMPLOYEE employee)
{
	return employee.id;
}

char* getEmployeeFirstName(EMPLOYEE employee)
{
	return employee.firstName;
}

char* getEmployeeLastName(EMPLOYEE employee)
{
	return employee.lastName;
}

int getEmployeeEAccess(EMPLOYEE employee)
{
	return employee.eAccess;
}

double getEmployeeWage(EMPLOYEE employee)
{
	return employee.wage;
}

void displayEmployee(EMPLOYEE employee)
{
	printf("Displaying Employee: \n");
	printf("ID: %s\n", employee.id);
	printf("First Name: %s\n", employee.firstName);
	printf("Last Name: %s\n", employee.lastName);
	printf("eAccess: %d\n", employee.eAccess);
	printf("Wage: %lf\n", employee.wage);
}

// Credits - Dr. Hendrikse
void removeTrailingNewLine(char* buffer)
{
	for (int i = 0; i < strlen(buffer); i++)
		if (buffer[i] == '\n')
			buffer[i] = '\0';
}

void saveEmployeeToFile(EMPLOYEE employee, char* filename)
{
	FILE* fp = fopen(filename, "w");

	if (!fp) // if something went wrong
	{
		fprintf(stderr, "Unable to open %s.\n", filename);
		exit(EXIT_FAILURE);
	}

	// Write the id 
	fprintf(fp, "%s\n", employee.id);

	// Write the first name
	fprintf(fp, "%s\n", employee.firstName);

	// Write the last name
	fprintf(fp, "%s\n", employee.lastName);

	// Write the eAccess
	fprintf(fp, "%d\n", employee.eAccess);

	// Write the wage
	fprintf(fp, "%lf\n", employee.wage);

	// Close file
	fclose(fp);
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

	// Edit employee through pointer. Refactored to use setters.
	setEmployeeId(e, id);
	setEmployeeFirstName(e, firstName);
	setEmployeeLastName(e, lastName);
	setEmployeeEAccess(e, eAccess);
	setEmployeeWage(e, wage);

	fclose(fp); // don't forget to close your files!
}