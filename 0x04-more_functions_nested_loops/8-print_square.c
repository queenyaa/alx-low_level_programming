#include "main.h"

/**
 * print_square - print a square with #
 * @size: size to draw
 */

void print_square(int size)
{
	int v, w;

	if (size > 0)
	{
		for (v = 1; v <= size; v++)
		{
			for (w = 1; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
