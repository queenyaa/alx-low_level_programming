#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * 
 * description: print prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned long a = 612852475143;
	unsigned long b = 2;

	while (b < a)
	{
		if (a % b == 0)
		{
			a /= b;
			b = 2;
		}
		else
			b++;
	}
	printf("%lu\n", a);

	return (0);
}
