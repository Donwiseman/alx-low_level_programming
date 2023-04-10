#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to be appended
 * @text_content: content to be appended
 *
 * Return: 1 if succesful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (*(text_content + len))
		len++;
	if ((write(fd, text_content, (unsigned int) len)) < len)
		return (-1);
	close(fd);
	return (1);
}
