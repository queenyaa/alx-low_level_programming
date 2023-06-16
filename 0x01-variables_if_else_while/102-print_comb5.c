#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int o, p;

	for (o = 0; o < 100; o++)
	{
		for (p = o; p < 100; p++)
		{
			putchar((o / 10) + '0');
			putchar((o % 10) + '0');
			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');

			if (o != 99 || p != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
