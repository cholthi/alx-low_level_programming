#include "main.h"
/* more headers goes there */

/**
* _strlen - get the length of a string given to it
* sn: *s char string to calculate length in bytes
*
* Description: get the length of a string given to it
* Return: int
*/
int _strlen(char *s);
{
	int len = 0;

	while(*(s + len) != '\0')
		len++;

	return (len);
}

