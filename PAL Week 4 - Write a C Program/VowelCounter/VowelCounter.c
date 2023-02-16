// PAL Week 4 - VowelCounter:
//					Determine how many how many vowels a string (sequence of characters) has
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-01-30		initial

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_STRING 25
int main(void)
{
	int vowelCount = 0;
	char inputBuffer[MAX_STRING];

	printf("Please enter a sequence of characters: ");
	scanf("%s", inputBuffer);


	/* The following loop traverses the sequence of characters without 
	   taking into account how many characters were given by input.
	   
	   We will learn how to optimize it in the next PAL sessions.
	*/
	for (int i = 0; i < MAX_STRING; i++)
	{
		char c = inputBuffer[i]; // stores the current character in a variable

		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			vowelCount++;
	}

	printf("%s contains %d vowels.\n", inputBuffer, vowelCount);
	return 0;
}