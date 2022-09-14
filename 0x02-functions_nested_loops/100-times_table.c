#include "main.h"

/**
 * print_times_table - Entry point
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
		for (x = 0; x <= 10; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				dg = x * y;
				_putchar(44);
				_putchar(32);
				if (dg < 10)
				{
					_putchar(32);
					_putchar(dg + 48);
				}
				else if (dg < 100)
				{
					_putchar(32);
					_putchar((dg / 10) + 48);
					_putchar((dg % 10) + 48);
				}
				else
				{
					_putchar(((dg / 100) % 10) + 48);
					_putchar(((dg / 10) % 10) + 48);
					_putchar((dg % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
