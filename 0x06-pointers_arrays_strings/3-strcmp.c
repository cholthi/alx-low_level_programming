#include "main.h"
/* more headers goes there */

/**
* _strcmp - compares two strings lexigraphically
* @s1: * char string one
* @s2: * char string two
*
* Description: compares two strings lexigraphically
* Return: int
*/
int _strcmp(char *s1, char *s2)
{

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
}
