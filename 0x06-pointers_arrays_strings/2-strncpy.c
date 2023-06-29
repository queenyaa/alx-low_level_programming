#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	e = 0;
	/*copy from src to dest */
	while (e < n && src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
	/*if there are remaining characters to be filled, pad with null bytes */
	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}
	return (dest);
}
