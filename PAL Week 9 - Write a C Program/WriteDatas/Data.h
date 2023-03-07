// PAL Week 9 - Write a C Program - Data ADT header file
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-07		initial

#pragma once

typedef struct Data
{
	int sizeKey;
	int key;
}DATA;

// creates a data
DATA CreateData(int, int);

// print data to stream
void PrintData(DATA);

// writing it to a data file
void WriteData(char*, DATA);

// fopen(FILENAME, mode)
// w --> overwrites content
// r --> reads
// a --> appends