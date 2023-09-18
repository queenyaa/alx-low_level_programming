#include "main.h"

/**
 * _isupper - is it upper case
 * @c: character
 * Return: 1 success, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
