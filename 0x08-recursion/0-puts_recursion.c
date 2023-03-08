#include "main.h"


/**
 * _puts_recursion - prints string terminated by null byte
 * @s: * char string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	
	_putchar(*s);
	_puts_recursion(s + 1);
}
