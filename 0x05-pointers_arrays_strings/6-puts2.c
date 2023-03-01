#include "main.h"
/* more headers goes there */

/**
* puts2 print every other of a string
* @str: * strint to print
*
* Description: print every other charatcer of a string
* Return: void
*/
void puts2(char *str)
{
	int i;

	for ( i = 0 ; str[i] != '\0' ; i += 2 )
		_putchar(str[i]);

	_putchar('\n');
}
