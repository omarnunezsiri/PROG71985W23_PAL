// PAL Week 9 - Write a C Program - Player ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-06		initial

#include "Player.h"
#include <string.h>

PLAYER createPlayer(int id, char* uname, char* pw, float exp)
{
	PLAYER newPlayer;

	newPlayer.id = id;
	strcpy_s(newPlayer.username, MAXSTR, uname);
	strcpy_s(newPlayer.password, MAXSTR, pw);
	newPlayer.exp = exp;

	return newPlayer;
}

void displayPlayer(PLAYER player)
{
	printf("\nPLAYER: \n");
	printf("id: %d\n", player.id);
	printf("username: %s --- password: %s\n", player.username, player.password);
	printf("experience as float: %.3f\n", player.exp);
}

void removeTrailingNewLine(char* buffer)
{
	for (int i = 0; i < strlen(buffer); i++)
		if (buffer[i] == '\n')
			buffer[i] = '\0';
}

PLAYER readPlayerFromStream(FILE* fp)
{
	int id;
	char username[MAXSTR];
	char password[MAXSTR];
	float exp;

	fscanf_s(fp, "%d\n", &id); // reads the id from the first line
	fgets(username, MAXSTR, fp); // reads the username from the second line
	fgets(password, MAXSTR, fp); // reads the password from the third line
	fscanf_s(fp, "%f\n", &exp); // reads the exp from the last line

	removeTrailingNewLine(username);
	removeTrailingNewLine(password);

	return createPlayer(id, username, password, exp);
}