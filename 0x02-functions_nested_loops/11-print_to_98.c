#include "main.h"
/* more headers goes there */

/**
* print_to_98 - computes absolute value of a number
* @n: int start number
*
* Description: Computes absolute value of a number
* Return: int bool
*/
void print_to_98(int n)
{
	int mask = (n >> 31);

	return ((mask ^ n) - mask);
}

