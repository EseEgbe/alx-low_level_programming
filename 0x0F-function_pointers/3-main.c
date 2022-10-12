#include <stdio.h>
#include <stdlib.h>
#include "3-cal.h"

/**
 * main - Entry point.
 *
 * Description: Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(n1, n2);

	printf("%d\n", result);

	return (0);
}
