#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long x = 0, y = 1, sum;
	float totSum;

	while (1)
	{
		sum = x + y;

		if (sum > 4000000)
			reak;

		if ((sum % 2) == 0)
			totSum += sum;

		x = y;
		y = sum;
	}

	printf("%.0f\n", tot_sum);

	return (0);
}
