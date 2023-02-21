// PAL Week 7 - User ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-20		initial

#include "User.h"
#include <string.h>

USER CreateUser(int id, char username[], char password[], char DOB[])
{
	USER user;

	user.id = id;

#ifdef _WIN32
	strcpy_s(user.username, MAXSTR, username);
	strcpy_s(user.password, MAXSTR, password);
	strcpy_s(user.DOB, MAXSTR, DOB);
#else
	strcpy(user.username, username);
	strcpy(user.password, password);
	strcpy(user.DOB, DOB);
#endif
	
	return user;
}

void DisplayUser(USER thisUser)
{
	printf("ID: %d\n", thisUser.id);
	printf("Username: %s\n", thisUser.username);
	printf("Password: %s\n", thisUser.password);
	printf("DOB: %s\n", thisUser.DOB);
}

void StreamWriteUser(USER thisUser, FILE* fp)
{
	fprintf(fp, "%d\n", thisUser.id);
	fprintf(fp, "%s\n", thisUser.username);
	fprintf(fp, "%s\n", thisUser.password);
	fprintf(fp, "%s\n", thisUser.DOB);
}

// Credits: PROG71985 week 6 - Dr. Hendrikse
void removeTrailingNewLine(char* buffer)
{
	for (int i = 0; i < strlen(buffer); i++)
		if (buffer[i] == '\n')
			buffer[i] = '\0';
}

USER StreamReadUser(FILE* fp)
{
	int id;
	char username[MAXSTR];
	char password[MAXSTR];
	char DOB[MAXSTR];

	fscanf_s(fp, "%d\n", &id);

	fgets(username, MAXSTR, fp);

	fgets(password, MAXSTR, fp);

	fgets(DOB, MAXSTR, fp);

	removeTrailingNewLine(username);
	removeTrailingNewLine(password);
	removeTrailingNewLine(DOB);

	return CreateUser(id, username, password, DOB);
}