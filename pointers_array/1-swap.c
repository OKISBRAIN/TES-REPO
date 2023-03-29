#include "main.h"

/**
 * swap_int - swaps the value of two integer
 * @c: store the value of a pointer variable
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
