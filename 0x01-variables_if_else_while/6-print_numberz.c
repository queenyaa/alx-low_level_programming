#include <stdio.h>

/**
 * main - Entry point
 * Description: prints single digit numbers of base 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int g = '0';

	while (g <= '9')
	{
		putchar(g);
		g++;
	}
	putchar('\n');

	return (0);
}
