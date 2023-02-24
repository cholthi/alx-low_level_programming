#include "main.h"
/* more headers goes there */

/**
* more_numbers - print 1 to 14  ten times followed by a newline
*
* Description: Print 1 to 14 ten times followed by a newline
* Return: void
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			print_digits(i);
		}
		_putchar('\n');
	}
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
