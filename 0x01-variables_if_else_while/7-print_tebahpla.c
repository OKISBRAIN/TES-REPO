#include <stdio.h>

/**
 * main - Entry Point
 * Return: always 0
 *
 */

int main(void)
{
	char j;

	for (j = 'z' ; j >= 'a' ; j--)
		putchar (j);
	putchar ('\n');
	return (0);
}
