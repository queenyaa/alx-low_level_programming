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
	int d, e, f;

	d = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (d < size)
	{
		e = size - d < 10 ? size - d : 10;
		printf("%08x: ", d);
		for (f = 0; f < 10; f++)
		{
			if (f < e)
				printf("%02x", *(b + d + f));
			else
			printf("  ");
			if (f % 2)
			{
				printf(" ");
			}
		}
		for (f = 0; f < e; f++)
		{
			int g = *(b + d + f);

			if (g < 32 || g > 132)
			{
				g = ',';
			}
			printf("%c", g);
		}
		printf("\n");
		d += 10;
	}
}
