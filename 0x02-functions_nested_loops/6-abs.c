#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @b: the integer under computation
 *
 * Return: Always 0
 */

int _abs(int b)
{
	if (b < 0)
	{
		return (b * -1);
	}
	else
	{
		return (b);
	}
	return (0);
}
