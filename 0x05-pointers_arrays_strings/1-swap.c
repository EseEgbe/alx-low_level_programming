#include "main.h"

/**
 * swap_int - entry point
 * @a: inputed integer 1
 * @b: inputed integer 2
 * @n: temporary variable
 *
 * Description: swaps the values of two integers.
 *
 * Return: no return value.
 */

void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
