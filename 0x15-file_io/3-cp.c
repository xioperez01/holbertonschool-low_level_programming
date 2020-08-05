#include "holberton.h"

/**
 *main - copies the content of a file to another file
 *@argc: Number of parameters
 *@argv: Parameters
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, i, write_fd2;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\
n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\
\n", argv[2]);
		exit(98);
	}

	while ((i = read(fd1, buff, 1024)) != 0)
	{
		if (i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\
\n", argv[1]);
			exit(98);
		}

		write_fd2 = write(fd2, buff, i);

		if (write_fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
