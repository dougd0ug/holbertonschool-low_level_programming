#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: numbers of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file = 0;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;
	ssize_t total_written;

	if (filename == NULL)
	{
		return (0);
	}

	open_file = open(filename, O_RDONLY);

	if (open_file == -1)
	{
		return (0);
	}

	bytes_read = read(open_file, buffer, letters);

	if (bytes_read == -1)
	{
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
	{
		return (0);
	}

	total_written += bytes_written;
	close(open_file);
	return (total_written);
}
