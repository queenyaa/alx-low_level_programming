#include "main.h"

int str_len(char *str);
char *c_array(int size);
char *iterate_z(char *str);
void gprod(char *prod, char *mul, int dig, int z);
void mul_n(char *fin_prod, char *n_prod, int n_len);
int gdig(char b);

/**
 * str_len - find the length of string
 * @str: the string to be measured
 *
 * Return: the length of string
 */
int str_len(char *str)
{
	int l = 0;

	while (*str++)
		l++;

	return (l);
}

/**
 * c_array - creates an array of chars and initialize, adds a null byte
 * @size: size of the array to initialized
 * Return: pointer to array, exits 98 if insufficient space
 */
char *c_array(int size)
{
	char *ar;
	int ind;

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		exit(98);

	for (ind = 0; ind < (size - 1); ind++)
		ar[ind] = 'x';
	ar[ind] = '\0';

	return (ar);
}

/**
 * iterate_z - iterates through string of numbers, from 0 till a non-0
 * @str: the string of numbers
 * Return: a pointer to the next non-0 element
 */
char *iterate_z(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * gdig - converts a digit char to conrresponding int
 * @b: char to be converted
 * Return: the converted int, exit 98 if b is non-digit
 */
int gdig(char b)
{
	int dig = b - '0';

	if (dig < 0 || dig > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (dig);
}

/**
 * gprod - multiplies string of numbers by single digit
 * @prod: buffer to store result
 * @mul: string of numbers
 * @dig: the single digit
 * @z: necessary number of leading zeroes
 * Description: if mul has a non-digit, exit 98
 */
void gprod(char *prod, char *mul, int dig, int z)
{
	int mlen, n, tn = 0;

	mlen = str_len(mul) - 1;
	mul += mlen;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (z--)
	{
		*prod = '0';
		prod--;
	}
	for (; mlen >= 0; mlen--, mul--, prod--)
	{
		if (*mul < '0' || *mul > '9')
		{
			printf("Error\n");
			exit(98);
		}
		n = (*mul - '0') * dig;
		n += tn;
		*prod = (n % 10) + '0';
		tn = n / 10;
	}
	if (tn)
		*prod = (tn % 10) + '0';
}

/**
 * add_n - adds the numbers stored in 2 strings
 * @fin_prod: buffer storing the running final product
 * @n_prod: next product to be added
 * @n_len: length of next_prod
 */
void add_n(char *fin_prod, char *n_prod, int n_len)
{
	int n, tn = 0;

	while (*(fin_prod + 1))
		fin_prod++;

	for (; *fin_prod != 'x'; fin_prod--)
	{
		n = (*fin_prod - '0') + (*n_prod - '0');
		n += tn;
		*fin_prod = (n % 10) + '0';
		tn = n / 10;

		n_prod--;
		n_len--;
	}
	for (; n_len >= 0 && *n_prod != 'x'; n_len--)
	{
		n = (*n_prod - '0');
		n += tn;
		*fin_prod = (n % 10) + '0';
		tn = n / 10;

		fin_prod--;
		n_prod--;
	}
	if (tn)
		*fin_prod = (tn % 10) + '0';
}

/**
 * main - multiplies 2 +ve nums
 * @argv: arguments passed
 * @argc: array to pointers
 * Return: 0, if arguments incorrect exit 98
 */
int main(int argc, char *argv[])
{
	char *fin_prod, *n_prod;
	int size, ind, dig, z = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_z(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_z(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = str_len(argv[1]) + str_len(argv[2]);
	fin_prod = c_array(size + 1);
	n_prod = c_array(size + 1);

	for (ind = str_len(argv[2]) - 1; ind >= 0; ind--)
	{
		dig = gdig(*(argv[2] + ind));
		gprod(n_prod, argv[1], dig, z++);
		add_n(fin_prod, n_prod, size - 1);
	}
	for (ind = 0; fin_prod[ind]; ind++)
	{
		if (fin_prod[ind] != 'x')
			putchar(fin_prod[ind]);
	}
	putchar('\n');

	free(n_prod);
	free(fin_prod);

	return (0);
}
