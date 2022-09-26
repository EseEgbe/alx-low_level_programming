#include "main.h"

/**
 * _strchr - Entry point.
 *
 * Description: A function that locates a character in a string.
 * @s: inputed string.
 * @c: character to be located.
 *
 * Return: pointer to c otherwise, NULL if c not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	if (s[i] == c)
		return (s[i]);

	return ('\0');
}
