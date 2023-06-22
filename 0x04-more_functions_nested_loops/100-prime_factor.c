#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Description: print prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	unsigned int long w = 612852475143;
	int v = (int) sqrt(w);

	while (1)
	{
		if (w % v == 0)
		{
			printf("%lu \n", w / v);
			break;
		}
		v++;
	}

	return (0);
}
