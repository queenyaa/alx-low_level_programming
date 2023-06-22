#include <stdio.h>

/**
 * main - Entry point
 * Description: prints Fizz every 3rd and Buzz very 5th
 * FizzBuzz at multiple of 3 and d
 * Return: 0
 */

int main(void)
{
	int v;

	v = 1;
	while (v <= 100)
	{
		if (v % 3 == 0 && v % 5 == 0)
			printf("FizzBuzz");
		else if (v % 3 == 0)
			printf("Fizz");
		else if (v % 5 == 0)
			printf("Buzz");
		else
			printf("%d", v);

		if (v != 100)
			printf(" ");
		v++;
	}
	printf("\n");

	return (0);
}
