#include "main.h"

/**
 * _islower - check for lowercases
 * @c: character
 * Return: 0 if not c, 1 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	_putchar ('\n');
}
