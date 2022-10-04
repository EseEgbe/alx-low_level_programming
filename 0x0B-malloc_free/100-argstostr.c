#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Entry point.
 *
 * Description: A function that concatenates all the arguments.
 * @ac: count of arguments.
 * @av: array of arguments.
 *
 * Return: Pointer to then ew string.
 *	NULL if failure.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	return (str);
}
