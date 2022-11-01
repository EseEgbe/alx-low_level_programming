#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Description: Print the last digit of the number stored in the variable, n.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of n is %d and is zero\n", ld);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", ld);
	}

	return (0);
}
