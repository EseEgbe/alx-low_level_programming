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
	int i;
	int j;
	int k;

	for (j = 48; j < 58; j++)
	{
		for (i = 48; i < 58; i++)
		{
			for (k = 48; k < 58; k++)
			{
				if (j != i && k != i && j < i && i < k)
				{
					putchar(j);
					putchar(i);
					putchar(k);
					if (i == 56 && j == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
