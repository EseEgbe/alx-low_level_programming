#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: prints a triangle
 * @size: printing of  triangle
 *
 * Return: no return value
 */

void print_triangle(int size)

{
	int i, n;

	for (i = 0; i < size; i++)
	{
		for (n = 1; n < (size - i); n++)
			_putchar(' ');
		for (n--; n < size; n++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
