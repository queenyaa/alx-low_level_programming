#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for set of bytes
 * @s: string
 * @accept: a string
 * Return: pointer to the byte, NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *accept_p = accept;

		while (*accept_p != '\0')
		{
			if (*s == *accept_p)
			{
				return (s);
			}
			accept_p++;
		}
		s++;
	}
	return (NULL);
}
