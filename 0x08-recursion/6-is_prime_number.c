#include "main.h"

/**
 * pn - divide by higher divisor, skip even numbers
 * @n: number
 * @dvs: divisor
 * Return: 1 if prime, 0 if not
 */

int pn(int n, int dvs)
{
	if (n == dvs)
		return (1);

	if (n % dvs == 0)
		return (0);

	return (pn(n, dvs + 1));
}

/**
 * is_prime_number - check for prime n
 * @n: the number
 * Return: 1 if prime n, 0 otherwise
 */

int is_prime_number(int n)
{
	int dvs = 3;

	if (n % 2 == 0 || n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (pn(n, dvs));
}
