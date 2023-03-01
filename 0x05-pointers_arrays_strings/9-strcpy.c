#include "main.h"
/* more headers goes there */

/**
* _strcpy - copy src string to dest string buffer
* @dest: *char dest string
* @src: * char src string
*
* Description: copy src string to dest string buer
* Return: int
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';


	return (dest);
}

