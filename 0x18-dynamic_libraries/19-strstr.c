#include "main.h"
#define NULL ((void *)0)

/**
 * _strstr - locate and return pointer
 * @haystack: string to search
 * @needle : target
 * Return: pointer to index of the string
 */
char *_strstr(char *haystack, char *needle)
{
	char *hays = haystack;
	char *needl = needle;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		while (*needl != '\0' && *hays == *needl)
		{
			hays++;
			needl++;
		}
		if (*needl == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
