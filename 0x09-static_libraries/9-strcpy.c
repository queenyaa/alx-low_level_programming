#include "main.h"

/**
 * _strcpy - copies the string pointed by src
 * null byt (\0) must be terminated
 * @dest: pointer of the buffer
 * @src: string
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest; /*starting the destination buffer*/

	while (*src != '\0')
	/*iterate over each character of src until \0 is encountered*/
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (d);
}
