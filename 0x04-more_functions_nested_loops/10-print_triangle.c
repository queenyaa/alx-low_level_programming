#include "main.h"

/**
 * print_triangle - printing a triangle with #
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int v, w, x;

	if (size <= 0)
		_putchar('\n');

	for (v = 1; v <= size; v++)
	{
		for (w = 1; w <= (size - v); w++)
			_putchar(' ');

		for (x = 1; x <= v; x++)
			_putchar('#');

		_putchar('\n');
	}
}
