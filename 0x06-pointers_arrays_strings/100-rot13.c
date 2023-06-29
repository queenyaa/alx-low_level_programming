#include "main.h"

/**
 * rot13 - function hat encodes a string
 * @b: pointer to string
 * Return: b
 */

char *rot13(char *b)
{
	int v;
	int w;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (v = 0; b[v] != '\0'; v++)
	{
		for (w = 0; w < 52; w++)
		{
			if (b[v] == x[w])
			{
				b[v] = y[w];
				break;
			}
		}
	}
	return (b);
}
