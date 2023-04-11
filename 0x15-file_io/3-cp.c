#include "main.h"
#include <stdio.h>

/**
 * open4rd - open a given filename with a file descriptor
 * @filename: filename
 *
 * Return: returns the fd
 */
int open4rd(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open4wrcr - open a given filename with a file descriptor
 * @filename: filename
 *
 * Return: returns the fd
 */
int open4wrcr(char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * myread - read from a file
 * @fd: file descriptor
 * @buffer: buffer
 * @byte: byte to be read
 * @filename: filename which the decriptor is for
 *
 * Return: number of bytes read
 */
int myread(int fd, char *buffer, int byte, char *filename)
{
	int n;

	n = read(fd, buffer, byte);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (n);
}

/**
 * mywrite - read from a file
 * @fd: file descriptor
 * @buffer: buffer
 * @byte: byte to write
 * @filename: filename which the decriptor is for
 *
 * Return: number of bytes written
 */
int mywrite(int fd, char *buffer, int byte, char *filename)
{
	int n;

	n = write(fd, buffer, byte);
	if (n != byte)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (n);
}

/**
 * main - copies a given file to another file
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: 0 or various other exit codes
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	char *file1, *file2;
	int fd1, fd2, n, err = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = argv[1];
	file2 = argv[2];
	fd1 = open4rd(file1);
	fd2 = open4wrcr(file2);
	while (n)
	{
		n = myread(fd1, buffer, 1024, file1);
		if (n > 0)
			mywrite(fd2, buffer, (unsigned int) n, file2);
		else
			break;
	}
	if (close(fd1) == -1)
		err = dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	if (close(fd2) == -1)
		err = dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	if (err > 0)
		exit(100);
	exit(0);
}
