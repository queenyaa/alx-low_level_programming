#include "main.h"

/**
 * main - Entry point
 * Description: program to pint _putchar followed by a new line
 * Return: Always 0 (succes)
 */

int main(void)
{
	char v = "_putchar";
	int i = 0;

	while (v[i] != '\0')
	{
		_putchar(v[i]);
		i++
	}
	_putchar('\n');

	return (0);
}
