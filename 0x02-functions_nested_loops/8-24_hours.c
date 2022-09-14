#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints very minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	int j, a, c, k;

	for (j = 48; j < 51; j++)
	{
		for (a = 48; a < 58; a++)
		{
			for (c = 48; c < 54; c++)
			{
				for (k = 48; k < 58; k++)
				{
					if (j > 49 && a > 51)
						break;
					_putchar(j);
					_putchar(a);
					_putchar(58);
					_putchar(c);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}
