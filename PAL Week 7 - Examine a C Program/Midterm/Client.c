// PAL Week 7 - Client ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-20		initial

#define _CRT_SECURE_NO_WARNINGS

#include "Client.h"
#include <stdlib.h>

CLIENT CreateClient(int id)
{
	CLIENT client;

	client.id = id;
	client.currentIndex = 0;

	return client;
}

void DisplayClient(CLIENT thisClient)
{
	printf("id: %d\n", thisClient.id);
	printf("currentIndex: %d\n", thisClient.currentIndex);
	printf("\nUsers:\n");

	for (int i = 0; i < thisClient.currentIndex; i++)
	{
		DisplayUser(thisClient.users[i]);
	}
}

void AddNewUser(CLIENT* thisClient, USER newUser)
{
	thisClient->users[thisClient->currentIndex] = newUser;
	thisClient->currentIndex++;
}

void StreamWriteClient(CLIENT thisClient, char filename[])
{
	FILE* fp = fopen(filename, "w");
	if (!fp)
	{
		fprintf(stderr, "Error opening %s. Exiting...\n", filename);
		exit(1);
	}
	else
	{
		fprintf(fp, "%d\n", thisClient.id);
		fprintf(fp, "%d\n", thisClient.currentIndex);

		for (int i = 0; i < thisClient.currentIndex; i++)
		{
			StreamWriteUser(thisClient.users[i], fp);
		}

		fclose(fp);
	}
}

CLIENT StreamReadClient(char filename[])
{
	CLIENT newClient;

	FILE* fp = fopen(filename, "r");
	if (!fp)
	{
		fprintf(stderr, "Error opening %s. Exiting...\n", filename);
		exit(1);
	}
	else
	{
		int id;
		int currentIndex;
		fscanf_s(fp, "%d\n", &id);
		newClient = CreateClient(id);

		fscanf_s(fp, "%d\n", &currentIndex);
		for (int i = 0; i < currentIndex; i++)
		{
			USER newUser = StreamReadUser(fp);
			AddNewUser(&newClient, newUser);
		}

		fclose(fp);
	}

	return newClient;
}