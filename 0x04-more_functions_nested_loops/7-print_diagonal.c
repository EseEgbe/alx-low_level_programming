#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: draws a diagonal line on the terminal.
 * @n: printing of \
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
