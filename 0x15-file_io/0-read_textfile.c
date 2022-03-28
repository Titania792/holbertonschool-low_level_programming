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
	ssize_t wr, nl, fd;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	nl = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, nl);

	if (fd == -1 || nl == -1 || wr != nl || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (wr);
}
