#include "main.h"

/**
 * _strncat - concatenates 2 strins using n bytes from src
 * @dest: output value
 * @src: input value
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	while (*d != '\0')
		d++;

	while (*src != '\0' && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}

	*d = '\0';

	return (dest);
}
