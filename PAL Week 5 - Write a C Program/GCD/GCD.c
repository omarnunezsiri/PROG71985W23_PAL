// PAL Week 5 - GCD implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-06		initial

#include "GCD.h"

int GCD(int first, int second)
{
	int divisor = -1;
	for (int i = 1; i < first; i++)
	{
		if (first % i == 0 && second % i == 0)
			divisor = i;
	}

	return divisor;
}