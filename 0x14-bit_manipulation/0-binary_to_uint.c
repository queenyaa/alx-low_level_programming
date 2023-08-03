#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted num, or 0 if invalid char or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		output <<= 1;
		if (*b == '1')
			output |= 1;
		b++;
	}
	return (output);
}
