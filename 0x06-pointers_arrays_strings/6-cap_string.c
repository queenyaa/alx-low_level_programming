#include "main.h"

/**
 * cap_string - capitalization of a string
 * @b: the string being capitalized
 * Return: a pointer for the modified string
 */

char *cap_string(char *b)
{
	char *d = b;
	int s_c = 0;

	while (*d)
	{
		if ((*d >= 'a' && *d <= 'z') && s_c)
		{
			*d -= 32;
		}
		s_c = (*d == ' ' || *d == '\t' || *d == '\n' ||
				*d == ',' || *d == ';' || *d == '.' ||
				*d == '!' || *d == '?' || *d == '"' ||
				*d == '(' || *d == ')' || *d == '{' ||
				*d == '}');
			s_c = 0;
	}
	d++;

	return (b);
}
