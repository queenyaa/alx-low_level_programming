#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "my first srlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
