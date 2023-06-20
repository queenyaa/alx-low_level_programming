#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char v, w;

	for (v = 0; v <= 9; v++)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
