#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: space
 * @n: integers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int r;
	char *str;

	va_start(args, n);

	for (r = 0; r < n; r++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (r < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
