// PAL Week 9 - Write a C Program - Player ADT header file
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-06		initial

#pragma once

#include <stdio.h>
#define MAXSTR 30

typedef struct Player
{
	int id;
	char username[MAXSTR];
	char password[MAXSTR];
	float exp;
}PLAYER;

PLAYER createPlayer(int, char*, char*, float);
void displayPlayer(PLAYER);
PLAYER readPlayerFromStream(FILE*);