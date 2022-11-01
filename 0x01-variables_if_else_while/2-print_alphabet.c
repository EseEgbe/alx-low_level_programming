#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'alphabet in lowercase, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while(i < 26)
	{
		putchar(alph[i]);
		i++
	}
	putchar('\n');
	
	return (0);
}
