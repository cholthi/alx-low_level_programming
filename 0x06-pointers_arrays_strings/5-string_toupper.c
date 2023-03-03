#include "main.h"
/* more headers goes there */

/**
* string_toupper - changes character of a given string to upper case
* @s: * char string
*
* Description: changes character of a given string to upper case
* Return: * char
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

