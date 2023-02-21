#include "main.h"
/* more headers goes there */

/**
* _isalpha - checks the sign of a number
* @c: Int char to check
*
* Description: Checksthe sign of a number
* Return: int
*/
int _isalpha(int c)
{
	int sign
	
	sign = (x > 0) - (x < 0);
	if (c == 0)
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

