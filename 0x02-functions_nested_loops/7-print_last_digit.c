#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @v: the number to check for last digit
 *
 * Return: last digit of v
 */

int print_last_digit(int v)
{
	v = v % 10; /* obtain the last digit using the modulo operator */

	if (v < 0)
	{
		v = v * -1;
	}
	_putchar ('0' + v);
	return (v);
}
