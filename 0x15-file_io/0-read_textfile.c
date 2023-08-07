#include "main.h"

/**
 * read_textfile - Reads a text file and prints to POSIX stdout
 * @filename: name of file
 * @letters: num of letters to read and print
 * Return: actual number of letters to read and printed, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	char *load;
	ssize_t rd_bytes, w_bytes;

	if (filename == NULL)
		return (0);

	file_des = open(filename, 0_RDONLY);
	if (file_des == -1)
		return (0);

	load = malloc(sizeof(char) * letters);
	if (load == NULL)
	{
		close(file_des);
		return (0);
	}

	rd_bytes = read(file_des, load, letters);
	if (rd_bytes == -1)
	{
		close(file_des);
		free(load);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, load, rd_bytes);
	if (w_bytes == -1 || w_bytes != rd_bytes)
	{
		close(file_des);
		free(load);
		return (0);
	}
	close(file_des);
	free(load);
	return (w_bytes);
}
