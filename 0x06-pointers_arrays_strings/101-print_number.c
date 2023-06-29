#include "main.h"

/**
 * print_number - prints an integer
 * @v: integer to be printed;
 */

void print_number(int v)
{
	if (v < 0)
	{
		_putchar('-');
		v = -v;
	}

	if (v / 10 != 0)
	{
		print_number(v / 10);
	}

	_putchar('0' + v % 10);
}
