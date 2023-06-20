#include <stdio.h>

/**
 * main - printing the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long long a = 1; /* first fibonacci number */
	unsigned long long b = 2; /* second fibonacci number */

	printf("%llu, %llu", a, b);

	for (int i = 3; i <= 98; i++)
	{
		unsigned long long c = a + b;

		printf(", %llu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
