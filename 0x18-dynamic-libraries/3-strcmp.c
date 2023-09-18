#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: 1st string
 * @s2: 2nd string
 * Return: s1[a] - s2[a]
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	/*compare s1 & s2, when '\0' have not been reached*/
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			/*returns 0 when expression = string are equal*/
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
