#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * _strdup - duplicate to another memory space
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	unsigned int l; /*length of string*/
	char *dup; /*memory space to contain duplication*/
	unsigned int b;

	if (str == NULL)
	{
		return (NULL);
	}

	/*cal the l of str*/
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}

	/*aloocate memory of dup str*/
	dup = (char *)malloc((l + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL); /*failed memory allocation*/
	}

	/*copy char from str to dup*/
	for (b = 0; b <= l; b++)
	{
		dup[b] = str[b];
	}
	return (dup);
}
