#include "main.h"

/**
 * is_palindrome - check string if it's a palindrome
 * @s: string
 * Return: 1 if palindrom, 0 if not
 */

int is_palindrome(char *s)
{
	int length(char *s);
	int pal_help(char *s, int l);
	int ln; /*length*/

	ln = length(s) - 1;

	return (pal_help(s, --ln));
}

/**
 * length - gets length of string
 * @s: string
 * Return: length of s
 */

int length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + length(++s));
}

/**
 * pal_help - check start and end characters for equality
 * @l: length
 * @s: string
 * Return: 1 palindrome , 0 otherwise
 */

int pal_help(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (pal_help(++s, l - 2));
	}
	else
		return (0);
}
