#include "main.h"
/* more headers goes there */

/**
* print_number - print number
* @n: * char  string to encode
*
* Description: get the length of a string given to it
* Return: void
*/
void print_number(int n)
{

	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
