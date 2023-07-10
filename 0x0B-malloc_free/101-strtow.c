#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * cw - count words
 * @str: the string
 * Return: count
 */
int cw(char *str)
{
	int e;
	int c = 0;
	int d = 0;

	for (e = 0; str[e] != '\0'; e++)
	{
		if (str[e] == ' ')
			d = 0;
		else if (d == 0)
		{
			d = 1;
			c++;
		}
	}
	return (c);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of str, NULL otherwise
 */
char **strtow(char *str)
{
	char **a, *t;
	int b, d = 0, l = 0, w, e = 0, st, ed;

	while (*(str + l))
		l++;
	w = cw(str);
	if (w == 0)
		return (NULL);

	a = (char **)malloc(sizeof(char *) * (w + 1));
	if (a == NULL)
		return (NULL);

	for (b = 0; b <= l; b++)
	{
		if (str[b] == ' ' || str[b] == '\0')
		{
			if (e)
			{
				ed = b;
				t = (char *)malloc(sizeof(char) * (e + 1));
				if (t == NULL)
					return (NULL);
				while (st < ed)
					*t++ = str[st++];
				*t = '\0';
				a[d] = t - e;
				d++;
				e = 0;
			}
		}
		else if (e++ == 0)
			st = b;
	}
	a[d] = NULL;
	return (a);
}
