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
	int last = (n % 10);

	_putchar(last - '0');
	return (last);
}

