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
 * _strcpy - copy str2 to str1
 * @str1: buffer to copy str2 to
 * @str2: string to copy
 *
 * Return: char *
 */
int _strcpy(char *str1, char *str2, int n)
{
	unsigned int i = 0;
	unsigned int j = n;

	while (str2[i] != '\0')
	{
		str1[j] = str2[i];
		i++;
		j++;
	}

	return (j);
}


/**
 * str_concat - allocate a byte array with size of sizeof(str)
 * @s1: string one
 * @s2: string two
 *
 *Return: * char or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int str1len;
	unsigned int str2len;
	unsigned int j = 0;

	str1len = _strlen(s1);
	str2len = _strlen(s2);
	arr = malloc((sizeof(char) * (str1len + str2len)) + 1);

	if (arr == NULL)
		return (NULL);

	if (s1 == NULL)
		j = _strcpy(arr, "", 0);
	else
		j = _strcpy(arr, s1, 0);

	if (s2 == NULL)
		j = _strcpy(arr, "", j);
	else
		j = _strcpy(arr, s2, j);
	arr[j] = '\0';

	return (arr);

}
