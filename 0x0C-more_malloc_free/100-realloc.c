#include "main.h"

/**
 * _realloc - Entry point.
 *
 * Description: Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	char *old_mem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	mem = malloc(new_size);
	if (!mem)
		return (NULL);

	old_mem = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			mem[i] = old_mem[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			mem[i] = old_mem[i];
	}

	free(ptr);
	return (mem);
}
