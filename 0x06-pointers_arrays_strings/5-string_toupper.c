#include "main.h"

/**
 * string_toupper - function to change alphabets from lowercase to uppercase
 * @str: the strings to check
 * Return: str (string)
 */

char *string_toupper(char *str)
{
	char *d = str;

	while (*d != '\0')
	{
		if (*d >= 'a' && *d <= 'z')
		{
			/*converting lowercase to uppercase*/
			*d -= ('a' - 'A');
		}
		d++;
	}
	return (str);
}
