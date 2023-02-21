#include "main.h"
/* more headers goes there */

/**
* _isalpha - checks if the char is an alphabet letter
* @c: Int char to check
*
* Description: Checks if the char is an alphabet letter
* Return: int bool
*/
int _isalpha(int c)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *letter = alphabet;

	while (*letter != '\0' && *letter != c)
		++letter;
	if (*letter)
		return (1);
	return (0);
}

