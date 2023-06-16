#include <stdio.h>

/**
 * main - Entry point
 * Description: print whole numbers less than 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int h = 0;

	while (h < 10)
	{
		printf("%d", h);
		h++;
	}
	putchar('\n');

	return (0);
}
