#include "main.h"

/**
 * _pow_recursion - value of x raised to y
 * @x: number
 * @y: power
 * Return: power of number, -1 when y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /*error case*/
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	else if (y == 0 || x == 1) /*base case: num raised to 0 is 1*/
	{
		return (1);
	}
	else /*recursion*/
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
