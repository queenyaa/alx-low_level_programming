#include "main.h"

/**
 * *_memcpy - copues memory area
 * @dest: destination
 * @src: soruce
 * @n: an integer
 * Returns: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_p = dest;
	char *src_p = src;

	while (n > 0)
	{
		*dest_p = *src_p;
		dest_p++;
		src_p++;
		n--;
	}
	return (dest);
}
