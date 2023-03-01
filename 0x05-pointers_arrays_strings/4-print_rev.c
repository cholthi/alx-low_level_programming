#include "main.h"
/* more headers goes there */

/**
* print_rev - print a string in reverse
* @s: * char string to print in reverse
*
* Description: print a string in reverse
* Return: void
*/
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}

/**
* _strlen - get the length of a string given to it
* @s: *s char string to calculate length in bytes
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

