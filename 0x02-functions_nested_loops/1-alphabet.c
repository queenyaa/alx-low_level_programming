#include "main.h"

/**
 * main - Entry point
 * Description: prototype to print lowercase alphabet
 * Return: Always 0 (success)
 */

int print_alphabet(void)
{
	char h;

	h = 'a';

	while (h <= 'z')
	{
		_putchar(h);
		h++
	}

	_putchar('\n');

	return (0);
}
