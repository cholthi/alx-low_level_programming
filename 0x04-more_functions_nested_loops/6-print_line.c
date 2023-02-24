#include "main.h"
/* more headers goes there */

/**
* print_line - print ascii line according to argument length followed by a newline
* @n: line length
*
* Description: print ascii line according to argument length followed by a newline
* Return: void
*/
void print_line(int n)
{
	int i;
        
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
