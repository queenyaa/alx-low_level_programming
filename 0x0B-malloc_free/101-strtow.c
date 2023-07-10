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
	int c = 0;
	int d = 0;

	while (str[d] == ' ')
		d++;
	if (str[d] != '\0')
	{
		c++;
		while (str[d] != ' ' && str[d] != '\0')
			d++;
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
	int wl, d = 0;

	int w_i = 0, e = d, c_i = 0, wc = cw(str);
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	if (wc == 0)
		return (NULL);

	words = (char **)malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[d] != '\0')
	{
		while (str[d] == ' ')
			d++;
		if (str[d] != '\0')
			while (str[e] != ' ' && str[e] != '\0')
				e++;

		wl = e - d;

		words[w_i] = (char *)malloc((wl + 1) * sizeof(char));
		if (words[w_i] == NULL)
		{
			while (w_i--)
				free(words[w_i]);
			free(words);
			return (NULL);
		}
		while (d < e)
			words[w_i][c_i] = str[d++];
		words[w_i][c_i] = '\0';
		w_i++;
	}
	words[w_i] = NULL;
	return (words);
}
