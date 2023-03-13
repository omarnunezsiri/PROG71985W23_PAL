// PAL Week 10 - Examine a C Program - Reviewing pointers using arrays
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-12		initial

#include <stdio.h>

#define MAXARRAY 5

int main(void)
{
	int array[MAXARRAY] = { 1, 2, 3, 4, 5 };
	int* ptr = array;

	printf("array: %p -- ", array);
	printf("&array[0]: %p -- ", &array[0]);
	printf("ptr: %p\n", ptr);

	printf("*array: %d -- ", *array);
	printf("array[0]: %d -- ", array[0]);
	printf("*ptr: %d\n", *ptr);

	return 0;
}