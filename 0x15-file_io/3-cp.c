#include "main.h"

/**
 * error_exit - exit messages
 * @code: value is exit value or fildes
 * @str: string of 2 filenames
 * @fd: file descriptor
 * Return: 0 on success
 */
int error_exit(int code, char *str, int fd)
{
	switch (code)
	{
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(code);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(code);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(code);
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(code);
		default:
			return (0);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, error_exit on failure
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, rd_bytes, w_bytes;
	char *load[1024];

	if (argc != 3)
		error_exit(97, NULL, 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		error_exit(99, argv[2], 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, argv[1], 0);

	while ((rd_bytes = read(file_from, load, 1024)) != 0)
	{
		if (rd_bytes == -1)
			error_exit(98, argv[1], 0);

		w_bytes = write(file_to, load, rd_bytes);
		if (w_bytes == -1)
			error_exit(99, argv[2], 0);
	}
	close(file_to) == -1 ? (error_exit(100, NULL, file_to)) : close(file_to);
	close(file_from) == -1 ? (error_exit(100, NULL, file_from))
		: close(file_from);
	return (0);
}
