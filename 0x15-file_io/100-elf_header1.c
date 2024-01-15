#include "main.h"

/**
 * in_elf - look if ELF file
 * @e_ident: pointer to array containing ELF
 * Descrip: exit code 98 if not ELF file
 */
void in_elf(unsigned char *e_ident)
{
	int list;

	for (list = 0; list < 4; list++)
	{
		if (e_idt[list] != 127 &&
				e_ident[list] != 'E' &&
				e_ident[list] != 'L' &&
				e_ident[list] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * pr_magic - prints magic numbers
 * @e_ident: pointer to array of ELF
 * Des: separate magic numbers by spaces
 */
void pr_magic(unsigned char *e_ident)
{
	int list;

	printf("  Magic:   ");

	for (list = 0; list < EI_NIDENT; list++)
	{
		printf("%02x", e_ident[list]);

		if (list == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * pr_class - prints class of ELF
 * @e_ident: pointer to array of ELF class
 */
void pr_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_idt[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		default:
			printf("<unknown: %x>\n", e_idt[EI_CLASS]);
	}
}

/**
 * pr_data - data of ELF
 * @e_ident: pointer to array
 */

void pr_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_idt[EI_CLASS]);
	}
}

/**
 * pr_version - version of ELF Header
 * @e_ident: pointer to array
 */
void pr_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
			e_ident[EI_VERSION]);

	switch (e_idt[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * pr_osabi - prints OS/ABI of an ELF
 * @e_ident: pointer to array
 */
void pr_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		default:
			printf("<unknown: %x>\n", e_idt[EI_OSABI]);
	}
}

/**
 * pr_abi - prints ABI version
 * @e_idt: pointer to arry
 */
void pr_abi(unsigned char *e_idt)
{
	printf("  ABI Version:                       %d\n",
			e_idt[EI_ABIVERSION]);
}

/**
 * pr_type - prints type
 * @e_t: type of ELF
 * @e_ident: pointer to an array
 */
void pr_type(unsigned int e_t, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_t >>= 8;

	printf("  Type:                              ");

	switch (e_t)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Exevutable file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_t);
	}
}

/**
 * pr_entry - entry point of ELF
 * @e_in: address of the entry point
 * @e_ident: pointer to array
 */

void pr_entry(unsigned long int e_in, unsigned char *e_identt)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_in = ((e_in << 8) & 0xFF00FF00) |
			((e_in >> 8) & 0xFF00FF);
		e_in = (e_in << 16) | (e_in >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_in);

	else
		printf("%#lx\n", e_in);
}

/**
 * exit_elf - close the ELF file
 * @elf: the fildes of ELF
 * Des: if file cannot be closed - exit code 98
 */
void exit_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't clse fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - displays info in the ELF header
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 on success, 98 exit code if fails
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *title;
	int x, y;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	title = malloc(sizeof(Elf64_Ehdr));
	if (title == NULL)
	{
		exit_elf(x);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	y = read(x, title, sizeof(Elf64_Ehdr));
	if (y == -1)
	{
		free(title);
		exit_elf(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	in_elf(title->e_ident);
	printf("ELF Header:\n");
	pr_magic(title->e_ident);
	pr_class(title->e_ident);
	pr_data(title->e_ident);
	pr_version(title->e_ident);
	pr_osabi(title->e_ident);
	pr_abi(title->e_ident);
	pr_type(title->e_t, title->e_ident);
	pr_entry(title->e_in, title->e_ident);

	free(title);
	exit_elf(x);
	return (0);
}
