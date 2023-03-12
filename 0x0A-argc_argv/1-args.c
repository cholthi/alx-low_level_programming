#include "main.h"

/* more headers goes there */

/**
* print_number - print C string aka, pointernto character
* @n: int number to print
*
* Description: print C integer as a decimal ascii chaaracters
* Return: void
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * main - print the number of aguments passed to it
 * @argc: int arguments count
 * @argv: * char[] arrray of strings
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	argv = argv;
	print_number(argc - 1);
	return (0);
}
