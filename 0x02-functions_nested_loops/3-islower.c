#include "main.h"
/* more headers goes there */

/**
* _islower - checks if the argument is a lowercase char
*
* Description: checks if the argument is a lowercase char
* Return: int bool
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

