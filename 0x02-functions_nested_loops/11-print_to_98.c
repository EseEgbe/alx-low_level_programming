#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: Inputed integer.
 *
 * Description: prints all natural numbers from n to 98.
 *
 * Return: void
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			_putchar('.');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n);
			_putchar(',')'
			n--;
		}
	}
	_putchar('\n');
}
