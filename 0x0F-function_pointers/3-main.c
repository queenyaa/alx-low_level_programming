#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: num
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", f(n1, n2));

	return (0);
}
