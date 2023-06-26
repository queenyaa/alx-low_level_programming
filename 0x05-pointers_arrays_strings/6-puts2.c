#include "main.h"

/**
 * puts2 - prints a character out of a string
 * @str: the string
 * Description: print 1st char, the 3rd, the 5th...
 */

void puts2(char *str)
{
	int v;

	for (v = 0; str[v] != '\0'; v++)
	{
		if (v % 2 == 0)
		_putchar(str[v]);
	}
	_putchar('\n');
}
