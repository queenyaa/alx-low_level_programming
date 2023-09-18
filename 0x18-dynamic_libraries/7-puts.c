#include "main.h"

/**
 * _puts - prints a string
 * @s: string to print
 * _putchar: function to be called to print
 */
void _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s++);
	_putchar('\n');
}
