#include "main.h"
/* more headers goes there */

/**
* _strncpy - copy src to dest
* @dest: * char destination string
* @src: * char source string
* @n: int number of bytes to copy
*
* Description: copy n bytes from src to dest and return dest
* Return: * char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len;
	int j;

	len = _strlen(dest);

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[len + j] = '\0';

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

