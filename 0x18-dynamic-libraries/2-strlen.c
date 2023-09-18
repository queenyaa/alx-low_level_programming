#include "main.h"

/**
 * _strlen - prints a string
 * @s: the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int v = 0;

	while (*s != '\0')
	{
		v++;
		s++;
	}
	return (v);
}
