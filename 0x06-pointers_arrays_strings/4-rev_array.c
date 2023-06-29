#include "main.h"

/**
 * reverse_array - function to reverse an array of integers
 * @a: the pointer to the array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int b, c;

	/**
	 * uses loop to iterate over the 1st half of the array
	 * and swaps the index b with index n - 1 - b
	 */
	for (b = 0; b < n / 2; b++)
	{
		/*swap elements from beginning to end of array*/
		c = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = c;
	}
}
