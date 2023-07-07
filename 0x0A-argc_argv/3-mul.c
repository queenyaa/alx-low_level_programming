#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 (success), 1 (if arguments not given)
 */

int main(int argc, char *argv[])
{
	int v, w, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	v = atoi(argv[1]);
	w = atoi(argv[2]);

	mul = v * w;

	printf("%d\n", mul);
	return (0);
}
