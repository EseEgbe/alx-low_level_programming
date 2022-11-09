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
	int i;
	int j;

	for (j = 48; j < 58; j++)
	{
		for (i = 48; i < 58; i++)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
