// PAL Week 5 - GCD:
//					Determines the Greatest Common Divisor (GCD) of two numbers.
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-06		initial

#include <stdio.h>
#include "GCD.h"

int main(void)
{
	int first;
	int second;

	printf("Please enter the first number: ");
	scanf_s("%d", &first);

	printf("Please enter the second number: ");
	scanf_s("%d", &second);
	
	int greatestCD = GCD(first, second);
	printf("\nGCD of %d and %d is: %d\n", first, second, greatestCD);
	return 0;
}