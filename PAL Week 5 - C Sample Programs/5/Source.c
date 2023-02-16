// PAL Week 5 - Program 5:
//					implement displayFactors function
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-04		initial

#include <stdio.h>

void displayFactors(int);

int main(void)
{
	int num;
	printf("Please enter a positive integer: ");

	// how would you implement accepting only positive integers?
	scanf_s("%d", &num); 
	displayFactors(num);

	return 0;
}

void displayFactors(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
		}
	}
}