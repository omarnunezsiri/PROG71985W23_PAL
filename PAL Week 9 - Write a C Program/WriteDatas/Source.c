// PAL Week 9 - Write a C Program - Write 5 hardcoded datas to a file
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-07		initial
#define _CRT_SECURE_NO_WARNINGS

#define NUMBEROFDATAS 5
#define FILENAME "DataInFile.txt"
#include <stdio.h>
#include "Data.h"

int main(void)
{
	DATA data1 = CreateData(123, 3);
	DATA data2 = CreateData(999, 1);
	DATA data3 = CreateData(12342, 2);
	DATA data4 = CreateData(123921, 5);
	DATA data5 = CreateData(188231, 4);

	DATA datas[NUMBEROFDATAS] = { data1, data2, data3, data4, data5 };
	int i = 0;
	while (i != NUMBEROFDATAS)
	{
		PrintData(datas[i]);
		WriteData(FILENAME, datas[i]);
		i++;
	}	
	
	return 0;
}