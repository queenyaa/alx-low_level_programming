#include "variadic_functions.h"

/**
 * sum_them_all - sum numbers
 * @n: number
 *
 * Return: tot (success), 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	int tot = 0;
	unsigned int r;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (r = 0; r < n; r++)
	{
		tot += va_arg(args, int);
	}

	va_end(args);
	return (tot);
}
