// PAL Week 9 - Examine a C Program - command line arguments demonstration plus new function usage (atoi)
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-05		initial

#include <stdio.h>
#include <stdlib.h> // exit and atoi functionality

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Command line arguments not set properly. Exiting...\n");
		exit(EXIT_FAILURE);
	}

	// research! what is atoi?
	int loopStart = atoi(argv[1]);
	int loopEnd = atoi(argv[2]);
	
	printf("Displaying the numbers in the range %d-%d\n", loopStart, loopEnd);

	for (; loopStart <= loopEnd; loopStart++)
	{
		printf("%d ", loopStart);
	}

	printf("\n");

	return 0;
}