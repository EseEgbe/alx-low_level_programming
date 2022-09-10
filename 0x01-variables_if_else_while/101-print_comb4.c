#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int d = 48;
	int e = 48;

	while (d < 58)
	{
		i = 0;

		while (i < 58)
		{
			e = 0;

			while (e < 58)
			{
				if (d != i && d != e && i != e &&  d < i && i < e)
				{
					putchar(d);
					putchar(i);
					putchar(e);

					if (i == 56 && d == 55 && e == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			i++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
