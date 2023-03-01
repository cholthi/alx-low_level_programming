#include "main.h"
/* more headers goes there */

/**
* puts_half - get the length of a string given to it
* @str: *s char string to calculate length in bytes
*
* Description: get the length of a string given to it
* Return: void
*/
void puts_half(char *str)
{
	int n;
	int len;
	int i;

	len = _strlen(str);
	n = len / 2;

	if (len % 2 != 0)
		n = (len - 1) / 2;
	for (i = n; i <= len - 1; i++)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
	}
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
