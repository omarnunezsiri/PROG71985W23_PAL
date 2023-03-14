// PAL Week 10 - Write a C Program - Employee ADT header file
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial
// 1.1			2023-03-14		refactored 

#pragma once

#define ENTRY 0
#define INTER 1
#define ADVANCED 2
#define MAXSTR 30

typedef struct Employee
{
	char id[MAXSTR];
	char firstName[MAXSTR];
	char lastName[MAXSTR];
	int eAccess;
	double wage;
}EMPLOYEE;

/* Placeholder header file. Write your code here! */
void loadEmployeeFromFile(EMPLOYEE*, char*);

/* Prep function definitions for tuesday's session */
void setEmployeeId(EMPLOYEE*, char*);
void setEmployeeFirstName(EMPLOYEE*, char*);
void setEmployeeLastName(EMPLOYEE*, char*);
void setEmployeeEAccess(EMPLOYEE*, int);
void setEmployeeWage(EMPLOYEE*, double);

char* getEmployeeId(EMPLOYEE);
char* getEmployeeFirstName(EMPLOYEE);
char* getEmployeeLastName(EMPLOYEE);
int getEmployeeEAccess(EMPLOYEE);
double getEmployeeWage(EMPLOYEE);

void saveEmployeeToFile(EMPLOYEE, char*);
void displayEmployee(EMPLOYEE);