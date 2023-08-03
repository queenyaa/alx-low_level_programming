#include "main.h"

/**
 * get_endianness - checks endianness of the system
 * Return: 0 if bit endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *endian = (char *)&v;
	/*treats v as a character array and checks the value of the 1st byte*/

	return (*endian == 1);
}
