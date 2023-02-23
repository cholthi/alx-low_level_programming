#include "main.h"
/* more headers goes there */

/**
* print_to_98 - computes absolute value of a number
* @n: int start number
*
* Description: Computes absolute value of a number
* Return: void
*/
void print_to_98(int n)
{
	int i;

	if ( n == 98)
		print_digits(n);
	if (n < 98)
	{
		for(i =  n; i <= 98; i++)
			print_digits(i);
	}

	if (n > 98)
		for (i = n; i <= 98; i--)
			print_digits(i);
	_putchar('\n');
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
        if (n < 0)
        {
                _putchar('-');
                n = n * -1;
        }

        if (n / 10)
                print_digits(n / 10);
        _putchar(n % 10 + '0');
}

