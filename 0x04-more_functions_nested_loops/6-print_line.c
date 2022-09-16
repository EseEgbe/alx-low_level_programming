#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: draws a straight line in the terminal.
 * @n: printing of _
 *
 * Return: no return value
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
