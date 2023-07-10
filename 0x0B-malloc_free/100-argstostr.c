#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * argstostr - concatenates all arguments of program
 * @ac: integer
 * @av: a pointer to a pointer to array of strings
 * Return: pointer to new string, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int tot_l, k, i, l, j;
	char *concat, *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	tot_l = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		l = 0;

		while (arg[l])
			l++;
		tot_l += l + 1; /*+1 for '\n'*/
	}

	concat = (char *)malloc(tot_l * sizeof(char));
	if (concat == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];

		k = 0;
		while (arg[k])
		{
			concat[j++] = arg[k++];
		}
		concat[j++] = '\n';
	}
	concat[j] = '\0';

	return (concat);
}
