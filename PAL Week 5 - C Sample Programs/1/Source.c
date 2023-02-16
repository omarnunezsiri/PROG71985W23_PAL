// PAL Week 5 - Program 1:
//					implement findMax function
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-04		initial

#include <stdio.h>

int findMax(int, int);

int main(void) 
{
	int firstNum = 10;
	int secondNum = 20;

	int max = findMax(firstNum, secondNum);

	printf("The max between %d and %d is: %d", firstNum, secondNum, max);
	return 0;
}

int findMax(int firstNum, int secondNum)
{
	int max;

	if (firstNum > secondNum)
		max = firstNum;
	else
		max = secondNum;

	return max;
}