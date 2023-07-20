#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints any data type
 * @format: formats of arguments
 */

void print_all(const char * const format, ...)
{
	int n = 0;
	char *str, *sep = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					n++;
					continue;
			}
			sep = ", ";
			n++;
		}
	}
	printf("\n");
	va_end(args);
}
