#include "main.h"

/**
 * print_alphabet - print lowercase alphabets
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char h;

	h = 'a';

	while (h <= 'z')
	{
		_putchar(h);
		h++;
	}

	_putchar('\n');
}
