#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Description: all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int d = 48;

	{
		while (d < 58)
		{
			i = 48;

			while (i < 58)
			{
				if (d != i && d < i)
				{
					putchar(d);
					putchar(i);
					if (i == 57 && d == 56)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			d++;
		}
	}
	putchar('\n');
	return (0);
}
