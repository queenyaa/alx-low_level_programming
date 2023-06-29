#include "main.h"

/**
 * rot13 - function hat encodes a string
 * @b: pointer to string
 * Return: b
 */

char *rot13(char *b)
{

	for (; *b != '\0'; b++)
	{
		if ((*b >= 'A' && *b <= 'M') || (*b >= 'a' && *b <= 'm'))
		{
			*b += 13;
		}
		else if ((*b >= 'N' && *b <= 'Z') || (*b >= 'n' && *b <= 'z'))
		{
			*b -= 13;
		}
	}

	return (b);
}
