#include <stdio.h>

/**
 * main - summing even fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long o, p, q, r, s;

	p = s = 0;
	q = 1;

	for (o = 0; o < 50; o++)
	{
		r = p + q;
		p = q;
		q = r;
		if (r % 2 == 0 && r < 4000000)
		{
			s += r;
		}
	}
	printf("%lu\n", s);
	return (0);
}
