// PAL Week 6 - Artist Input:
//					enter information about an artist and display it back
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-13		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "Artist.h"

int main(void)
{
	ARTIST artist;
	int rgb;

	/* Challenge:
	*  How would you allow the user to enter strings with spaces in them?
	*  e.g., last name: Nunez Siri.
	*/

	printf("Enter the artist's first name: ");
	scanf("%s", artist.firstName);

	printf("Enter the artist's last name: ");
	scanf("%s", artist.lastName);

	printf("Enter the artist's contract salary: ");
	scanf("%f", &artist.contractSalary);

	printf("Enter the artist's age: ");
	scanf("%d", &artist.age);

	printf("\nCreated new artist!\n");
	printf("____________________________\n");
	displayArtist(artist);
	return 0;
}