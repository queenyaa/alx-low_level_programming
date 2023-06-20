#include "main.h"

/**
 * main - Entry point
 * Description: prototype to print lowercase alphabet
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char h;

	h = 'a';

	while (h <= 'z')
	{
		_putchar(h);
		h++
	}

	_putchar('\n');
}
