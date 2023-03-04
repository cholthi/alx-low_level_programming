#include "main.h"
/* more headers goes there */

/**
* leet - leet speak encoder
* @str: * char  string to encode
*
* Description: get the length of a string given to it
* Return: * char
*/
char *leet(char *str)
{
	char original[11] = {'a', 'A', 'e', 'E', 't', 'T', 'o', 'O', 'l', 'L', '\0'};
	char leet[11] = {'4', '4', '3', '3', '7', '7', '0', '0', '1', '1', '\0'};
	int len;
	int i;
	int j;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < _strlen(original); j++)
		{
			if (str[i] == original[j])
				str[i] = leet[j];
		}
	}

	return (str);
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

