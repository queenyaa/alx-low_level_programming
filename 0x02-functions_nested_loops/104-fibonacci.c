#include <stdio.h>

/**
 * main - printing the first 98 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int a;
	unsigned long int b = 1;
	unsigned long int c = 2;
	unsigned long int 1 = 1000000000;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int c1;
	unsigned long int c2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c += b;
		b = c - b;
	}
	b1 = (b / 1);
	b2 = (b % 1);
	c1 = (c / 1);
	c2 = (c % 1);

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", c1 + (c2 / 1));
		printf("%lu", c2 % 1);
		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}
	printf("\n");
	return (0);
}
