#include "main.h"
/* more headers goes there */

/**
* main  print the lowercase alphabet to stdout
*
* Description: Print the lowercase alphabet to sdtout
* Return: int
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

