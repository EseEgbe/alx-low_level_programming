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
	int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	
	_putchar('\n');
}
