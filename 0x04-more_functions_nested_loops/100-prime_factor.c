#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - entry point
 * largestPrimeFactor: the largest prime factor
 * Description: print prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long f = largestPrimeFactor(n);

	printf("%ld\n", n, f);

	return (0);
}
