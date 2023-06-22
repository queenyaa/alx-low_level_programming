#include "main.h"

/**
 * print_diagonal - print in diagonals
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int v;
	int w;

	if (n > 0)
	{
		for (v = 1; v <= n; v++)
		{
			for (w = 1; w < v; w++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
