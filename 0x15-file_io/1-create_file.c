#include "main.h"


/**
 * create_file - creates file and writes to it
 * @filename: Filename to create and write to
 * @text_content: Content to write to the file
 *
 * Return: int , 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_sz, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_sz = write(fd, text_content, len);

	if (fd == -1 || w_sz == -1)
		return (-1);

	close(fd);

	return (1);
}
