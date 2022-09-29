#include "main.h"

/**
 * _sqrt_recursion - Entry point.
 *
 * Description: A function that returns the natural square root of a number.
 * @n: inputed integer. 
 *
 * Return: natural square root, otherwise -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, 0));
}


/**
 * squareroot - Entry point.
 *
 * Description: A function that recurses natural square root.
 * @n: inputed integer.
 * @i: iterator.
 *
 * Return: Square root.
 */

int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
