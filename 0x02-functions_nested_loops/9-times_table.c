#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, dg

	for (x = 0; x < 10; x++)
	{
		_putchar(48);
		for (y = 1; y < 10; y++)
		{
			dg = x * y;
			_putchar(44);
			_putchar(32);
			if (dg < 10)
			{
				_putchar(32);
				_putchar(dg + 48);
			}
			else
			{
				_putchar((dg / 10) + 48);
				_putchar((dg % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
