#include "main.h"
/* more headers goes there */

/**
* _abs - computes product of two numbers
* @n: Int number to add
* @n: number to add
*
* Description: Computes product of two numbers
* Return: int
*/
int add(int a, int b)
{
	long int ab;

	ab = a + b;
	print_digits(ab);
	return (ab);
}

/**
* print_digits - computes product of two numbers
* @n: Int number to print
*
* Description: Computes product of two numbers
* Return: void
*/
void print_digits(long int n)
{
	if (n / 10)
		print_digits(n / 10);
	_putchar((n % 10) + '0');
}
