#include "main.h"

/**
 * main - Entry point
 * Description: prototype to print lowercase alphabet
 * print_alphabet: print alphaber in lowercase
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
