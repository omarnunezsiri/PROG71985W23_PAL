// PAL Week 6 - Program 4:
//					implementing Subtract function
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-11		initial (pass by value)
// 1.1			2023-02-13		refactored (pass by reference)

#include <stdio.h>

int Subtract(int*, int);

int main(void)
{
	int first = 10;
	int second = 15;

	printf("first: %d\n", first);

	int result = Subtract(&first, second); // first is passed by reference
	printf("result: %d\n", result);
	printf("first: %d\n", first);

	return 0;
}

int Subtract(int* firstNum, int secondNum)
{
	*firstNum = 30;
	
	if (*firstNum > secondNum)
		return *firstNum - secondNum;
	
	return secondNum - *firstNum;
}