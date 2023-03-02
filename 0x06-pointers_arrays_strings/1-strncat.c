#include "main.h"
/* more headers goes there */

/**
* _stnrcat - concatnates two strings
* @dest: * char destination string
* @src: * char source string
* @n: int number of bytes to copy
*
* Description: copy n bytes from src to dest and return dest
* Return: * char
*/
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int len2;
	int j;

	len = _strlen(dest);
	len2 = _strlen(src);
	if (len2 > n)
	{
		for (j = 0; j < n; j++, len++)
		{
			dest[len] = src[j];
		}
	} else
	{
		for (j = 0; src[j] != '\0'; j++, len++)
			dest[len] = src[j];
	}
	/*dest[len] = '\0'; */

	return (dest);

}

/**
* _strlen - get the length of a string given to it
* @s: * char string to calculate length in bytes
*
* Description: get the length of a string given to it
* Return: int
*/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

