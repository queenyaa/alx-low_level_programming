#include "main.h"

/**
 * print_most_numbers - prints some numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int v;

	for (v = 48; v < 58; v++)
	{
		if (v != 50 && v != 52)
		{
			_putchar(v);
		}
	}
	_putchar('\n');
}
