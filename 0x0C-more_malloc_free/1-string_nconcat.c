#include "main.h"
#define NULL ((void *)0)

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory to be assigned
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, l_c, x, y;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*determine lengths of input*/
	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	/*adjust n if >= s2*/
	if (n >= l2)
		n = l2;

	l_c = l1 + n;

	res = (char *)malloc((l_c + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (x = 0; x < l1; x++)
		res[x] = s1[x];

	for (y = 0; y < n; y++)
		res[l1 + y] = s2[y];
	res[l_c] = '\0';

	return (res);
}
