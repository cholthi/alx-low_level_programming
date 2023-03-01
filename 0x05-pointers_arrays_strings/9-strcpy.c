#include "main.h"
/* more headers goes there */

/**
* _strcpy - get the length of a string given to it
* dest: *char dest string
* *src: * char src string
*
* Description: get the length of a string given to it
* Return: int
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *src + i;
		i++;
	}
	dest[i] = '\0';


	return (src);
}

