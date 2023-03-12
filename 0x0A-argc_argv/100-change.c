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
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/**
 * main - calculates the minimum no of cents to give as change
 * @argc: int arguments count
 * @argv: * char[] arrray of strings
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int cents = 0;
	int n;

	if (argc != 2)
	{
		_puts("Error");
		return (1);
	}
	if (_atoi(argv[1]) < 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	n = _atoi(argv[1]);
	if (n >= 25)
	{
		cents += n % 25;
		n = n / 25;
	}
	if (n >= 10)
	{
		cents += n % 10;
		n = n / 10;
	}
	if (n >= 5)
	{
		cents += n % 5;
		n = n / 5;
	}
	if (n >= 2)
	{
		cents += n % 2;
		n = n / 2;
	}
	cents = n;
	print_number(cents);
	_putchar('\n');
	return (0);
}
