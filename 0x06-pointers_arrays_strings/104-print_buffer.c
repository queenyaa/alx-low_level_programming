#include "main.h"
#include <stdio.h>

/**
 * _print_AS - determins n as a printable ASCII char
 * @n: integer
 * Return: 1 on success, 0 if not
 */
int _print_AS(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * print_hex - hex values for string b
 * @b: string
 * @i: start position
 * @j: end
 */
void print_hex(char *b, int i, int j)
{
	int a = 0;

	while (a < 10)
	{
		if (a < j)
			printf("%02x", *(b + i + a));
		else
			printf("  ");
		if (a % 2)
			printf(" ");
		a++;
	}
}

/**
 * print_ASC - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string
 * @i: start
 * @j: end
 */
void print_ASC(char *b, int i, int j)
{
	int d, e = 0;

	while (e < j)
	{
		d = *(b + e + i);
		if (!_print_AS(d))
			d = 46;
		printf("%c", (char)d);
		e++;
	}
}

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
		for (i = 0; i < size; i += 10)
		{
			j = (size - i < 10) ? size - i : 10;
			printf("%08x: ", i);
			print_hex(b, i, j);
			print_ASC(b, i, j);
			printf("\n");
		}
	}
	else
		printf("\n");
}
