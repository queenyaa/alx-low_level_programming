#include "main.h"

/**
 * _atoi - converting a string to an integer
 * @s: the string
 * Return: the integer
 */

int _atoi(char *s)
{
	int d = 1;
	int e = 0;
	int f = 0;

	if (s[0] == '-') /*checking for sign*/
	{
		d = -1;
		f++;
	}
	else if (s[0] == '+')
	{
		f++;
	}
	/*converting digit to integer*/
	while (s[f] != '\0')
	{
		if (s[f] >= '0' && s[f] <= '9')
		{
			e = e * 10 + (s[f] - '0');
			f++;
		}
		else
		{
			break; /*stop at the first non-digit character*/
		}
	}

	return (d * e);
}
