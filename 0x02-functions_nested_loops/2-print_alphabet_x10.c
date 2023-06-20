#include "main.h"

/**
 * print_alphabet_x10 - print alphabetbet 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char w; 
	int v;
	
	for (v = 0; v < 10; v++);
	{
		for (w = 'a'; w <= 'z'; w++);
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
