#include "main.h"

/**
 * pal_help - check start and end characters for equality
 * @st: start index
 * @end: end index
 * @s: string
 * Return: 1 palindrome , 0 otherwise
 */

int pal_help(char *s, int st, int end)
{
	if (st >= end)
	{
		return (1); /*base case: reached mid, string is palindrome*/
	}
	if (s[st] != s[end])
	{
		return (0); /*char st and end don't match*/
	}
	return (pal_help(s, st + 1, end - 1)); /*recurse next st and end*/
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++; /*Calculate the length of the string*/
	}
	return (pal_help(s, 0, length - 1)); /*call help with indices*/
}
