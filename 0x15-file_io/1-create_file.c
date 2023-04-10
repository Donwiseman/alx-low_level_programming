#include "main.h"

/**
 * create_file - creates a file and write some content into it
 * @filename: name of file
 * @text_content: content to put in the file
 *
 * Return: 1 if succesful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, PERM = 0600, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT, PERM);
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
