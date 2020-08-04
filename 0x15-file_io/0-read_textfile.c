#include "holberton.h"

/**
 *read_textfile - a function that reads a text file and prints
 *it to the POSIX standard output.
 *@letters: Is the number of letters it should read and print
 *@filename: File to read
 *Return:  the actual number of letters it could read and print
 *if the file can not be opened or read, return 0
 *if filename is NULL return 0
 *if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t nr_bytes, nw_bytes;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	nr_bytes = read(fd, buffer, letters);

	if (nr_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nw_bytes = write(STDOUT_FILENO, buffer, letters);

	if (nw_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (nr_bytes);
}
