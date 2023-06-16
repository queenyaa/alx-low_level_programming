#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of two digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; j < 100; j++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
