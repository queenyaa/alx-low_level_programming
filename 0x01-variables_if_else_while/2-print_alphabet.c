#include <stdio.h>

/**
 * main - Entry point
 * Description: program to print lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
