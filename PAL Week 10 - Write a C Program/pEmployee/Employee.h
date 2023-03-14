// PAL Week 10 - Write a C Program - Employee ADT header file
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial

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