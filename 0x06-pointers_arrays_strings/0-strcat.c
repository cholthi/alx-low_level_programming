#include "main.h"
/* more headers goes there */

/**
* _strcat - concatnates two strings
* @dest: * char destination string
* @src: * char source string
*
* Description: get the length of a string given to it
* Return: * char
*/
char *_strcat(char *dest, char *src)
{
	int len;
	int j;

	len = _strlen(dest);
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';

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

