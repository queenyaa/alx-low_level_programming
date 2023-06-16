#include <stdio.h>

/**
 * main - Entry point
 * Description: reverse lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int u;

	for (u = 'z'; u >= 'a'; u--)
	{
		putchar(u);
	}
	putchar('\n');

	return (0);
}
