// PAL Week 6 - Keyboard Input:
//					enter information about a keyboard and display it back
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-14		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "Keyboard.h"

int main(void)
{
	KEYBOARD keyboard;
	int rgb;

	/* Challenge (cont):
	*  How would you allow the user to enter strings with spaces in them?
	*  e.g., model: Apex 7 TKL. 
	*/
	printf("Please enter the keyboard's brand: ");
	scanf("%s", keyboard.brand);

	printf("Please enter the keyboard's model: ");
	scanf("%s", keyboard.model);

	printf("Please enter the keyboard's percentage (100, 87, 80, etc.): ");
	scanf("%s", keyboard.percentage);

	printf("Is it RGB? (1/0): ");
	scanf("%d", &rgb);

	if (rgb == 1)
		keyboard.RGB = true;
	else
		keyboard.RGB = false;

	printf("\nKeyboard Inserted to Database\n");
	printKeyboard(keyboard);
	return 0;
}