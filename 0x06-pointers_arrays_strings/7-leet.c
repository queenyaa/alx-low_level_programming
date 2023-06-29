#include "main.h"

/**
 * leet - encods a string into 1337
 * @b: input value
 * Return: b
 */

char *leet(char *b)
{
	int c, d;
	char *e = "aAeEoOtTlL";
	char *f = "4433007711";

	for (c = 0; b[c] != '\0'; c++)
	{
		for (d = 0; e[d] != '\0'; d++)
		{
			if (b[c] == e[d])
			{
				b[c] = f[d];
				break;
			}
		}
	}

	return (b);
}
