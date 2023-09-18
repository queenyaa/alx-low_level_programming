#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: character
 * Return: 1 success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
