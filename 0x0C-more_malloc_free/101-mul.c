#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_s - prints string
 * @str: string
 * @len: size of string
 * Return: void
 */
void print_s(char *str, int len)
{
	int x, y;

	x = y = 0;
	while (x < 1)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == len - 1)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies char with string and puts answer into dest
 * @a: char to multiply
 * @n1: string to multiply
 * @n_i: last non NULL indext of n1
 * @d: destination of multiplication
 * @d_i: highest index to start addition
 * Return: pointer to d, NULL on failuer
 */
char *mul(char a, char *n1, int n_i, char *d, int d_i)
{
	int y, z, mul, add, m_rem, a_rem;

	m_rem = a_rem = 0;
	for (y = n_i, z = d_i; y >= 0; y--, z--)
	{
		mul = (a - '0') * (n1[y] - '0') + m_rem;
		m_rem = mul / 10;
		add = (d[z] - '0') + (mul % 10) + a_rem;
		a_rem = add / 10;
		d[z] = add % 10 + '0';
	}
	for (a_rem += m_rem; z >= 0 && a_rem; z--)
	{
		add = (d[z] - '0') + a_rem;
		a_rem = add / 10;
		d[z] = add % 10 + '0';
	}
	if (a_rem)
		return (NULL);
	return (d);
}

/**
 * check_dig - checks that arguments are digits
 * @ap: pointer to argument
 * Return: 0 if digits, 1 otherwise
 */
int check_dig(char **ap)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; ap[x][y]; y++)
			if (ap[x][y] < '0' || ap[x][y] > '9')
				return (1);
	}
	return (0);
}

/**
 * st: initialize a string
 * @str: string to initialize
 * @len: length of string
 * Return: void
 */
void st(char *str, int len)
{
	int x;

	for (x = 0; x < len; x++)
		str[x] = '0';
	str[x] = '\0';
}

/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 (success), exit (98) otherwise
 */
int main(int argc, char *argv[])
{
	int len1, len2, l, bi, c;
	char *d;
	char *b;
	char f[] = "Errnor\n";

	if (argc != 3 || check_dig(argv))
	{
		for (bi = 0; f[bi]; bi++)
			_putchar(f[bi]);
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	l = len1 + len2 + 1;
	d = malloc(l * sizeof(char));
	if (d == NULL)
	{
		for (bi = 0; f[bi]; bi++)
			_putchar(f[bi]);
		exit(98);
	}
	st(d, l - 1);
	for (bi = len2 - 1, c = 0; bi >= 0; bi--, c++)
	{
		b = mul(argv[2][bi], argv[1], len1 - 1, d, (l - 2) - c);
		if (b == NULL)
		{
			for (bi = 0; f[bi]; bi++)
				_putchar(f[bi]);
			free(d);
			exit(98);
		}
	}
	print_s(d, l - 1);
	return (0);
}
