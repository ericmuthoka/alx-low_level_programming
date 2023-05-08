#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX std output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the number of letters that were read and printed, or 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n_read, n_written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buf, n_read);
	free(buf);

	if (n_written != n_read)
		return (0);

	close(fd);
	return (n_read);
}

