#include "main.h"
#include <stdlib.h>
#include <string.h>
#define NULL ((void *)0)

/**
 * _strlen - returns length of string
 * @concat: string
 * Return: length
 */
int _strlen(char *concat)
{
	int tot_l = 0;

	while (*concat != '\0')
		tot_l++, concat++;

	return (tot_l);
}

/**
 * argstostr - concatenates all arguments of program
 * @ac: integer
 * @av: a pointer to a pointer to array of strings
 * Return: pointer to new string, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int tot_l = 0, k, i, j = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		tot_l += _strlen(av[i]);
	}
	tot_l += (ac + 1);

	concat = (char *)malloc(tot_l * sizeof(char));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; k < _strlen(av[i]); k++)
		{
			concat[j++] = av[i][k];
		}
		concat[j++] = '\n';
	}
	return (concat);
}
