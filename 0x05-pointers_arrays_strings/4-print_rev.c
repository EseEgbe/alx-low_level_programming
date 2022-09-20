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
	int i, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
