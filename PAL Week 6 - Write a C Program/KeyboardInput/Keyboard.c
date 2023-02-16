// PAL Week 6 - Keyboard ADT implementation
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-14		initial

#include "Keyboard.h"
#include <stdio.h>

void printKeyboard(KEYBOARD k)
{
	printf("============ Keyboard ============\n");
	printf("BRAND: %s\n", k.brand);
	printf("MODEL: %s\n", k.model);
	printf("PERCENTAGE: %s\n", k.percentage);
	printf("RGB? ");

	if (k.RGB)
		printf("YES\n");
	else
		printf("NO\n");
}