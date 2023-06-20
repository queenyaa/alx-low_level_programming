#include <stdio.h>

/**
 * main - printing the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long in c, d, e, f, g, h, i;

	d = 1;
	e = 2;

	printf("%lu", d);

	for (c = 1; c < 91; c++)
	{
		printf(", %lu", e);
		e = e + d;
		d = e - d;
	}

	f = e / 1000000000;
	g = e % 1000000000;
	h = e / 1000000000;
	i = e % 1000000000;

	for (c = 92; c < 99; ++c)
	{
		printf(", %lu", h + (i / 1000000000));
		printf("%lu", i % 1000000000);
		h = h + e;
		e = h - e;
		e = e + g;
		g = i - g;
	}
	printf("\n");

	return (0);
}
