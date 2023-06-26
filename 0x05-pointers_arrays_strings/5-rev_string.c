#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: the string
 * Return: reversed string
 */

void rev_string(char *s)
{
	int u = strlen(s);
	int v, w;
	char x;

	for (v = 0, w = u - 1; v < w; v++, w--)
	{
		x = s[v];
		s[v] = s[w];
		s[w] = x;
	}
}
