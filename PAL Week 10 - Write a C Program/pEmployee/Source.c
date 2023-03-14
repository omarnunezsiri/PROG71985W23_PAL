// PAL Week 10 - Write a C Program - Read Employee data using a pointer inside a function
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial

#include <stdio.h>
#include "Employee.h"

int main(void)
{
	printf("\nPAL Week 10 - Employee Program\n");

	/* Placeholder main function. Write your code here! */
	EMPLOYEE e;
	ReadEmployee(&e, "EmployeeDB.txt");
	return 0;
}