// PAL Week 7 - Client ADT header
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-20		initial

#pragma once
#include "User.h"

#define MAXUSERS 24

typedef struct Client {
	int id;
	int currentIndex;
	USER users[MAXUSERS];
}CLIENT;

CLIENT CreateClient(int);
void DisplayClient(CLIENT);
void AddNewUser(CLIENT*, USER);
void StreamWriteClient(CLIENT, char[]);
CLIENT StreamReadClient(char[]);