#include "main.h"
#include <stdlib.h>


/**
 *read_textfile - Reads text from fileand print POSIX standard output
 *@filename: Filename to read from
 *@letters: number of characters/bytes to read from the filename
 *
 * Return: 0 incase of error or number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	size_t w_sz, r_sz;

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = (char *) malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	if (filename != NULL)
	{
		r_sz = read(fd, buf, letters);
		w_sz = write(STDOUT_FILENO, buf, r_sz);
		if (w_sz != r_sz)
			return (0);

		free(buf);
		close(fd);
		return (w_sz);
		
	}

	return (0);

}
