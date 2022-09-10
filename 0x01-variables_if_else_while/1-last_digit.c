#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the last digit of the number stored in the variable, n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	L = n % 10;
	if (L > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, L);
	}
	else if (L == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, L);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L);
	}
	return (0);
}
