#include "main.h"
/* more headers goes there */

/**
* rot13 - encode  strings as rot13
* @s: * char destination string
*
* Description: get the length of a string given to it
* Return: * char
*/
char *rot13(char *s)
{
	while (*s != '\0')
	{
		if (_isalpha(*s) && ((*s >= 'a' && *s <= 'm') ||
			       (*s >= 'A' && *s <= 'M')))
			*s += 13;
		else if (_isalpha(*s))
			*s -= 13;
		s++;
	}

	return s;
}
/**
* _isalpha - checks if the char is an alphabet letter
* @c: Int char to check
*
* Description: Checks if the char is an alphabet letter
* Return: int bool
*/
int _isalpha(int c)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *letter = alphabet;

	while (*letter != '\0' && *letter != c)
		++letter;
	if (*letter)
		return (1);
	return (0);
}
