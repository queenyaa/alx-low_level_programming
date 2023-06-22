#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * largestPrimeFactor - the largest prime factor
 * @n: the long number
 * Return: 0
 */

long largestPrimeFactor(long n)
{
	long a;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (a = 3; a * 1 <= n; a += 2)
	{
		while (n % a == 0)
		{
			n /= a;
		}
	}

	if (n > 2)
	{
		return (n);
	}

	return (0);
}
