#include <stdio.h>

int Add(int*, int);

int main(void)
{
	int first = 10;
	int second = 15;

	printf("first:  %d\n", first); // <--- 10
	printf("\n%X ---\n", &first);

	int result = Add(&first, second);
	printf("result : %d\n", result); // <--- 45
	printf("first:  %d\n", first); // <--- might be 30
	return 0;
}

// Pass by value - makes a copy
int Add(int *first, int second)
{
	*first = 30;
	printf("\n%X ---\n", first);
	return (*first + second);
}