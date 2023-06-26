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

	if (s[f] == '-' || s[f] == '+')
	{
		d = (s[f] == '-') ? -1 : 1;
		f++;
	}

	while (s[f] >= '0' && s[f] <= '9')
	{
		e = e * 10 + (s[f] - '0');
		f++;
	}

	return (d * e);
}
