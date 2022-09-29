#include "main.h"

int check_primeNumber(int n, int i);

/**
 * is_prime_number - Entry point.
 *
 * Description: A funtion that checks for prime numbers.
 * @n: input integer.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_primeNumber(n, n - 1));
}

/**
 * check_primeNumber - Entry point.
 *
 * Description: A function that recurses prime numbers.
 * @n: input integer.
 * @i: iterator.
 *
 * Return: 1 if prime number, otherwise 0.
 */

int check_primeNumber(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (check_primeNumber(n, i - 1));
}
