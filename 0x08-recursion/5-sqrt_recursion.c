#include "main.h"

/**
 * sqrt_help - find sqrt n
 * @n: number
 * @rt: squaring n
 */
int sqrt_help(int n, int rt)
{
	if (rt * rt > n) /*sqrt not found*/
		return (-1);

	if (rt * rt ==  n) /*found sq*/
		return (rt);

	return (sqrt_help(n, rt + 1));
}

/**
 * _sqrt_recursion - natural sqrt of a number
 * @n: number
 * Return: sqrt of n, -1 if negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /*error case*/
		return (-1);
	return (sqrt_help(n, 0)); /*help searches range*/
}
