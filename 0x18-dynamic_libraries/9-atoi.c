#include "main.h"

/**
 * _atoi - converting a string into an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int d = 1;
	unsigned int e = 0;

	do {
		if (*s == '-')
			d *= -1;
		else if (*s >= '0' && *s <= '9')
			e = (e * 10) + (*s - '0');
		else if (e > 0)
			break;
	} while (*s++);

	return (d * e);
}
