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
void ReadEmployee(EMPLOYEE*, char*);