#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: Inputed integer
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, dg;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				dg = x * y

				if (dg <= 99)
					_putchar(' ');
				if (dg <= 9)
					_putchar(' ');
				if (dg >= 100)
				{
					_putchar((dg / 100) + '0');
					_putchar((dg / 10) % 10 + '0');
				}
				else if (dg <= 99 && dg >= 10)
				{
					_putchar((dg / 10) + '0');
				}
				_putchar((dg % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
