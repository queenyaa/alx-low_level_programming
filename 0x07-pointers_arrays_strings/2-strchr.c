#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character
 * Return: pointer to c (success), NULL if otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
