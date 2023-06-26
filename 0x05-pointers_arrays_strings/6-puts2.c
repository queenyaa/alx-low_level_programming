#include "main.h"

/**
 * puts2 - prints a character out of a string
 * @str: the string
 * Description: print 1st char, the 3rd, the 5th...
 */

void puts2(char *str)
{
	int v = 0;

	while (str[v] != '\0')
	{
		_putchar(str[v]);
		v += 2;
	}
	_putchar('\n');
}
