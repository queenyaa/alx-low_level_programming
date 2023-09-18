#include "main.h"

/**
 * _strlen - prints a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
