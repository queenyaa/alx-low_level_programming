#include "main.h"

/**
 * factorial - factorial of n
 * @n: number
 * Return: factorial of n, -1 for error
 */

int factorial(int n)
{
	if (n < 0) /*error case: negative n*/
	{
		return (-1);
	}
	else if (n == 0) /*base case: factorial is 1*/
	{
		return (1);
	}
	else /*the recursion*/
	{
		return (n * factorial(n - 1));
	}
}
