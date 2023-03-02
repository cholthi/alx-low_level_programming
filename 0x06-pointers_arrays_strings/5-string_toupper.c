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
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}
	 return (s);
}

