#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: prints a square
 * @size: printing of square
 *
 * Return: no return value
 */

void print_square(int size)
{
	int i, n;

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
