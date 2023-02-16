// PAL Week 6 - Artist ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-13		initial

#include "Artist.h"
#include <stdio.h>

void displayArtist(ARTIST a)
{
	printf("firstName: %s\n", a.firstName);
	printf("lastName: %s\n", a.lastName);
	printf("contractSalary: %f\n", a.contractSalary);
	printf("age: %d\n", a.age);
}