#include "main.h"

/**
 * _isdigit - check for digits
 * @c: character to check
 * Return: 1 on success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
