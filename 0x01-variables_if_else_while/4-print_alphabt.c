#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: palphabets except q and e in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i
		;
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}


