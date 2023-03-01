#include "main.h"
/* more headers goes there */

/**
* _puts - print C string aka, pointernto character
* @str: *char char to print
*
* Description: print C string aka, pointernto character
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

