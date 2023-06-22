#include "main.h"

/**
 * print_numbers - numbers from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	char v;

	for (v = '0'; v <= '9'; v++)
		_putchar(v);

	_putchar('\n');
}
