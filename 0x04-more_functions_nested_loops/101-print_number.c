#include "main.h"

/**
 * print_number - print an integer
 * @n: number
 */

void print_number(int n)
{
	unsigned int d, e, f = n;
	double g = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			f = n * -1;
			_putchar('-');
		}

		while (g <= f)
			g *= 10;
		d = g / 10;

		while (d >= 1)
		{
			e = f / d;
			_putchar(e + '0');
			f = (f - (d * e));
			d /= 10;
		}
	}
}
