#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int v, c = 0;

	for (v = 0; v < 1024; v++)
	{
		if ((v % 5) == 0 || (v % 3) == 0)
			c += v;
	}
	printf("%d\n", c);
	return (0);
}
