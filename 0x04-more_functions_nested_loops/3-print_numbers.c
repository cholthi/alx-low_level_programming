#include "main.h"
/* more headers goes there */

/**
* print_numbers - print 1 to 9 followed by a newline
*
* Description: Print 1 to 9 followed by a newline
* Return: void
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i + '0');
	_putchar('\n');
	return;
}

