#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string
 * Return: s in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /*base: end of string*/
	{
		return;
	}

	_print_rev_recursion(s + 1); /*recursively next char*/
	_putchar(*s); /*print current char*/
}
