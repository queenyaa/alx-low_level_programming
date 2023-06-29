#include "main.h"

/**
 * print_number - prints an integer
 * @v: integer to be printed;
 */

void print_number(int v)
{
	unsigned int w;

	if (v < 0)
	{
		w = -v;
		_putchar('-');
	}
	else
	{
		w = v;
	}

	if (w / 10)
	{
		print_number(w / 10);
	}

	_putchar('0' + (w % 10));
}
