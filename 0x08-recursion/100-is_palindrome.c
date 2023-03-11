#include "main.h"


/**
 * _strlen - get string len
 * @str: * char
 *
 * Return: int
 */
int _strlen(char *str)
{
	if (str[0] != '\0')
		return (1 + _strlen(str + 1));
	return (0);
}
/**
 * is_pal_recursive - reverses a string
 * @s: * char string to reverse
 * @i: int i
 * @j: int j
 *
 * Return: int
 */
int is_pal_recursive(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (is_pal_recursive(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks number is palindrome
 * @s:* char
 *
 * Return: int bool
 */
int is_palindrome(char *s)
{
	return (is_pal_recursive(s, 0, _strlen(s) - 1));
}

