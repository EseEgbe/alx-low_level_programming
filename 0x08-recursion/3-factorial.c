#include "main.h"

/**
 * factorial - Entry point.
 *
 * Description: A function that returns the factorial of a given number.
 * @n: get factorial of this number.
 *
 * Return: factorial of inouted n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
