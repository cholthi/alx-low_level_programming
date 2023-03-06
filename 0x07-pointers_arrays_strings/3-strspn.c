#include "main.h"


/**
 * _strspn - fills memeory with constant byte
 * @s: * char string bufer to be filled
 * @accept: * char constant byte to fill
 *
 * Return: unsigned int returns number of bytes with accpet
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 1;
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				n++;
			else if (accept[j + 1] == '\0')
				return (n);
		}
		i++;
	}
	return (n);


}
