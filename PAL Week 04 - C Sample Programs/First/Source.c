// PAL Week 4 - Program 1:
//					use of switch-case with a menu
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-01-28		initial

#include <stdio.h>

int main(void)
{
	printf("MENU\n");
	printf("a) Add two numbers\n");
	printf("b) Substract two numbers\n");
	printf("c) Multiply two numbers\n");
	printf("d) Divide two numbers\n");
	printf("Please enter your option: ");

	char option = getchar();

	switch (option)
	{
		case 'a':
			printf("Add");
			break;
		case 'b':
			printf("Substract");
			break;
		case 'c':
			printf("Multiply");
			break;
		case 'd':
			printf("Divide");
			break;
		default:
			printf("??"); // When would the program hit this?
			break;
	}

	return 0;
}