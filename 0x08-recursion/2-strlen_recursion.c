#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: the string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /*base case: end of string*/
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1)); /*call next char and add 1*/
}
