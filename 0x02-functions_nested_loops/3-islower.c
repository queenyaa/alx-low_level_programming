#include "main.h"

/**
 * main - Entry point
 * Description: program to check for lowercase character
 * Return: 0 if not c, 1 if c
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
