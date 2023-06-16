#include <stdio.h>

/**
 * main - Entry point
 * Description: program to print a-z and A-Z
 * Retun: Always 0 (success)
 */

int main(void)
{
	char v;
	char w;

	v = 'a';
	w = 'A';
	while (v <= 'z')
	{
		putchar(v);
		v++;
	}
	while (w <= 'Z')
	{
		putchar(w);
		w++;
	}
	putchar('\n');

	return (0);
}
