#include "main.h"

/**
 * _strncat - concatenate 2 strings using n bytes from src
 * @dest: destination value
 * @src: input value
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	/*find the end of dest*/
	while (*d != '\0')
	{
		d++;
	}
	/*copy n char from src to dest*/
	while (*src != '\0' && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}
	/*add ternminating null byte*/
	*d = '\0';

	return (dest);
}
