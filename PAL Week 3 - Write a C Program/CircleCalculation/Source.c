// PAL Week 3 - CircleCalculation:
//					Calculate and display the circumference length and area of the circle given its radius
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-01-23		initial

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
int main(void)
{
	float radius;

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	float circumferenceLength = 2 * (PI * radius);
	float area = PI * pow(radius, 2); // pow function included from math library

	printf("length: %f | area: %f\n", circumferenceLength, area);

	return 0;
}