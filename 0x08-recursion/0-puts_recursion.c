#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 * Return: s and a new line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /*base case: end of string*/
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /*print current character*/
	_puts_recursion(s + 1); /*recursively call next character*/
}
