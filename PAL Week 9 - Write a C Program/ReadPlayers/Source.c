// PAL Week 9 - Write a C Program - Read 12 players from a data file and display to standard output
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-06		initial

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h> // exit functionality
#include "Player.h"

#define MAXPLAYERS 12
#define FILENAME "playerDb.txt"

int main(void)
{
	PLAYER players[MAXPLAYERS];

	printf("Welcome! Reading players now...\n");
	FILE* fp = fopen(FILENAME, "r"); // opening in read mode

	if (fp)
	{
		for (int i = 0; i < MAXPLAYERS; i++)
		{
			// reads a player from the db and displays it to stdout
			players[i] = readPlayerFromStream(fp);
			displayPlayer(players[i]);
		}
	}
	else
	{
		fprintf(stderr, "Unable to open %s. Exiting...\n", FILENAME);
		exit(EXIT_FAILURE);
	}
	
	fclose(fp); // don't forget to close your files!
	return 0;
}