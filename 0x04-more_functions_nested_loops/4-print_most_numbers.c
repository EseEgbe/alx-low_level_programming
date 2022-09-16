#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 * doesn't print 2 and 4.
 *
 * Return: no return value
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}