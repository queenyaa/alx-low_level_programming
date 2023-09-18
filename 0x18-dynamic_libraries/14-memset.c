#include "main.h"

/**
 * _memset - fill memory with byte
 * @s: pointer to n
 * @n: bytes
 * @b: constant byte
 * Return: pointer to memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (n > 0)
	{
		*a = b;
		a++;
		n--;
	}
	return (s);
}
