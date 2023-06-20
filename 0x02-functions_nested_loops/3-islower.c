#include "main.h"

/**
 * _islower - program to check for lowercase character
 * @c: the character needing some checking
 * Return: 0 if not c, 1 if c
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
