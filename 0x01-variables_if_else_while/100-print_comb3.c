#include <stdio.h>

/**
 * main – Entry point
 *
 * Description: prints numbers 01 to 89
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, d;

	i = 49;
	d = 49;

	while (d < 58)
	{
		i = 49;
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
	putchar('\n');
	return (0);
}
