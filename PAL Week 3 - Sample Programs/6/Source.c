// PAL Week 3 - Program 6:
//					special characters and their use
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-01-21		initial

#include <stdio.h>

void main(void)
{
	float wage;

	printf("\aStarting database connection...");
	printf("\t\tConnection Established!\n");
	printf("Enter wage: $_____\b\b\b\b\b");
	scanf_s("%f", &wage);
	printf("\t\t\t\tThank you!");
	printf("\rWage: %f", wage);
}