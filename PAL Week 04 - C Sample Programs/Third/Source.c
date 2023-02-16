// PAL Week 4 - Program 3:
//					use of while loop to determine the factors of a number
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-01-28		initial

#include <stdio.h>

int main(void)
{
	int number;
	printf("Please enter a number to determine its factors: ");
	scanf_s("%d", &number);

	int counter = 1;
	while (counter <= number) // do we need to include the number given or not?
	{
		if (number % counter == 0)
			printf("%d is a factor of %d\n", counter, number);
		counter++;
	}

	return 0;
}