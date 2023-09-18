#include "main.h"

/**
 * _strspn - prefix substring length
 * @s: string
 * @accept: bytes
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ct = 0;
	char *acc = accept;

	while (*s != '\0')
	{
		while (*acc != '\0')
		{
			if (*s == *acc)
			{
				ct++;
				break;
			}
			acc++;
		}
		if (*acc == '\0')
			break;
		s++;
	}
	return (ct);
}
