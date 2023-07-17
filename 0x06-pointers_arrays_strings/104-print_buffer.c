#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints content of bytes from a buffer
 * @b: nmber of bytes
 * @size: size of the byte
 */

void print_buffer(char *b, int size)
{
	int c = 0, d;

	if (size < 0)
	{
		printf("\n");
		return;
	}

	while (c < size)
	{
		if (c % 10 == 0)
			printf("%08x: ", c);
		for (d = c; d < c + 9; d += 2)
		{
			if ((d < size) && ((d + 1) < size))
				printf("%02x%02x ", b[d], b[d + 1]);
			else
			{
				while (++d <= c + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (d = c; d < c + 10 && d < size; d++)
		{
			if (b[d] >= 32 && b[d] <= 126)
				printf("%c", b[d]);
			else
				printf(".");
		}
		printf("\n");
		c += 10;
	}
}
