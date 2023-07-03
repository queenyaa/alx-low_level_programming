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
	int a = 0;

	while (s[a] != '\0' && s[a] != c)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
		a++;
	}
	return (NULL);
}
