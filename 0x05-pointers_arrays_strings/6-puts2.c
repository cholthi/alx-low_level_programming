#include "main.h"
/* more headers goes there */

/**
* puts2 - print every other of a string
* @str: * strint to print
*
* Description: print every other charatcer of a string
* Return: void
*/
void puts2(char *str)
{
	int i;

	if (_strlen(str) == 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
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
