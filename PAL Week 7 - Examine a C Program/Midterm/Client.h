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
	USER users[MAXUSERS]; // reusing the USER struct
}CLIENT;

CLIENT CreateClient(int); // creates a client
void DisplayClient(CLIENT); // displays a client
void AddNewUser(CLIENT*, USER); // adds a new user
void StreamWriteClient(CLIENT, char[]); // writes a client to a file
CLIENT StreamReadClient(char[]); // reads a client from a file