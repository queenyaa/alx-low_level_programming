#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int d_sum1 = 0;/*sum of 1st diagonal*/
	int d_sum2 = 0; /*sum of 2nd diagonal*/
	int b;

	/*calculate the sums*/
	for (b = 0; b < size; b++)
	{
		d_sum1 += *(a + b * size + b); /*access elements in 1st diagonal*/
		d_sum2 += *(a + b * size + (size - 1 - b));
	}

	printf("%d, %d\n", d_sum1, d_sum2);
}
