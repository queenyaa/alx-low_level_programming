#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	srand(time(NULL));
	for (y = 0, z = 2772; z > 122; y++)
	{
		x = (rand() % 125) + 1;
		printf("%c", x);
		z -= x;
	}
	printf("%c", z);

	return (0);
}
