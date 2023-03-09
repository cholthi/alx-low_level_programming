#include "main.h"


/**
 * _strlen_recursion - prints string terminated by null byte
 * @s: * char string to print
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
