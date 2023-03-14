#include <stdio.h>

int main(void)
{
	// Two heights: one in centimeters, and the same value in inches
	float heightInCm = 2.50f;
	float heightInInch = 0.984f;

	float* pHeight = &heightInCm; // pointer to a float
	printf("heightInCm: %f -- *pHeight: %f\n", heightInCm, *pHeight);
	printf("&heightInCm: %p -- pHeight: %p\n", &heightInCm, pHeight);

	*pHeight = 3.50f; // dereferencing a pointer
	printf("heightInCm: %f -- *pHeight: %f\n", heightInCm, *pHeight);

	// Updating height in inches too!
	pHeight = &heightInInch;
	*pHeight = 1.37795f; 
	printf("heightInInch: %f -- *pHeight: %f\n", heightInInch, *pHeight);
	printf("&heightInInch: %p -- pHeight: %p\n", &heightInInch, pHeight);

	return 0;
}