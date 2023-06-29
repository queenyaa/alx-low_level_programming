#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	/*find the end of the destination string*/
	while (*d != '\0')
	{
		d++;
	}

	/*copy source string to end of destination string*/
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}

	/*add the terminating null byte*/
	*d = '\0';

	return (dest);
}
