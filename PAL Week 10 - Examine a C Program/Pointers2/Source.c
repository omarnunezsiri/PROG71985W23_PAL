// PAL Week 10 - Examine a C Program - Reviewing pointers using structures
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-12		initial

#include <stdio.h>
#include <stdbool.h>

typedef struct Grade
{
	float floatingGrade;
	char letter;
	bool pass;
}GRADE;

void displayGrade(GRADE g)
{
	printf("val: %.1f -- letter: %c -- pass? %d\n", g.floatingGrade, g.letter, g.pass);
}

int main(void)
{
	GRADE newGrade = { .floatingGrade = 91.33, .letter = 'S', .pass = true};

	displayGrade(newGrade);

	GRADE* pGrade = &newGrade; // structures are datatypes, we can have pointers to structures!
	pGrade->floatingGrade = 70.5;
	pGrade->letter = 'C';

	displayGrade(newGrade); // notice how we are changing pGrade but displaying newGrade?
	return 0;
}