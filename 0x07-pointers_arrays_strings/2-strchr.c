#include "main.h"


/**
 * _strchr - search needle in the haystack
 * @s: * char haystack
 * @c: char needle
 *
 * Return: * char returns pointer to first occurence of needle or null
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (i != '\0')
	{
		if (c == s[i])
			return (s[i]);
		i++;
	}

	return ('\0');
}
