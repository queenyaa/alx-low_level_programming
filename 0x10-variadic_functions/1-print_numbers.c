#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int s;
	unsigned int r;
	va_list args;

	va_start(args, n);

	for (r = 0; r < n; r++)
	{
		s = va_arg(args, int);
		printf("%d", s);

		if (r < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
