#include "main.h"
#include <stdio.h>

/**
 * print_buffer -prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("$08x: ", i);

		for (j = i; j < i + 10; j++ && j < size; j++)
		{
			printf("%02x%s", (unsigned char)b[j])
			if (j % 2 != 0)
				printf(" ");
		}
		for (; j < i + 10; j++)
		{
			printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126);
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
