#include "main.h"
#define NULL ((void *)0)

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to c (success), NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[z] != '\0' && s[a] != c)
		a++;

	if (s[a] == c)
		return (&s[a]);
	else
		return (NULL);
}
