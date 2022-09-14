#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, d;

	for (i = 0; i < 10; i++)
	{
		for (d = 97; d < 123; d++)
		{
			_putchar(d);
		}
	_putchar('\n');
	}
}
