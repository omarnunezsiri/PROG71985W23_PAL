// PAL Week 6 - Artist ADT header
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-13		initial

#pragma once

#define MAX_NAME 30

typedef struct artist {
	char firstName[MAX_NAME];
	char lastName[MAX_NAME];
	float contractSalary;
	int age;
}ARTIST;

void displayArtist(ARTIST);