#include "main.h"


/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: * char string to search
 * @accept: * char set of chars to find any of its bytes
 *
 * Return: unsigned int Returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int n = 0;
	unsigned int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
		}
		if (n > 0)
			return (s);
		s++;
	}
	return ('\0');


}
