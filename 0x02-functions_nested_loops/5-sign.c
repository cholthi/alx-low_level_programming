#include "main.h"
/* more headers goes there */

/**
* print_sign - checks the sign of a number
* @n: Int char to check
*
* Description: Checksthe sign of a number
* Return: int
*/
int print_sign(int n)
{
	int sign;

	sign = (n > 0) - (n < 0);
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (sign == 1)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}

