#include "main.h"

/**
 * _strcpy - copies of strings
 * @dest: pointer
 * @src: source of string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (d);
}
