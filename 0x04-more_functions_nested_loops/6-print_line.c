#include "main.h"

/**
 * print_line - print the line
 * @n: number of _ to print
 */

void print_line(int n)
{
	int v = n;

	for (v = n; v > 0; v--)
		_putchar('_');

	_putchar('\n');
}
