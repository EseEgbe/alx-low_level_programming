#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 * @i: inputed number.
 *
 * Return: no return value
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n')
}
