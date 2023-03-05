// PAL Week 9 - Examine a C Program - command line arguments to read a file and display to stdout
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-05		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define MAXSTR 512

int main(int argc, char* argv[])
{
	char line[MAXSTR]; // to read line by line from a file with a predetermined size
	FILE* fp; // file pointer for file handling

	if (argc != 2)
	{
		fprintf(stderr, "Command line arguments not set properly. Exiting...\n");
		exit(EXIT_FAILURE); // what does EXIT_FAILURE equal to?
	}

	fp = fopen(argv[1], "r"); // what does "r" stand for? 

	if (fp)
	{
		while (fgets(line, MAXSTR, fp) != NULL)
		{
			fprintf(stdout, "%s", line); // can we implement this in a different way?
		}
	}
	else
	{
		fprintf(stderr, "Unable to open file %s. Exiting...\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	fclose(fp); // why is this important?
	return 0;
}