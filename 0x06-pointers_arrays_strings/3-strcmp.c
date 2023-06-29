#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first string
 * @s2: second string
 * Return: s1[a] - s2[a]
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	/*comparing s1 and s2, when null terminators have not been reached*/
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			/*returns 0 when expression indicates strings are equal */
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
