// PAL Week 10 - Examine a C Program - Reviewing pointers (pass by reference)
// 
// PROG71985-W23
// 
// revision history
// 1.0			2023-03-13		initial

#include <stdio.h>

int Add(int*, int*);

int main(void)
{
	int x = 10;
	int y = 20;

	printf("x before Add: %d\n", x);
	printf("y before Add: %d\n", y);
	printf("address of x in main: %p\n", &x);
	printf("address of y in main: %p\n", &y);

	int* pX = &x;
	int* pY = &y;

	int result = Add(pX, pY); 

	printf("result: %d\n", result);
	printf("x after Add: %d\n", x);
	printf("y after Add: %d\n", y);

	return 0;
}

int Add(int* x, int* y)
{
	printf("address of x in add: %p\n", x);
	printf("address of y in add: %p\n", y);
	*x = 30;
	*y = 60;

	return (*x + *y);
}