#include "main.h"


/**
 * append_text_to_file - Appends text to the file
 * @filename: Filename to append to
 * @text_content: Text content to append to filename
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_sz, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w_sz = write(fd, text_content, len);

	if (fd == -1 || w_sz == -1)
		return (-1);

	close(fd);

	return (1);
}
