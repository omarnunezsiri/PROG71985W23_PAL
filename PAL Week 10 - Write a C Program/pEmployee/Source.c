// PAL Week 10 - Write a C Program - Read Employee data using a pointer inside a function
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial
// 1.1			2023-03-14		refactored 
#define FILENAME "EmployeeDB.txt"

#include <stdio.h>
#include "Employee.h"

int main(void)
{
	printf("PAL Week 10 - Employee Program\n\n");

	/* Placeholder main function. Write your code here! */
	EMPLOYEE e;
	loadEmployeeFromFile(&e, FILENAME);

	displayEmployee(e);

	// Save the employee back to the data file
	saveEmployeeToFile(e, FILENAME);
	return 0;
}