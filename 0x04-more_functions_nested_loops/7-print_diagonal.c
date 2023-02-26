#include "main.h"
/* more headers goes there */

/**
* print_diagonal - print ascii diagonal according to argument length followed
* @n: int line length
*
* Description: print ascii diagonal according to argument length follow
* Return: void
*/
void print_diagonal(int n)
{
	int i;
	int ident;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (ident = 0; ident < i; ident++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
