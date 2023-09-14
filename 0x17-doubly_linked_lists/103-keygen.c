#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @usrn: username
 * @len: length of username
 * Return: biggest number
 */
int f4(char *usrn, int len)
{
	int cr;
	int vcr;
	unsigned int r_num;

	cr = *usrn;
	vcr = 0;

	while (vcr < len)
	{
		if (cr < usrn[vcr])
			cr = usrn[vcr];
		vcr += 1;
	}
	srand(cr ^ 14);
	r_num = rand();

	return (r_num & 63);
}

/**
 * f5 = multiplies each char of username
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
	int cr;
	int vcr;

	cr = vcr = 0;

	while (vcr < len)
	{
		cr = cr + usrn[vcr] * usrn[vcr];
		vcr += 1;
	}
	return (((unsigned int)cr ^ 239) & 63);
}

/**
 * f6 - generates a random char
 * @usrn: username
 * Return: random char
 */
int f6(char *usrn)
{
	int cr;
	int vcr;

	cr = vcr = 0;

	while (vcr < *usrn)
	{
		cr = rand();
		vcr += 1;
	}
	return (((unsigned int)cr ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, cr, vcr;
	long beg[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* --- f1 --- */
	keygen[0] = ((char *)beg)[(len ^ 59) & 63];
	/* --- f2 --- */
	cr = vcr = 0;
	while (vcr < len)
	{
		cr = cr + argv[1][vcr];
		vcr = vcr + 1;
	}
	keygen[1] = ((char *)beg)[(cr ^ 79) & 63];
	/* --- f3 --- */
	cr = 1;
	vcr = 0;
	while (vcr < len)
	{
		cr = argv[1][vcr] * cr;
		vcr = vcr + 1;
	}
	keygen[2] = ((char *)beg)[(cr ^ 85) & 63];
	/* --- f4 --- */
	keygen[3] = ((char *)beg)[f4(argv[1], len)];
	/* --- f5 --- */
	keygen[4] = ((char *)beg)[f5(argv[1], len)];
	/* --- f6 --- */
	keygen[5] = ((char *)beg)[f6(argv[1])];
	keygen[6] = '\0';
	for (cr = 0; keygen[cr]; cr++)
		printf("%c", keygen[cr]);
	return (0);
}
