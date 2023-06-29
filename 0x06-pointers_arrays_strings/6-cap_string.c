#include "main.h"

/**
 * cap_string - capitalization of a string
 * @b: the string being capitalized
 * Return: a pointer for the modified string
 */

char *cap_string(char *b)
{
	char *d = b;
	int separator_count = 0;

	while (*d != '\0')
	{
		if (*d >= 'a' && *d <= 'z')
		{
			if (separator_count == 0)
			{
				*d -= 32; /*converts into uppercase*/
			}
		}
		else
		{
			separator_count++;
			if (separator_count == 1)
			{
				/*reset separator count when a separator is encountered*/
				if (*d == ' ' || *d == '\t' || *d == '\n' || *d == ',' || *d == ';' || *d == '.' || *d == '!' || *d == '?' || *d == '"' || *d == '(' || *d == ')' || *d == '{' || *d == '}')
				{
					separator_count = 0;
				}
			}
		}
		d++;
	}

	return (b);
}
