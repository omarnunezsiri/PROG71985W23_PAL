#include <stdio.h>

int Add(int, int);

int main(void)
{
	/* How would we fix this program to change x to the value 30 inside the Add function? */

	int x = 10;
	int y = 20;

	printf("x before Add: %d\n", x);
	printf("address of x in main: %p\n", &x);

	int result = Add(x, y); 

	printf("result: %d\n", result);
	printf("x after Add: %d\n", x);

	return 0;
}

int Add(int x, int y)
{
	printf("address of x in add: %p\n", &x);

	x = 30; // are we changing a copy or the x in main?
	return (x + y);
}