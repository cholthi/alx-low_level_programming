#include "main.h"
/* more headers goes there */

/**
* _abs - computes absolute value of a number
* @n: Int char to check
*
* Description: Computes absolute value of a number
* Return: int bool
*/
int _abs(int n)
{
	int mask = (n >> 31);

	return ((mask ^ n) - mask);
}

