#include "main.h"
#include <stdlib.h>
#include <string.h>
#define NULL ((void *)0)

/**
 * argstostr - concatenates all arguments of program
 * @ac: integer
 * @av: a pointer to a pointer to array of strings
 * Return: pointer to new string, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int tot_l, k, i, j;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	tot_l = 0;
	for (i = 0; i < ac; i++)
		tot_l += strlen(av[i]) + 1;

	concat = (char *)malloc(tot_l * sizeof(char));
	if (concat == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		k = 0;

		while (av[i][k] != '\0')
		{
			concat[j++] = av[i][k++];
		}
		concat[j++] = '\n';
	}
	concat[j -1] = '\0';

	return (concat);
}
