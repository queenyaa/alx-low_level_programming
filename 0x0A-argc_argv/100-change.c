#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - output min no of coins
 * @argc: count 2 arguments
 * @argv: arguments, name and amount of money
 * Return: lest number of coins, 0 (when negative), 1 (amount not given)
 */

int main(int argc, char *argv[])
{
	int cents, num_coins, v, w;
	int coins[] = {25, 10, 5, 2, 1};/*intitalize to available coin denominations*/

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;
	w = (sizeof(coins) / sizeof(coins[0]));

	for (v = 0; v < w; v++)
	{
		num_coins += cents / coins[v];
		cents %= coins[v];
	}

	printf("%d\n", num_coins);
	return (0);
}
