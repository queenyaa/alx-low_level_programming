#include "main.h"

/**
 * error_exit - error codes
 * @code: the errors
 * @message: error messages
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * print_elf_header_info - prints info from ELF header
 * @elf_header: pointer to ELF header structure
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	int x;

	printf("  Magic:   ");
	for (x = 0; x < EI_NIDENT; x++)
		printf("%02x ", elf_header->e_ident[x]);
	printf("\n");

	printf("  Class:                             %s\n",
			elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");

	printf("  Data:                              %s\n",
			elf_header->e_ident[EI_DATA] == ELFDATA2LSB
			? "2's complement, little endian" :
			elf_header->e_ident[EI_DATA] == ELFDATA2MSB
			? "2's complement, big endian" : "Invalid");

	printf("  Version:                           %d (current)\n",
			elf_header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %s\n",
			elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "HP-UX" :
			elf_header->e_ident[EI_OSABI] == ELFOSABI_NETBSD
			? "NetBSD" : "UNIX -System V");

	printf("  ABI Version:                       %d\n",
			elf_header->e_ident[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
			elf_header->e_type == ET_NONE ? "NONE (Unknown)" :
			elf_header->e_type == ET_REL ? "REL (Relocatable)" :
			elf_header->e_type == ET_EXEC ? "EXEC (Executable)" :
			elf_header->e_type == ET_DYN ? "DYN (Shared object)" :
			elf_header->e_type == ET_CORE ? "CORE (Core file)" : "Unknown");

	printf("  Entry point address:               0x%lx\n",
			(unsigned long)(elf_header->e_entry));
}

/**
 * main - displays info from ELF header of ELF file
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, error codes on failure
 */

int main(int argc, char *argv[])
{
	int file_des;
	ssize_t rd_bytes;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		error_exit(98, "Usage: elf_header elf_filename");

	file_des = open(argv[1], O_RDONLY);
	if (file_des == -1)
		error_exit(98, "Error: Cannot open ELF file");

	rd_bytes = read(file_des, &elf_header, sizeof(elf_header));

	if (rd_bytes != sizeof(elf_header)
			|| elf_header.e_ident[EI_MAG0] != ELFMAG0
			|| elf_header.e_ident[EI_MAG1] != ELFMAG1
			|| elf_header.e_ident[EI_MAG2] != ELFMAG2
			|| elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(file_des);
		error_exit(98, "Error: Not an ELF file");
	}

	print_elf_header_info(&elf_header);

	close(file_des);
	return (0);
}
