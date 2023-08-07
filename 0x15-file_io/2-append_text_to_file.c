#include "main.h"

/**
 * append_text_to_file - appends to the end of file, a text
 * @text_content: text to append
 * @filename: the name of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t txt_len, w_bytes;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		txt_len = 0;
		while (text_content[txt_len])
			txt_len++;

		w_bytes = write(file_des, text_content, txt_len);
		if (w_bytes == -1 || w_bytes != txt_len)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
