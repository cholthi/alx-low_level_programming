#include "main.h"

/* more headers goes there */

/**
* _puts - print C string aka, pointernto character
* @str: *char char to print
*
* Description: print C string aka, pointernto character
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	 _putchar('\n');
}

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
 * main - multiples the arguments and print the result
 * @argc: int arguments count
 * @argv: * char[] arrray of strings
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		_puts("Error");
		return (1);
	}
	print_number(argv[1] * argv[2]);
	_putchar('\n');

	return (0);
}
