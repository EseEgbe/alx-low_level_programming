#include "main.h"

/**
 * print_rev - entry point
 * @s: inputed string
 * Description: prints a string, in reverse, followed by a new line
 *
 * Returns: no return value
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	i--;

	_putchar(s[i]);

	_putchar('\n');
}
