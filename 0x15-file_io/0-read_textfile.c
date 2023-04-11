#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pathname to file
 * @letters: letters or characters to read
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, fd;
	char *buf = (char *) malloc(letters);

	if (filename == NULL || buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	n = read(fd, buf, letters);
	if (n < 1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if ((write(STDOUT_FILENO, buf, n)) < n)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	if ((close(fd) == -1))
		return (0);
	return (n);
}
