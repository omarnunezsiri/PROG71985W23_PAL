// PAL Week 9 - Write a C Program - Data ADT implementation
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-07		initial
#define _CRT_SECURE_NO_WARNINGS

#include "Data.h"
#include <stdlib.h>
#include <stdio.h>

// creates a data
DATA CreateData(int sizekey, int key)
{
	DATA data = { sizekey, key };
	return data;
}

// print data to stream
void PrintData(DATA data)
{
	printf("%d %d\n", data.sizeKey, data.key);
}

// writing it to a data file
// fprintf, fputs, fgets, fgetc, fscanf
void WriteData(char* filename, DATA data)
{
	FILE* fp = fopen(filename, "a");

	if (fp)
	{
		fprintf(fp, "\n%d\n%d", data.sizeKey, data.key);
	}
	else
	{
		fprintf(stderr, "Unable to open %s.\n", filename);
		exit(EXIT_FAILURE);
	}

	fclose(fp);
}