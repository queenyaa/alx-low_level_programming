#include "main.h"
#define NULL ((void *)0)

/**
 * _strstr - locate and return pointer
 * @haystack: string to search
 * @needle: target substring to search
 * Return: pointer to index of the string
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0') /*if needle is empty, return haystack*/
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *haystack_p = haystack;
		char *needle_p = needle;

		while (*needle_p != '\0' && *haystack_p == *needle_p)
		{
			haystack_p++;
			needle_p++;
		}

		if (*needle_p == '\0') /*finding the substring*/
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
