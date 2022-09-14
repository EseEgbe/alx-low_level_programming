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

	for (i = 0; i < 9; i++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
