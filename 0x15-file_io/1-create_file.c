#include "main.h"

/**
 * create_file - creates a file and writes into it
 * @filename: name of file to create
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_cr;
	ssize_t txt_len, w_bytes;

	if (filename == NULL)
		return (-1);

	file_cr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_cr == -1)
		return (-1);

	if (text_content != NULL)
	{
		txt_len = 0;
		while (text_content[txt_len])
			txt_len++;

		w_bytes = write(file_cr, text_content, txt_len);
		if (w_bytes == -1 || w_bytes != txt_len)
		{
			close(file_cr);
			return (-1);
		}
	}
	close(file_cr);
	return (1);
}
