// PAL Week 6 - Program 3:
//					classic fizzBuzz solution given an array of 10 integers
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-11		initial

#include <stdio.h>

#define MAXARR 10
#define FIZZ 3
#define BUZZ 5

void fizzBuzz(int[]);
int main(void)
{
	int numbers[MAXARR] = { 1, 3, 5, 15, 30, 4, 9, 23, 45, 100 };

	fizzBuzz(numbers);
	return 0;
}

void fizzBuzz(int numbers[])
{
	for (int i = 0; i < MAXARR; i++)
	{
		if (numbers[i] % FIZZ == 0)
		{
			if (numbers[i] % BUZZ == 0)
			{
				printf("FizzBuzz\n");
			}
			else
			{
				printf("Fizz\n");
			}
		}
		else if (numbers[i] % BUZZ == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("<>\n");
		}
	}
}