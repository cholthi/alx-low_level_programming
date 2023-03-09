#include "main.h"


/**
 * _strlen_recursion - prints string terminated by null byte
 * @s: * char string to print
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		len += 1;
	}

	return len;
}
