#include "main.h"

/**
 * _calloc - Entry point.
 *
 * Description: Afuntion that allocates memory for an array
 * @nmemb: number of elements in the array.
 * @size: size of each element.
 *
 * Return: pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	s = ptr;

	for (i = 0; i < (size * nmemb); i++)
		s[i] = '\0';

	return (ptr);
}
