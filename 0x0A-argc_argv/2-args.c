#include <stdio.h>
#include "main.h"

/**
 * main - print arguments on a line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
		printf("%s\n", argv[a++]);

	return (0);
}
