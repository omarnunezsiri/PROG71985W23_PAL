#pragma once

// PAL Week 6 - Keyboard ADT header
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-14		initial

#include <stdbool.h>
#define MAX_MODEL 30
#define MAX_BRAND 20
#define MAX_PERCENTAGE 7

typedef struct Keyboard
{
	char brand[MAX_BRAND];
	char model[MAX_MODEL];
	char percentage[MAX_PERCENTAGE];
	bool RGB;
}KEYBOARD;

void printKeyboard(KEYBOARD);