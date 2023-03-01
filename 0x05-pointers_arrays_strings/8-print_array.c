#include "main.h"
/* more headers goes there */

/**
* print_array - get the length of a string given to it
* a: * int array
* n: int length to print
*
* Description: get the length of a string given to it
* Return: int
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n -1; i++)
		print_digits(a[i]);

	_putchar('\n');
}


/**
* print_digits - computes product of two numbers
* @n: Int number to print
*
* Description: Computes product of two numbers
* Return: void
*/
void print_digits(int n)
{
	if (n < 0)
	{
		 _putchar('-');
		n = n * -1;
	}

	if (n / 10)
		print_digits(n / 10);
	 _putchar(n % 10 + '0');
}
