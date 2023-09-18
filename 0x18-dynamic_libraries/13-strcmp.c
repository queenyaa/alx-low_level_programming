#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: 1st str
 * @s2: 2nd str
 * Return: s1[a] - s2[a]
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;

	while (s1[a] != s2[a])
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
