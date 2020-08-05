#include "holberton.h"

/**
 *_strlen - returns the length of a string.
 *@s: sting
 *Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 *create_file - a function that creates a file.
 *@filename: is the name of the file to create
 *@text_content: s a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_char;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_char = write(fd, text_content, _strlen(text_content));

	if (write_char == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
