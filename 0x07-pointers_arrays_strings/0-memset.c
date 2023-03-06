#include "main.h"


/**
 * _memset - fills memeory with constant byte
 * @s: * char string bufer to be filled
 * @b: char constant byte to fill
 * @n: int number of bytes to fill from the bufer
 *
 * Return: * char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
