#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*read_textfile - function that reads a text file and
*prints it to the POSIX standard output.
*@filename: fliename
*@letters: is the number of letters it should read and print
*Return: the actual number of letters it could read and print
*if the file can not be opened or read, return 0
*if filename is NULL return 0
*if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr;
	int nl, fd;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	nl = read(fd, buffer, letters);
	if (nl == -1)
	{
		free(buffer);
		return (0);
	}

	wr = write(STDIN_FILENO, buffer, nl);
	if (wr != nl || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (nl);
}
