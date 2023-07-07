#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * _putchar: function to print the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
