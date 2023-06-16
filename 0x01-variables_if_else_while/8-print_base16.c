#include <stdio.h>

/**
 * main - Entry point
 * Description: program to print some numbers and letters
 * Return: Always 0 (success)
 */

int main(void)
{
	int y = '0';
	int b = 'a';

	while (y <= '9')
	{
		putchar(y);
		y++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
