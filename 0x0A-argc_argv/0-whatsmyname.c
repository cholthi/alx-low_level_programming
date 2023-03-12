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
 * main - print the program name
 * @argc: int arguments count
 * @argv: * char[] arrray of strings
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		_puts(argv[0]);
	return (0);
}
