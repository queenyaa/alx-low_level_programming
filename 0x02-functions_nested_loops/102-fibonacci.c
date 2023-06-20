#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	long double a;
	long double b;
	long double c;
	int v;

	v = 1
	a = 1
	b = 1
	printf("%.Lf, ", b);
	while (v <= 49)
	{
		c = b + a;
		printf("%.Lf", c);
		v++;
		a = b;
		b = c;
		if (v != 50)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
