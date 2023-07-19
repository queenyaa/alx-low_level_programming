#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a main
 * @argc: num of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes, r;
	char *main_ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (r = 0; r < bytes; r++)
	{
		if (r == bytes - 1)
		{
			printf("%02hhx\n", main_ptr[r]);
			break;
		}
		printf("%02hhx ", main_ptr[r]);
	}

	return (0);
}
