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
 * main - sums the arguments and print the result
 * @argc: int arguments count
 * @argv: * char[] arrray of strings
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 0;
	int j;
	int sum = 0;
	if (argc < 2)
	{
		_puts("Error");
		return (1);
	}
	for (j = 1; j < argc; j++)
	{
		while (argv[j][i] != '\0')
		{

			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
			{
				_puts("Error");
				return (1);
			}
			i++;
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += _atoi(argv[i]);
	}
	print_number(sum);
	_putchar('\0');
	return (0);
}
