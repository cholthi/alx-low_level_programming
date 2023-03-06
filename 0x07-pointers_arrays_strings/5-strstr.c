#include "main.h"


/**
 * _strstr - locates a substring
 * @haystack: * char string to search from
 * @needle: * char string to find
 *
 * Return: unsigned int returns number of bytes with accpet
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int n;

	if (*needle == 0)
		return (haystack);

	while (*haystack != '\0')
	{
		n = 0;

		if (haystack[n] == needle[n])
		{
			do {
				if (needle[n + 1] == '\0')
					return (haystack);
				n++;
			} while (haystack[n] == needle[n]);
		}

		haystack++;
	}

	return ('\0');

}
