#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * main - adds two arguments
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 (success), 1 if not a number
 */

int main(int argc, char *argv[])
{
	int add, b, c, d;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	add = 0;

	for (c = 1; c < argc; c++) /*check for non-digit char*/
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (!isdigit(argv[c][d]))
			{
				printf("Error\n");
				return (1);
			}
		}

		b = atoi(argv[c]);

		if (b > 0)
		{
			add += b;
		}
	}

	printf("%d\n", add);
	return (0);
}
