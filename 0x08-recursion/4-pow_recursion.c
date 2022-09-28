#include "main.h"

/**
 * _pow_recursion - Entry point.
 *
 * Description: A function that returns value of x raised to the power of y.
 * @X: value to raise*
 * @y: power value.
 *
 * Return: x raised to the power of y.
 * if y less than 0, return -1
 */

int _strlen_recursion(char *s)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
