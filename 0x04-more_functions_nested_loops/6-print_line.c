#include "main.h"

/**
 * print_line - print the line
 * @n: number of _ to print
 */

void print_line(int n)
{
	int v = 0;

	while (v < n && n > 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
