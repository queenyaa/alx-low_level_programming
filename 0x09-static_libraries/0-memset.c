#include "main.h"

/**
 * _memset - function to fill memory with constant byt
 * @s: pointer to n
 * @n: bytes
 * @b: constant byte
 * Return: pointer to memory of s
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
