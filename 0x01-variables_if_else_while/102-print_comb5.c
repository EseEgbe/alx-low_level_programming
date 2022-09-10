#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: all possible different combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, d, e, h, dig1, dig2;
i = d = e = h = 48;

while (h < 58)
{
	e = 48;
	while (e < 58)
	{
		d = 48;
		while (d < 58)
		{
			i = 48;
			while (i < 58)
			{
				dig1 = (h * 10) + e;
				dig2 = (d * 10) + i;
				if (dig1 < dig2)
				{
					putchar(h);
					putchar(e);
					putchar(' ');
					putchar(e);
					putchar(i);
				if (i == 57 && d == 57 && e == 56 && i == 57)
					break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			d++;
		}
		e++;
	}
	h++;
}
putchar('\n');
return (0);
}
