#include <stdio.h>

/**
 * main - printing the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long a = 1; /* first fibonacci number */
	unsigned long b = 2; /* second fibonacci number */

	printf("%lu, %lu", a, b);

	int i;

	for (int i = 3; i <= 98; i++)
	{
		unsigned long c = a + b;

		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
