#include "main.h"
#include <string.h>

/**
 * puts_half - prints last half of a string
 * @str: the string
 * Return: 0
 */

void puts_half(char *str)
{
	int d = strlen(str);
	int e;
	int f;

	if (d % 2 == 0)
	{
		e = d / 2;
	}
	else
	{
		e = (d - 1) / 2;
	}

	for (f = e; f < d; f++)
	{
		_putchar(str[f]);
	}
	_putchar('\n');
}
