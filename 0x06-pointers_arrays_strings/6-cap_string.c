#include "main.h"
/* more headers goes there */

/**
* cap_string - compares two strings lexigraphically
* @s: * char string one
*
* Description: compares two strings lexigraphically
* Return:* char
*/
char *cap_string(char *str)
{

	int len;
	int i = 0;

	len = _strlen(str);
	while (i < len)
	{
		while (_isspace(str[i]))
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		while (!_isspace(str[i]) && i < len)
		{
			i++;
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

int _isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || '\f' || c == '\r')
		return (1);
	return (0);
}
