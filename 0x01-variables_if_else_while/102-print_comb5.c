#include <stdio.h>

/**
 * main – Entry point
 *
 * Description: all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i,d;

	i = 48;
	d = 48;

	while (d < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(d);
			putchar(i);
			if (i == 57 && d == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
