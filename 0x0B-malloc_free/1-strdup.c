#include "main.h"
#include <stdlib.h>

/**
* _strlen - get the length of a string given to it
* @s: * char string to calculate length in bytes
*
* Description: get the length of a string given to it
* Return: int
*/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}


/**
 * _strdup - allocate a byte array with size of sizeof(str) initialized to str
 * @str: string to duplicate
 *
 * Return: * char or NULL
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int len;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	arr = malloc((sizeof(char) * len) + 1);
	if (arr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';

	return (str);

}
