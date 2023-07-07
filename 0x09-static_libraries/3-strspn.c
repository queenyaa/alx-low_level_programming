#include "main.h"

/**
 * _strspn - prefix substring length
 * @s: string
 * @accept: consist of bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ct = 0;

	while (*s != '\0')
	{
		char *accept_p = accept;

		while (*accept_p != '\0')
		{	
			if (*s == *accept_p)
			{
				ct++;
				break;
			}
			accept_p++;
		}
		if (*accept_p == '\0')
		{
			break;
		}
		s++;
	}
	return (ct);
}
