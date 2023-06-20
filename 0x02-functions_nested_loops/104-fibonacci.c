#include <stdio.h>

/**
 * main - printing the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int co, ov;
	unsigned long a = 1; /* first fibonacci number */
	unsigned long b = 2; /* second fibonacci number */
	unsigned long c = 0;
	long a1, a2, b1, b2, c1, c2;

	printf("1");

	for (co = 2; co < 93; co++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}

	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (; co < 99; co++)
	{
		ov = (a1 + b2) / 1000000000;
		c1 = (a1 + b2) - (1000000000 * ov);
		c2 = (a2 +b2) + ov;

		printf(", %lu%lu", c2, c1);

		a2 = b2;
		a1 = b1;
		b2 = c2;
		b1 = c1;
	}

	printf("\n");

	return (0);
}
