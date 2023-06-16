#include <stdio.h>

/**
 * main - Entry point
 * Description: program to print lowercase alphabet without q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	char v = 'a';

	while (v <= 'z')
	{
		if (v != 'q' && v != 'e')
			putchar(v);
		v++;
	}
	putchar('\n');

	return (0);
}
