#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string
 * _putchar: function to print
 * Return: 0
 */

void print_rev(char *s)
{
	int v, w;

	v = 0;

	while (s[v] != '\0') /*to calculate the length of the string */
	{
		v++;
	}

	for (w = v - 1; w >= 0; w--) /* prints in reverse */
	{
		_putchar(s[w]);
	}
	_putchar('\n');
}
