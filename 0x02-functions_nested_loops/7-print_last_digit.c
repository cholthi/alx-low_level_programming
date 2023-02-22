#include "main.h"
/* more headers goes there */

/**
* print_last_digit -Prints and returns the last digit of a number
* @n: number to return last digit from
*
* Description: Prints and returns the last digit of a number
* Return: int
*/
int print_last_digit(int n)
{
	int mask;
	int _absn;
	int last;

	mask = (n >> 31);
	_absn = (mask ^ n) - mask;
	last = (_absn % 10);
	_putchar(last + '0');
	return (last);
}

