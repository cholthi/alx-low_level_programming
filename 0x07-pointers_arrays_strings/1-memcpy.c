#include "main.h"


/**
 * _memcpy - copy bytes from src to dest buffer
 * @dest: * char buffer to copy bytes to
 * @src: * char buffer to copy bytes from
 * @n: int number of bytes to copy from the src
 *
 * Return: * char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
