#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: name of the file
 * @text_content: text to put
 * Return: numbers of bytes
 */

int create_file(const char *filename, char *text_content)
{
	int file = 0;
	ssize_t i;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		file = open(filename, O_CREAT | O_RDWR | O_TRUNC);
		close(file);
		return (1);
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
	;

	write(file, text_content, i);
	close(file);

	return (1);
}
