#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: output value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
		d++;

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}

	*d = '\0';

	return (dest);
}
