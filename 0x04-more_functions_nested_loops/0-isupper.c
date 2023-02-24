#include "main.h"
/* more headers goes there */

/**
* _isupper - checks its argument if it is a uppercase character
* @c: Int char to check
*
* Description: Check argument if uppercase
* Return: int bool
*/
int _isupper(int c)
{
	int isupper = (c >= 65 && c <= 90);
	return (isupper);
}

