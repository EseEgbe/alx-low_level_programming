#include "main.h"

int str_length(char *s);
int check_pal(char *s, int i, int len);

/**
 * is_palindrome - A funtion that checks if string is palindrome.
 * @s: string to be reversed.
 *
 * Return: 1 if string is palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, str_length(s)));
}

/**
 * str_length - Returns the length of a string.
 * @s: input string.
 *
 * Return: String length.
 */

int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_length(s + 1));
}

/**
 * check_pal - A funtion that recurses palindrome.
 * @s: input string.
 * @i: iterator
 * @len: String length.
 *
 * Return: 1 if string is palindrome, otherwise 0.
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
