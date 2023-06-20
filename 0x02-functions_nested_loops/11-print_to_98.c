#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers n , 98 should be the last one
 *
 * @v: integer
 */

void print_to_98(int v)
{
	if (v < 98)
	{
		printf("%d, ", v);
		v++;
	}
	else if (v > 98)
	{
		printf("%d, ", v);
		v--;
	}
	else
	{
		printf("%d\n", v);
	}
}
