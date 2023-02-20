// PAL Week 7 - Midterm Review - Examine a C Program
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-20		initial

#include <stdio.h>
#include "Client.h"

#define DATAFILE "client.txt"

int main(void)
{
	return 0;
}

/*
* Example without an existing datafile
    USER user1 = CreateUser(1, "omarnunez", "conestogac", "2002-21-11");
	USER user2 = CreateUser(2, "johndoe", "doejohn", "1996-01-01");
	USER user3 = CreateUser(3, "linus", "torvlin111", "1969-12-28");

	CLIENT myClient = CreateClient(1);
	AddNewUser(&myClient, user1);
	AddNewUser(&myClient, user2);
	AddNewUser(&myClient, user3);

	DisplayClient(myClient);

	StreamWriteClient(myClient, DATAFILE);
*/

/*
* Example with existing datafile
	CLIENT myClient = StreamReadClient(DATAFILE);

	DisplayClient(myClient);

	StreamWriteClient(myClient, DATAFILE);
*/