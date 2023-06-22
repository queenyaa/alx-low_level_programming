#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 */

void more_numbers(void)
{
	int v, w;

	for (v = 0; v < 10; v++)
	{
		for (w = 0; w < 15; w++)
		{
			if (w >= 10)
			_putchar(w / 10 + '0');
			_putchar(w % 10 + '0');
		}
		_putchar('\n');
	}
}
