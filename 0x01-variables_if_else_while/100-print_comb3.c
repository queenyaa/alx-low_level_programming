#include <stdio.h>

/**
 * main - Entry point
 * Description: double digits combinations
 * Return: Always 0 (success)
 */

int main(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			putchar(j + '0');
			putchar(k + '0');

			if (j != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
