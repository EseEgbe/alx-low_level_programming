#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int count;
	unsigned long x = 0, y = 1, sum;
	unsigned long xa, xb, ya, yb;
	unsigned long a, b;

	for (count = 0; count < 92; count++)
	{
		sum = x + y;
		printf("%lu, ", sum);

		x = y;
		y = sum;
	}
	xa = x / 10000000000;
	ya = y / 10000000000;
	xb = x % 10000000000;
	yb = y % 10000000000;

	for (count = 93; count < 99; count++)
	{
		a = xa + ya;
		b = xb + yb;
		if (xb + yb > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");
		xa = ya;
		xb = yb;
		ya = a;
		yb = b;
	}
	printf("\n");

	return (0);
}
