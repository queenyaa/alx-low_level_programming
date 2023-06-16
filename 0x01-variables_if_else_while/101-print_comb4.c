#include <stdio.h>

/**
 * main - Entry point
 * Description: three digits combinations
 * Return: Always 0 (success)
 */

int main(void)
{
	int u, v, w;

	for (u = 0; u < 10; u++)
	{
		for (v = u + 1; v < 10; v++)
		{
			for (w = v + 1; w < 10; w++)
			{
				putchar(u + '0');
				putchar(v + '0');
				putchar(w + '0');

				if (u != 7 || v != 8 || w != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
