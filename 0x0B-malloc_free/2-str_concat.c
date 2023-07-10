#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * str_concat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2; /*lengths*/
	char *concat; /*concatenated*/
	unsigned int i, j;

	/*handle NULL strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0, l2 = 0;
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	concat = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		concat[i] = s1[i];
	for (j = 0; j < l2; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
