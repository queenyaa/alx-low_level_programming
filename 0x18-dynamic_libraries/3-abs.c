#include "main.h"

/**
 * _abs - computes value in its absolute format
 * @n: integer under computation
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
	return (0);
}
