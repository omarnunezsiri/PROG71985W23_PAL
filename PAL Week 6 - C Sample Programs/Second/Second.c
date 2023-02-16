// PAL Week 6 - Program 2:
//					implement librarian ADT
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-11		initial

#include <stdio.h>

#define MAXNAME 30
#define MAXCAMPUS 35

typedef struct librarian {
	int age;
	char campus[MAXCAMPUS];
	char name[MAXNAME];
}LIBRARIAN;

int main(void)
{
	LIBRARIAN librarian = { 20, "Guelph",  "PAL Leader" };
	LIBRARIAN anotherLibrarian = { .age = 29, .campus = "Cambridge", .name = "John Doe" };

	printf("First librarian: \n");
	printf("Age: %d - Campus: %s - Name: %s\n", librarian.age, librarian.campus, librarian.name);

	printf("Second librarian: \n");
	printf("Age: %d - Campus: %s - Name: %s\n", anotherLibrarian.age, anotherLibrarian.campus, anotherLibrarian.name);

	return 0;
}