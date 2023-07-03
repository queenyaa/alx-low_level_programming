#include "main.h"

/**
 * *_memset - function to fill memory with constant byte
 * @s: pointer of n
 * @n: bytes
 * @b: constant byt
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
