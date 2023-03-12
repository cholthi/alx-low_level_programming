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
 * main - print the program arguments
 * @argc: int arguments count
 * @argv: * char[] arrray of strings
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int counter;

	if (argc > 0)
	{
		for (counter = 0; counter < argc; counter++)
			_puts(argv[counter]);
	}
	return (0);
}
