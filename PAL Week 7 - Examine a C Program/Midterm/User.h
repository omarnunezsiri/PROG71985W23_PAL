// PAL Week 7 - User ADT header
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-20		initial

#pragma once
#include <stdio.h>

#define MAXSTR 30
typedef struct User
{
	int id;
	char username[MAXSTR];
	char password[MAXSTR];
	char DOB[MAXSTR];
}USER;

USER CreateUser(int, char[], char[], char[]);
void DisplayUser(USER);
void StreamWriteUser(USER, FILE*);
void removeTrailingNewLine(char*);
USER StreamReadUser(FILE*);