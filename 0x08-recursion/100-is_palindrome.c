#include "main.h"


/**
 * _strlen - get string len
 * @str: * char
 *
 * Return: int
 */
int _strlen(char *str)
{
	int slen = 0;

	while (*str != '\0')
                slen++;
	return (slen);
}
/**
 * rev_recursive - reverses a string
 * @s: * char string to reverse
 *
 * Return: * char string
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
 * @n: int number
 *
 * Return: int bool
 */
int is_palindrome(char *s)
{
	return (is_pal_recursive(s, 0, _strlen(s) - 1));
}

