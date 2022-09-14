#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: Inputed integer.
 *
 * Description: prints all natural numbers from n to 98.
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 99; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	_putchar('\n');
}
