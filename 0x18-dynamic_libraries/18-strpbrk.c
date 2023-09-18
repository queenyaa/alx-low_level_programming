#include "main.h"
#define NULL ((void *)0)

/**
 * _strpbrk - searches a string of set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the bytes, NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	char *acc = accept;

	while (*s != '\0')
	{
		while (acc != '\0')
		{
			if (*s == *acc)
				return (s);
			acc++;
		}
		s++;
	}
	return (NULL);
}
