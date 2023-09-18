#include "main.h"

/**
 * _memcpy - copies a memory
 * @dest: output value
 * @src: input value
 * @n: integer
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s_a = src;

	while (n > 0)
	{
		d = s_a;
		d++;
		s_a++;
		n--;
	}
	return (dest);
}
