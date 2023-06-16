#include <stdio.h>

/**
 * main - Entry point
 * Description: program to print combinations of numbers with commas
 * Return: Always 0 (success)
 */

int main(void)
{
	int e;

	for (e = 0; e < 10; e++)
	{
		putchar(e + '0');

		if (e != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
