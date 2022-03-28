#include "main.h"
#include <string.h>

/**
*create_file - function that creates a file.
*@filename: is the name of the file to create.
*@text_content: is a NULL terminated string to write to the file
*
*/
int create_file(const char *filename, char *text_content)
{
	int wr, fd;
	unsigned int len = 0;
	char *buffer;

	len = strlen(text_content);
	buffer = malloc(sizeof(char) * len);

	if (buffer == NULL)
		return (-1);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT, O_TRUNC, O_RDWR, 600);
	if (text_content == NULL)
		text_content = "";

	wr = write(STDIN_FILENO, buffer, len);

	if (fd == -1 || wr == -1)
	{
		free(buffer);
		return (-1);
	}

	free(buffer);
	close(fd);

	return (1);
}
