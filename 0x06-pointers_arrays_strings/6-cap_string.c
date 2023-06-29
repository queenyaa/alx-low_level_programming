#include "main.h"

/**
 * cap_string - capitalization of a string
 * @b: the string being capitalized
 * Return: a pointer for the modified string
 */
char *cap_string(char *b)
{
	int s_c = 0;

	while (b[s_c])
	{
		while (!(b[s_c] >= 'a' && b[s_c] <= 'z'))
			s_c++;

		if (b[s_c - 1] == ' ' ||
		b[s_c - 1] == '\t' ||
		b[s_c - 1] == '\n' ||
		b[s_c - 1] == ',' ||
		b[s_c - 1] == ';' ||
		b[s_c - 1] == '.' ||
		b[s_c - 1] == '!' ||
		b[s_c - 1] == '?' ||
		b[s_c - 1] == '"' ||
		b[s_c - 1] == '(' ||
		b[s_c - 1] == ')' ||
		b[s_c - 1] == '{' ||
		b[s_c - 1] == '}' ||
		s_c == 0)
			b[s_c] -= 32;
		s_c++;
	}

	return (b);
}
