#include <stdio.h>

/**
 * main - printing the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long a = 1; /* first fibonacci number */
	unsigned long b = 2; /* second fibonacci number */
	unsigned long c;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;

		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
