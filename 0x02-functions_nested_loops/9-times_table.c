#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: none
 */

void times_table(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			int o = m * n;

			if (n == 0)
			{
				_putchar('0' + o);
			}
			else if (o <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + o);
			}
			else if (o > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (o / 10));
				_putchar('0' + (o % 10));
			}
		}
		_putchar('\n');
	}
}
